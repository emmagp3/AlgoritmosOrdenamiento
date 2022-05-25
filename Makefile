burbuja:
	cd Burbuja/ && gcc -o salida.out burbuja.c ../Utils/arbol.c ../Utils/archivos.c ../Utils/utils.c && ./salida.out

insercion:
	cd Insercion/ && gcc -o salida.out insercion.c ../Utils/arbol.c ../Utils/archivos.c ../Utils/utils.c && ./salida.out

seleccion:
	cd Seleccion/ && gcc -o salida.out Seleccion.c ../Utils/arbol.c ../Utils/archivos.c ../Utils/utils.c && ./salida.out

treeSort:
	cd TreeSort/ && gcc -o salida.out treeSort.c ../Utils/arbol.c ../Utils/archivos.c ../Utils/utils.c && ./salida.out

quickSort:
	cd QuickSort/ && gcc -o salida.out quickSort.c ../Utils/archivos.c ../Utils/utils.c && ./salida.out

shellSort:
	cd ShellSort/ && gcc -o salida.out shellSort.c ../Utils/archivos.c ../Utils/utils.c && ./salida.out