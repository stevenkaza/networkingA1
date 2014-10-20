all: n2
	gcc -g  n1.c -o node1
n2: n3
	gcc n2.c -o node2
n3: n4
	gcc n3.c -o node3

n4: n5
	gcc n4.c -o node4

n5: n6
	gcc n5.c -o node5

n6: n7
	gcc n6.c -o node6
n7:
	gcc n7.c -o node7
run:  nex2
	./node1
nex2:	nex3
	./node2
nex3: nex4
	./node3
nex4: nex5
	./node4
nex5: nex6
	./node5
nex6: nex7
	./node6
nex7:
	./node7
