#include<iostream>
using namespace std;
class pizza
{
    private:
        string secretIngredients;
    public:
        string pizzaType,size;
        int price;
        bool isPaymentDone;

        void OrderPizza()
        {
            cout<<"Order the Pizza by selecting your favorite pizza"<<endl;
        }

        void bookPizza()
        {
            cout<<"Booking Pizza!"<<endl;
        }
        
        void bakePizza(string type,string pizzaSize)
        {
            pizzaType=type;
            size=pizzaSize;
            cout<<"Pizza Type:"<<pizzaType<<", Size"<<size<<endl;
        }

        void addIngredient(string secret)
        {
            secretIngredients=secret;
        }
        

        
        void confirmOrder()
        {
            cout<<"Order onfirmed!"<<endl;
        }
        bool checkPayment(int money,bool payment)
        {
            price=money;
            isPaymentDone=payment;
            if(isPaymentDone==true)
            {
                cout<<"Amount Paid:Rs."<<price<<",Payment successful!"<<endl;
                confirmOrder();
                bookPizza();
                return true;
            }
            else
            {
                cout<<"Amount due:Rs."<<price<<",Payment Pending!"<<endl;      
                return false;
            }
        }
        void servePizza(int amount,bool paid,string typeOfPizza,string sizeOfPizza,string secretItem)
        {
            if(!checkPayment(amount,paid))
            {
                cout<<"Order Cancelled due to the pending payment!"<<endl;
                return;
            }
            
        
            bakePizza(typeOfPizza,sizeOfPizza);
            addIngredient(secretItem);
            cout<<"Pizza Served! Enjoy your Pizza";
        }
};

int main()
{
    string pizType,size,secretIng;
    int pizzaAmount;
    bool amountPaid;

    pizza customer1;
    customer1.OrderPizza();
    cout<<"Enter the Pizza Type(Veg/Non-veg),Size(Regular/Medium/Large):";
    cin>>pizType>>size;

    pizzaAmount=399;
    cout<<"Did The Pay The Amount(Type '1' if paid/Type '0' if not paid):";
    cin>>amountPaid;

    customer1.servePizza(pizzaAmount,amountPaid,pizType,size,secretIng);

}