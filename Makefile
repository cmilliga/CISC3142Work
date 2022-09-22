lab2: Ex2_1_5 Ex2_1_11 Ex2_1_11for
	@echo "Running Program Ex2_1_5"
	./Exercise2/Ex2_1_5
	@echo "Running Program Ex2_1_11"
	./Exercise2/Ex2_1_11
	@echo "Running Program Ex2_1_11for"
	./Exercise2/Ex2_1_11for

Ex2_1_5: Exercise2/Exercise2_1_5.o
	cd Exercise2; \
	g++ Exercise2_1_5.o -o Ex2_1_5

Exercise2_1_5.o: Exercise2/Exercise2_1_5.cpp
	cd Exercise2; \
	g++ -c Exercise2_1_5.cpp -o Exercise2_1_5.o

Ex2_1_11: Exercise2/Exercise2_1_11.o
	cd Exercise2; \
	g++ Exercise2_1_11.o -o Ex2_1_11

Exercise2_1_11.o: Exercise2/Exercise2_1_11.cpp
	cd Exercise2; \
	g++ -c Exercise2_1_11.cpp -o Exercise2_1_11.o

Ex2_1_11for: Exercise2/Exercise2_1_11for.o
	cd Exercise2; \
	g++ Exercise2_1_11for.o -o Ex2_1_11for

Exercise2_1_11for.o: Exercise2/Exercise2_1_11for.cpp
	cd Exercise2; \
	g++ -c Exercise2_1_11for.cpp -o Exercise2_1_11for.o

