#include <iostream>
using namespace std;

void print_sum_even()
{
    int i = 1;
    int sum = 0;
    while (i != 11)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }
    cout << sum << endl;
}
void print_sum_odd()
{
    int i = 1;
    int sum = 0;
    while (i != 11)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        i++;
    }
    cout << sum << endl;
}
void factorial()
{
    int num;
    cin >> num;
    int i = 1;
    int fact = 1;
    while (i < num + 1)
    {
        fact = fact * i;
        i++;
    }
    cout << fact << endl;
}
void count_digits()
{
    int number;
    cin >> number;
    int count = 0;
    while (number > 0)
    {
        count++;
        number = number / 10;
    }
    cout << count << endl;
}
void first_and_last_digit()
{
    int num;
    cin >> num;
    int last = num % 10;
    while (num >= 10)
    {
        num = num / 10;
    }
    cout << "First element:" << num << endl;
    cout << "Last element is:" << last << endl;
}
void product_of_digits()
{
    int num;
    int temp = 1;
    int last;
    cin >> num;
    while (num > 0)
    {
        last = num % 10;
        temp = temp * last;
        num = num / 10;
    }
    cout << "Product of digits:" << temp << endl;
}
void print_reverse()
{
    int num;
    cin >> num;
    int last;
    int check = num;
    int ans = 0;
    cout << "Reverse of number:";
    while (num > 0)
    {
        last = num % 10;
        ans = ans * 10 + last;
        num = num / 10;
    }
    cout << ans << endl;
    if (check == ans)
    {
        cout << "Number is palindrome" << endl;
    }
    else
    {
        cout << "Number is not palindrome" << endl;
    }
}
void Ascii_intvalues_to_characters()
{
    int i = 0;
    while (i <= 255)
    {
        cout << char(i) << " ";
        i++;
    }
}
void factors_of_number()
{
    int i = 1;
    int n;
    int count = 0;
    cin >> n;
    while (i <= n)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            count++;
        }
        i++;
    }
   
    cout << endl;
    cout << "count of Factors:" << count << endl;
}
int main()
{
    // print_sum_even();
    // print_sum_odd();
    // factorial();
    //  count_digits();
    //  first_and_last_digit();
    //  product_of_digits();
    //  print_reverse();
    //  Ascii_intvalues_to_characters();
    factors_of_number();
    return 0;
}
