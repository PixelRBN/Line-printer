// Functions " line() " and " linedbl() "
// eg: line('-',10);   | Enter a single charecter to be repeated then enter number of times.
// eg: linedbl('-','_',20);   | Enter a 2 charecters to be repeated then enter number of times. 
void line(char a, int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%c",a);
	printf("\n");
}
void linedbl(char a, char b, int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%c%c", a, b);
	printf("\n");
}