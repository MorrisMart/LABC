/*
	Design and implement a rational number class, Rational.
	A rational number has two parts: a numerator and a denominator,
	for example 5/6 (five-sixths, also known as approximately 0.83333).
	Look up the definition if you need to.
	Provide:
	A. a default constructor initializing the Rational number to 0,
	B. a constructor accepting an int argument
	   (representing an integer value that should be represented in Rational form),
	C. a constructor accepting two ints for numerator and denominator,
	D. assignment,
	E. addition,
	F. subtraction,
	G. multiplication,
	H. division,
	I. equality (==), greater than (>) and less than (<), and output to stream (<<) operators.
	Also, provide a conversion to double via a to_double() function.
	
	Test all the overloaded operations in the main function
*/

/*
	Regarding the addition operation, try overloading:
	A. the sum of two Rationals, and
	B. the sum of a Rational and an int
	
	Both overloads shall be implemented in two ways: using a member function and a helper function
	(they should not be implemented at the same time!). What are the differences if you sum int +
	Rational vs Rational + int?
*/

class ex1 
{
	//membri pubblicim; interfaccia utente; funzioni; tipi; eventuali dati;
	public:
	//costruttore default che inizializzi il razionale a 0
	Rational()
	{
		numerator=0;
	}
	
	//costruttore che accetta un int
	Rational(int n)
	{
		number=n;
	}
	
	//costruttore che accetta 2 int
	Rational(int num, int den)
	{
		numerator=x;
		denominator=y;
	}
	
	//assignment

	//addition 
	
	//subtraction 
	
	//multiplication
	
	//division
	
	//comparator
	
	//toStream
	
	//membri privati; dettagli implementativi; funzioni; tipi; dati  
	private:
	int numerator;
	int num;
	int denum;

}














