{ pkgs }: {
	deps = [
		pkgs.poetry
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}