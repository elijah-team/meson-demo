CODE=.

all:
	-mkdir -p B/Prelude/
	cc -c $(CODE)/Prelude/Prelude.c -o B/Prelude/Prelude.o -I. -I $(CODE)/Prelude
	-mkdir -p B/stdlib/
	-mkdir -p B/stdlib/std.collections
	cc -c $(CODE)/stdlib/std.collections/List_112.c -o B/stdlib/std.collections/List_112.o -I. -I $(CODE)/Prelude -I $(CODE)/stdlib/std.collections
	cc -c $(CODE)/stdlib/std.collections/List_111.c -o B/stdlib/std.collections/List_111.o -I. -I $(CODE)/Prelude -I $(CODE)/stdlib/std.collections
	-mkdir -p B/stdlib/std.io
	cc -c $(CODE)/stdlib/std.io/Directory.c -o B/stdlib/std.io/Directory.o -I. -I $(CODE)/Prelude -I $(CODE)/stdlib/std.collections -I $(CODE)/stdlib/std.io

	-mkdir -p B/listfolders3/wpkotlin_c.demo.list_folders
	cc -c $(CODE)/listfolders3/wpkotlin_c.demo.list_folders/__MODULE__.c -o B/listfolders3/wpkotlin_c.demo.list_folders/__MODULE__.o  -I. -I $(CODE)/Prelude -I $(CODE)/stdlib/std.collections -I $(CODE)/stdlib/std.io
	cc -c $(CODE)/listfolders3/wpkotlin_c.demo.list_folders/MainLogic.c -o B/listfolders3/wpkotlin_c.demo.list_folders/MainLogic.o -I. -I $(CODE)/Prelude -I $(CODE)/stdlib/std.collections -I $(CODE)/stdlib/std.io
	cc -c $(CODE)/listfolders3/Main.c -o B/listfolders3/Main.o -I. -I $(CODE)/Prelude -I $(CODE)/stdlib/std.collections -I $(CODE)/stdlib/std.io
	true mkdir -p B/
	cc -c $(CODE)/main.c -o B/main.o -I. -I $(CODE)/Prelude -I $(CODE)/stdlib/std.collections -I $(CODE)/stdlib/std.io
	cc \
	./B/main.o \
	./B/listfolders3/wpkotlin_c.demo.list_folders/__MODULE__.o \
	./B/listfolders3/wpkotlin_c.demo.list_folders/MainLogic.o \
	./B/listfolders3/Main.o \
	./B/Prelude/Prelude.o \
	./B/stdlib/std.collections/List_111.o \
	./B/stdlib/std.collections/List_112.o \
	./B/stdlib/std.io/Directory.o \
	-o B/listfolders3.exe -l gc

.PHONY: all
