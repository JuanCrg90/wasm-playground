# Web Assembly

## Installation

```bash
brew install llvm
brew install emscripten --with-closure-compiler
```

## emscripten configuration

If you get the following error when you run `emcc -v`
```bash
WARNING:root:LLVM version appears incorrect (seeing "9.0", expected "4.0")
CRITICAL:root:fastcomp in use, but LLVM has not been built with the JavaScript backend as a target, llc reports:
===========================================================================
(no targets could be identified: [Errno 2] No such file or directory)
===========================================================================
CRITICAL:root:you can fall back to the older (pre-fastcomp) compiler core, although that is not recommended, see http://kripken.github.io/emscripten-site/docs/building_from_source/LLVM-Backend.html
INFO:root:(Emscripten: Running sanity checks)
CRITICAL:root:Cannot find /usr/bin/llvm-link, check the paths in ~/.emscripten
```

Eedit `~/.emscripten` file with:

```
EMSCRIPTEN_ROOT = os.path.expanduser(
    os.getenv('EMSCRIPTEN') or 
    '/usr/local/opt/emscripten/libexec')
LLVM_ROOT = os.path.expanduser(
    os.getenv('LLVM') or 
    '/usr/local/opt/emscripten/libexec/llvm/bin')
```

After that try to run `emcc -v` again, you should to get the following message

```
INFO:root:generating system asset: is_vanilla.txt... (this will be cached in "/Users/juancarlosruiz/.emscripten_cache/is_vanilla.txt" for subsequent builds)
INFO:root: - ok
INFO:root:(Emscripten: Running sanity checks)
emcc (Emscripten gcc/clang-like replacement + linker emulating GNU ld) 1.37.27
clang version 4.0.0  (emscripten 1.37.27 : 1.37.27)
Target: x86_64-apple-darwin16.7.0
Thread model: posix
InstalledDir: /usr/local/opt/emscripten/libexec/llvm/bin
INFO:root:(Emscripten: Running sanity checks)
```
