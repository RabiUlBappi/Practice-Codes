

list([]).
list([X|List]):-
	number(X) -> add(X,Y,Y),write(X),nl,list(List);
	list(List).
