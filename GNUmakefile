All: sudoku_solver

DEBUG = TRUE

CXXFLAGS := -Wall -Wextra -Wpedantic -Wshadow -g

ifeq (${DEBUG}, TRUE)
   CXXFLAGS += -g
else
   CXXFLAGS += -DNDEBUG -O3
endif

sudoku_solver.o: sudoku_solver.cpp sudoku.H
	g++ -c sudoku_solver.cpp

sudoku_solver: sudoku_solver.o
	g++ -o sudoku_solver sudoku_solver.o
