list(_,[],0). 
list(X,[H|T],Length):-
	X=H, list(X,T,L1), Length is L1+1.
list(X,[_|T],Length):- list(X,T,Length).