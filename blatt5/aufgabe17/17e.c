#include <stdio.h>

void print_menu(void);
int choose_option(void);

int main(void)
{
	double account_balance = 120.51;
	double interest_rate = 0.008;
	int status = 1;
	int option;
	while (status) {
		print_menu();
		option = choose_option();
		switch (option) {
			case -1:
					printf("Zu viele Zeichen eingegeben\n");
					break;
			case -2:
					printf("Unbekannte Option\n");
					break;
			case 'a': 
					printf("Aktueller Kontostand: %.2f\n", account_balance);
					break;
			case 'b': 
					printf("Zinssatz: %.2f\n", interest_rate * 100);
					break;
			case 'q': 
					status = 0;
					printf("Programm beendet\n");
					break;
		}
		}
		return 0;
	}
}

void print_menu(void)
{
	printf("<<<MENU>>>\n");
	printf("Bitte wahlen Sie eine Option:\n");
	printf("(a) Kontostand ausgeben\n");
	printf("(b) Zinssatz ausgeben\n");
	printf("(q) Beenden\n");
}

int choose_option(void)
{
	int option = getchar();
	if (getchar() != '\n') {
			while (getchar() != '\n');
			return -1;
	}
	if (option == 'a' || option == 'b' || option == 'q') {
		return option;
	}
	return -2;
}
