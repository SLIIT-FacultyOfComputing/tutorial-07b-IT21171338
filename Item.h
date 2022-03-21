// Item.h

class Item {
   private:
      int itemCode;
      float unitPrice;
      float discount; // out of 100 e.g. discount = 15
   public:
      // 1. Write the Default Constructor
      // 2. Write the Overloaded Constructor
      // 3. Write the Destructor
      //default constructor
      Item();
      //overload constructor
      Item(int code, float price);
      //destructor
      ~Item();
      void setDiscount(float punitPrice);
      float getDiscount();
      float discountedPrice();
      void display();
};
