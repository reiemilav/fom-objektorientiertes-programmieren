#include<stdio.h>
#include<conio.h>

#define vcRETURN 0x0d
#define vcBACK 0x08
#define vcSPACE 0x20
#define vcBEEP 0x07

float getfloat(short v, short n)
{
	/* Variablendeklaratio */
	char ch;

	short i;
	short komma;
	short vnum;
	short nnum;
	short vcounter;
	short ncounter;

	float zahl;
	float divisor;

	/* Initialisierung */
	komma = 0;
	vnum = 0;
	nnum = 0;
	vcounter = 0;
	ncounter = 0;
	divisor = 1;

	zahl = 0;

	if (v > 4 || v < 1) v = 4;
	if (n > 4 || n < 1) n = 4;

	/* Eingabepruefung */
	while ((ch = _getch()) != vcRETURN)
	{
		/* Komma definieren */
		if (ch == ',')
		{
			komma++;
			if (komma>1)
			{
				komma = 1;
			}
			else
			{
				_putch('.');
			}
		}

		/* Zahlenbereich definieren */
		else if (ch >= '0' && ch <= '9')
		{
			if (komma == 0)
			{
				if (vcounter < v)
				{
					vnum = vnum * 10 + (ch - '0');
					_putch(ch);
					vcounter++;
				}
			}
			else
			{
				if (ncounter < n)
				{
					nnum = nnum * 10 + (ch - '0');
					_putch(ch);
					ncounter++;
				}
			}
			
		}

		/* Korrekturtaste definieren*/
		else if (ch == vcBACK)
		{
			/* Loeschen vor dem Komma */
			if (vcounter > 0 && komma == 0)
			{
				vnum = vnum / 10;
				_putch(vcBACK);
				_putch(vcSPACE);
				_putch(vcBACK);
				vcounter--;
			}
			/* Loeschen nach dem Komma */
			else if (ncounter > 0 && komma == 1)
			{
				nnum = nnum / 10;
				_putch(vcBACK);
				_putch(vcSPACE);
				_putch(vcBACK);
				ncounter--;
			}
			/* Loeschen des Kommas */
			else if (ncounter == 0 && komma == 1)
			{
				komma = 0;
				_putch(vcBACK);
				_putch(vcSPACE);
				_putch(vcBACK);
			}
			/* Loeschen geht nicht mehr */
			else
			{
				_putch(vcBEEP);
			}
		}
	}

	/* Divisor fuer Nachkommastellen berechnen */
	for ( i = 0; i < ncounter; i++)
	{
		divisor = divisor * 10;
	}

	/* Zahlenwert zusammensetzen */
	zahl = vnum + nnum / divisor ;
	
	/* Rueckgabewert liefern */
	return zahl;
}