list(_,[],0). 
list(H,[H|T],Length):- !,
	list(H,T,L1), Length is L1+1.
list(H,[_|T],Length):- list(H,T,Length).