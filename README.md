# Arduino Scripts
=====
Scripts used to program Arduino without using the IDE



## WRITING NEW SKETCH

Every Sketch needs a dedicated working directory!

Copy Makefile in the working directory

The Makefile must be modified according the Arduino's hw owned (See utility/boards.txt)



## ARDUINO SYNTAX ON VIM

```
mkdir -p ~/.vim/syntax/
cp utility/arduino.vim ~/.vim/syntax/
echo "autocmd! BufNewFile,BufRead *.pde setlocal ft=arduino" >> ~/.vimrc
```

## Useful Sketch

 * [Arduino Dot Matrix Display](https://github.com/blackout314/arduinoDMD)