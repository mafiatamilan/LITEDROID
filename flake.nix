{
  description = "Python Qt6 Hello World with Nix";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
  };

  outputs = { self, nixpkgs }: {
    devShell.x86_64-linux = let
      pkgs = import nixpkgs { system = "x86_64-linux"; };
    in pkgs.mkShell {
      packages = [
        pkgs.python310Full
        pkgs.python310Packages.pyside6
      ];

      shellHook = ''
        echo "🐍 PySide6 development shell ready!"
      '';
    };
  };
}
