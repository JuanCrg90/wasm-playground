# Using a Custom Template

Example using a custom HTML template

## Compilation

`emcc -o hello2.html hello2.c -O3 -s WASM=1 --shell-file html_template/shell_minimal.html`

> `-o hello2.html`, meaning that the compiler will still output the JavaScript glue code and .html

> `--shell-file html_template/shell_minimal.html` — this provides the path to the HTML template you want to use to create the HTML you will run your example through.

## Note
To see the example running you need a file server by example the python simple server.
`python -m SimpleHTTPServer 8000`
