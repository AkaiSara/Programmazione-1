
#per ottenere il file per AMPL, eliminare l�stensione .txt a questo file

reset; # cancella eventuali dati gi� memorizzati
model Dieta.mod; # carica il modello
data Dieta.dat; # carica i dati
option solver cplex; # setta cplex come solutore
solve; # risolve il modello
display x; # visualizza il valore ottimo delle variabili x