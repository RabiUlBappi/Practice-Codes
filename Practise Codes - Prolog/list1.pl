print_list(l).
print_list([]).
print_list([X|List]):-
	write(X),nl,
	print_list(List).
