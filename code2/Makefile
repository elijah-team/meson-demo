CC=c++ -g `pkg-config --cflags glib-2.0`
CODE=.

all: prelude std_collections std_io listfolders3_wpkotlin_c_demo_list_folders main listfolders3.exe

prelude:
	-mkdir -p B/Prelude/
	$(CC) -c $(CODE)/Prelude/Prelude.c -o B/Prelude/Prelude.o -I. -I $(CODE)/Prelude

std_collections:
	-mkdir -p B/stdlib/std.collections
	$(CC) -c $(CODE)/stdlib/std.collections/List_112.c -o B/stdlib/std.collections/List_112.o -I. -I $(CODE)/Prelude -I $(CODE)/stdlib/std.collections
	$(CC) -c $(CODE)/stdlib/std.collections/List_111.c -o B/stdlib/std.collections/List_111.o -I. -I $(CODE)/Prelude -I $(CODE)/stdlib/std.collections

std_io:
	-mkdir -p B/stdlib/std.io
	$(CC) -c $(CODE)/stdlib/std.io/Directory.c -o B/stdlib/std.io/Directory.o -I. -I $(CODE)/Prelude -I $(CODE)/stdlib/std.collections -I $(CODE)/stdlib/std.io

listfolders3_wpkotlin_c_demo_list_folders:
	-mkdir -p B/listfolders3/wpkotlin_c.demo.list_folders
	$(CC) -c $(CODE)/listfolders3/wpkotlin_c.demo.list_folders/__MODULE__.c -o B/listfolders3/wpkotlin_c.demo.list_folders/__MODULE__.o  -I. -I $(CODE)/Prelude -I $(CODE)/stdlib/std.collections -I $(CODE)/stdlib/std.io
	$(CC) -c $(CODE)/listfolders3/wpkotlin_c.demo.list_folders/MainLogic.c -o B/listfolders3/wpkotlin_c.demo.list_folders/MainLogic.o -I. -I $(CODE)/Prelude -I $(CODE)/stdlib/std.collections -I $(CODE)/stdlib/std.io
	$(CC) -c $(CODE)/listfolders3/Main.c -o B/listfolders3/Main.o -I. -I $(CODE)/Prelude -I $(CODE)/stdlib/std.collections -I $(CODE)/stdlib/std.io

main:
	-mkdir -p B/
	$(CC) -c $(CODE)/main.c -o B/main.o -I. -I $(CODE)/Prelude -I $(CODE)/stdlib/std.collections -I $(CODE)/stdlib/std.io

listfolders3.exe:
	-mkdir -p B/stdlib/
	$(CC) \
	./B/main.o \
	./B/listfolders3/wpkotlin_c.demo.list_folders/__MODULE__.o \
	./B/listfolders3/wpkotlin_c.demo.list_folders/MainLogic.o \
	./B/listfolders3/Main.o \
	./B/Prelude/Prelude.o \
	./B/stdlib/std.collections/List_111.o \
	./B/stdlib/std.collections/List_112.o \
	./B/stdlib/std.io/Directory.o \
	-o B/listfolders3.exe -l gc `pkg-config --libs glib-2.0`

clean:
	-rm ./B/main.o
	-rm ./B/listfolders3/wpkotlin_c.demo.list_folders/__MODULE__.o
	-rm ./B/listfolders3/wpkotlin_c.demo.list_folders/MainLogic.o
	-rm ./B/listfolders3/Main.o
	-rm ./B/Prelude/Prelude.o
	-rm ./B/stdlib/std.collections/List_111.o
	-rm ./B/stdlib/std.collections/List_112.o
	-rm ./B/stdlib/std.io/Directory.o
	-rm ./B/listfolders3.exe

.PHONY: all prelude std_collections std_io listfolders3_wpkotlin_c_demo_list_folders main listfolders3.exe clean
