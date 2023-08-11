project('listfolders3', 'c', version: '1.0.0', meson_version: '>= 0.48.0',)
subdir('Prelude')
subdir('listfolders3')


#Prelude      = library('Prelude',      link_with : [])
#listfolders3 = library('libfolders3',  link_with : [])

#Prelude = dependency('Prelude')

listfolders3_bin = executable('listfolders3.exe', 'main.c', link_with: [Prelude], install: true)
#listfolders3_bin = executable('listfolders3.exe', 'main.c', link_with: ['Prelude', 'listfolders3'], install: true)
##listfolders3_bin = executable('listfolders3', link_with: ['Prelude'], install: true)
