#include "Payment.h"

Payment::Payment()
{

}
float Payment::Paymentcollect()
{
    int count = 0;
    float Pay[20];
    ifstream File;
    File.open("RegularService.txt"); 
    File.open("UrgentService.txt");
    while (count < 20 && File >> Pay[count]) {
        count++;
    }
    File.close();
    float Collect_Money = Pay[1];
    return Collect_Money;
}
float Payment::ID_collect()
{
    int count = 0;
    float Pay[20];
    ifstream File;
    File.open("RegularService.txt");
    File.open("UrgentService.txt");
    while (count < 20 && File >> Pay[count]) {
        count++;
    }
    File.close();
    float Collect_Money = Pay[0];
    return Collect_Money;
}