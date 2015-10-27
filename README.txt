Dusan's updates:
- Add Team and Project class. Some of it depends on having student objects 
  so I just implemented the parts that need students as strings (i'll change them later)
- added Queue which is queue/doubly linked list data-structure. Queue is what Roman and I made 
  last semester for the pirate project. It holds <T> template objects which is nice so any lists
   we need can just use Queue<T>. The only thing we might need to add a better search function,
   before it was just searching for pirate ID.
- I also added a Makefile, feel free to add to it as you guys add your own code.
- Added a test.cc file. When you do a 'make' it outputs a d2 which is based on the main() in test.cc 