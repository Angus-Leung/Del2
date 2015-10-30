OBJ = CupidSys.o Project.o Team.o Admin.o Student.o Queue.h

d2:	$(OBJ)
	g++ -o d2 $(OBJ)

test.o:	CupidSys.cc Project.h Team.h Queue.h Admin.h Student.h
	g++ -c test.cc

Project.o:	Project.cc Project.h Queue.h
	g++ -c Project.cc

Team.o:	Team.cc Team.h Queue.h
	g++ -c Team.cc

Admin.o:	Admin.cc Admin.h
	g++ -c Admin.cc

Student.o:	Student.cc Student.h
	g++ -c Student.cc

clean:
	rm -f *.o d2
