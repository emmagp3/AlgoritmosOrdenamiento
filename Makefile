treeSort:
	cd TreeSort/ && gcc -o salida.out treeSort.c ../Utils/arbol.c ../Utils/archivos.c ../Utils/utils.c && ./salida.out

quickSort:
	cd QuickSort/ && gcc -o salida.out quickSort.c ../Utils/archivos.c ../Utils/utils.c && ./salida.out

shellSort:
	cd ShellSort/ && gcc -o salida.out shellSort.c ../Utils/archivos.c ../Utils/utils.c && ./salida.out