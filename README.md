# Meson

```
cd code2
mkdir _build
cd _build
meson ..
ninja
```

`fail!!`

```
cd code2
make
```

`pass!!`

## Supposed to happen

1. Build 3 archives from subprojects/subdirectories
2. Link into final executable

(Yes, I know the `ar` command, just a POC...)
