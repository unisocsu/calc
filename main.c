#include <windows.h>
#include <stdio.h>
int one;
int thu;
char op;
int result;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	printf ("ןאשראה רפסמה תא ןזה השקבב/pleas enter this one namber");
scanf (" %d", &one);
printf ("רוטרפוא הה תא ןזה/pleas enter this operator");
scanf (" %c", &op);
printf ("יונשה רפסמה תא ןזה השקבב/pleas enter this second number");
scanf (" %d", &thu);
if (op == '+') result = one + thu;
else
	if (op == '*') result = one * thu;
if (op == '-') result = one - thu;
if (op == '/') result = one / thu;
printf ("%d", result);

return 0;
}