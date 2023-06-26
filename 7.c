#include <stdio.h>

int main() {
  float basic_salary, monthly_sales;
  char city;
  float additional_allowance = 0;
  float bonus = 0;
  float gross_remuneration;

  printf("Enter the basic salary: ");
  scanf("%f", &basic_salary);

  printf("Enter the years of service: ");
  int years_of_service;
  scanf("%d", &years_of_service);

  printf("Enter the monthly sales: ");
  scanf("%f", &monthly_sales);

  printf("Enter the city (C for Colombo): ");
  scanf(" %c", &city);

  if (years_of_service > 5) {
    additional_allowance = basic_salary * 0.1;
  }

  if (city == 'C') {
    additional_allowance += 2500;
  }

  if (monthly_sales > 0 && monthly_sales <= 25000) {
    bonus = monthly_sales * 0.1;
  } else if (monthly_sales > 25000 && monthly_sales <= 50000) {
    bonus = monthly_sales * 0.12;
  } else if (monthly_sales > 50000) {
    bonus = monthly_sales * 0.15;
  }

  gross_remuneration = basic_salary + additional_allowance + bonus;

  printf("The gross monthly remuneration is Rs. %.2f\n", gross_remuneration);

  return 0;
}
