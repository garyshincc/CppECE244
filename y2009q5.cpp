myDerivedClass::myDerivedClass(const myDerivedClass & rhs) :
	 myDerivedClass(rhs) {

	int numChars = strlen(rhs.derivedArray);
	derivedArray = new char[numChars];
	strcpy(derivedArray, rhs.derivedArray);
} 
