#include <stdio.h>

void print_menu(void);

int main(void)
{
        double account_balance = 120.51;
	double interest_rate = 0.008;
	int option;
	while (1) {
		print_menu();
		option = getchar();
		if (getchar() != '\n') {
			printf("Zu viele Zeichen eingegeben.\n");
			while (getchar() != '\n');
			continue;
		}
		switch (option) {
			case 'a': 
				printf("Aktueller Kontostand: %.2f\n", account_balance);
				break;
			case 'b': 
				printf("Zinssatz: %.2f\n", interest_rate * 100);
				break;
			case 'q': 
				printf("Programm beendet\n");
				return 0;
			default:
				printf("Unbekannte Option\n");
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
