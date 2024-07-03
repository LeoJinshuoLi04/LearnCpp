// Types of initialisation:

// no initializer (default initialization)
int a;
// leaves variable with a random value as determined by memory

// initial value after equals sign (copy initialization)
int b = 5;
// value on right is copied into the variable on left

// initial value in parenthesis (direct initialization)
int c(6);
// values are explicitly cast to another type

// List initialization methods (C++11) (preferred)
// is more efficient and works the same in more scenarios
// gives error if a value is stored into wrong data type

// initial value in braces (direct list initialization)
int d{7};
// initial value in braces after equals sign (copy list initialization)
int e = {8};

// initializer is empty braces (value initialization)
int f{};
// usually sets value to be 0
// use explicit initialisation if value is accessed, used value initialisation
// if value will be redefined

// what if we initialise a variable that could be unused?
[[maybe_unused]] double pi{3.14159};
// if this definition is used by multiple programs but not always used, this
// prevents errors