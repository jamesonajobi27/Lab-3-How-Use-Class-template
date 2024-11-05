// declaration of undefined datatype
template <typename T>


// A function that accepts three parameters with undefined datatypes, returns the min value.
T min3(T x, T y, T z) {
	// uses the if else statement to compare the parameters and return values
	if (x < y && x < z)
	{
		return  x;
	}
	else if (y < x && y < z)
	{
		return  y;
	}
	else
	{
		return  z;
	}
}
