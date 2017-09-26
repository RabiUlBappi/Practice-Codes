sum_list([],0,0). sum_list([H|T],Length,Sum):-
	sum_list(T,L1,S1), Length is L1+1, Sum is S1+H.
mean(L,M):- sum_list(L,Length,Sum), 
	M is Sum/Length.

print_list(l). print_list([]). 
print_list([X|List]):- write(X), nl, print_list(List).

conc([],L,L). conc([X|L1],L2,[X|L3]):- conc(L1,L2,L3).
rev([X|[]],[X]). rev([X|T],R):- rev(T,R1),conc(R1,[X],R).
palindrom(L):- write(L), rev(L,R),itr(L,R).
itr([X|T],[RX|RT]):-(
	T==[]->writeln(' is Palindrome.');
	X==RX->itr(T,RT);
	writeln(' is not Palindrome.')
).
