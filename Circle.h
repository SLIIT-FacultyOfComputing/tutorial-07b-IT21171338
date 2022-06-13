
// Circle.h

class Circle {
   private:
      int radius;
   public:
      Circle(); // Default Constructor
      Circle(int r); // Overloaded Constructor
      void display();
      float calcArea();
      ~Circle(); // Destructor
};
