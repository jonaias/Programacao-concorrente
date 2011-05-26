set terminal png
set xrange [0:255]
set xlabel 'valor do pixel'
set ylabel 'numero de pixel'
set output 'vermelho.png'
plot 'input1' using 1:2 with impulses linecolor rgbcolor "red" title 'Vermelho'
set output 'verde.png'
plot 'input2' using 1:2 with impulses linecolor rgbcolor "green" title 'Verde'
set output 'azul.png'
plot 'input3' using 1:2 with impulses linecolor rgbcolor "blue" title 'Azul'
set output 'brilho.png'
plot 'input4' using 1:2 with impulses linecolor rgbcolor "black" title 'brilho'
