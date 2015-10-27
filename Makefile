OBJ = test.o Project.o Team.o Queue.h

d2:	$(OBJ)
	g++ -o d2 $(OBJ)

test.o:	test.cc Project.h Team.h Queue.h
	g++ -c test.cc

Project.o:	Project.cc Project.h Queue.h
	g++ -c Project.cc

Team.o:	Team.cc Team.h Queue.h
	g++ -c Team.cc

clean:
	rm -f *.o d2
