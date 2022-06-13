// Rectangle.h

class Rectangle {
   private:
      int length;
      int width;
   public:
      Rectangle(); // Default Constructor
      Rectangle(int l, int w); // Overloaded Constructor
      int calcArea();
      void display();
      ~Rectangle(); // Destructor
};
