/****************** FACTS *****************/

female('Mum').
female('Kydd').
female('Elizabeth').
female('Margaret').
female('Diana').
female('Anne').
female('Sarah').
female('Zara').
female('Beatrice').
female('Eugenie').
female('Elsa').

male('George').
male('Spencer').
male('Philip').
male('Charles').
male('Mark').
male('Andrew').
male('Edward').
male('William').
male('Harry').
male('Peter').
male('Jack').

couple('George','Mum').
couple('Spencer','Kydd').
couple('Philip','Elizabeth').
couple('Charles','Diana').
couple('Mark','Anne').
couple('Andrew','Sarah').
couple('Jack','Elsa').

father('George','Elizabeth').
father('George','Margaret').
father('Philip','Charles').
father('Philip','Elsa').
father('Philip','Anne').
father('Philip','Andrew').
father('Philip','Edward').
father('Charles','William').
father('Charles','Harry').
father('Mark','Peter').
father('Mark','Zara').
father('Andrew','Beatrice').
father('Andrew','Eugenie').



/****************** RULES *****************/

mother(X,Y):-couple(Z,X),father(Z,Y).
parent(X,Y):-father(X,Y).
parent(X,Y):-mother(X,Y).

daughter(X,Y):-parent(Y,X),female(X).
son(X,Y):-parent(Y,X),male(X).
child(X,Y):-daughter(X,Y).
child(X,Y):-son(X,Y).

siblings(X,Y):-father(Z,X),father(Z,Y),X\==Y.
sister(X,Y):-siblings(X,Y),female(X).
brother(X,Y):-siblings(X,Y),male(X).

/* Sister of husband */
sister_in_law(X,Y):-couple(Z,Y),siblings(X,Z),female(X).
/* Sister of wife */
sister_in_law(X,Y):-couple(Y,Z),siblings(X,Z),female(X).
/* Brother's wife */
sister_in_law(X,Y):-couple(Z,X),siblings(Y,Z),female(X).

/* Brother of husband */
brother_in_law(X,Y):-couple(Z,Y),siblings(X,Z),male(X).
/* Brother of wife */
brother_in_law(X,Y):-couple(Y,Z),siblings(X,Z),male(X).
/* Sister's husband */
brother_in_law(X,Y):-couple(X,Z),siblings(Y,Z),male(X).

/* Parent's sister */
aunt(X,Y):-parent(Z,Y),sister(X,Z).
/* Uncle's wife */
aunt(X,Y):-parent(Z,Y),brother(W,Z),couple(W,X).
/* Parent's brother */
uncle(X,Y):-parent(Z,Y),brother(X,Z).
/* Aunt's husband */
uncle(X,Y):-aunt(Z,Y),couple(X,Z).

first_cousine(X,Y):-parent(Z,X),parent(W,Y),siblings(Z,W).

grandchild(X,Y):-child(X,Z),child(Z,Y).
grandparents(X,Y):-parent(Z,Y),parent(X,Z).

great_grandparents(X,Y):- grandparents(Z,Y),parent(X,Z).