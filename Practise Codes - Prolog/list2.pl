palindrom(X):- 
	reverse(X,Y), 
	X = Y, write('List is Palindrome'); 
	write('List is not Palindrome').