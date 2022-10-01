lab4: Ex4_3_17 Ex4_3_23 Ex4_4_28 Ex4_1_Inflation Ex4_2_Nutrition
	@echo "Running Program Ex4_3_17"
	./Exercise4/Ex4_3_17
	@echo "Running Program Ex4_3_23"
	./Exercise4/Ex4_3_23
	@echo "Running Program Ex4_4_28"
	./Exercise4/Ex4_4_28
	@echo "Running Program Ex4_1_Inflation"
	./Exercise4/Ex4_1_Inflation
	@echo "Running Program Ex4_2_Nutrition"
	./Exercise4/Ex4_2_Nutrition

Ex4_3_17: Exercise4/Ex4_3_17.o
	cd Exercise4; \
	g++ Ex4_3_17.o -o Ex4_3_17

Ex4_3_17.o: Exercise4/Ex4_3_17.cpp
	cd Exercise4; \
	g++ -c Ex4_3_17.cpp -o Ex4_3_17.o

Ex4_3_23: Exercise4/Ex4_3_23.o
	cd Exercise4; \
	g++ Ex4_3_23.o -o Ex4_3_23

Ex4_3_23.o: Exercise4/Ex4_3_23.cpp
	cd Exercise4; \
	g++ -c Ex4_3_23.cpp -o Ex4_3_23.o

Ex4_4_28: Exercise4/Ex4_4_28.o
	cd Exercise4; \
	g++ Ex4_4_28.o -o Ex4_4_28

Ex4_4_28.o: Exercise4/Ex4_4_28.cpp
	cd Exercise4; \
	g++ -c Ex4_4_28.cpp -o Ex4_4_28.o

Ex4_1_Inflation: Exercise4/Ex4_1_Inflation.o
	cd Exercise4; \
	g++ Ex4_1_Inflation.o -o Ex4_1_Inflation

Ex4_1_Inflation.o: Exercise4/Ex4_1_Inflation.cpp
	cd Exercise4; \
	g++ -c Ex4_1_Inflation.cpp -o Ex4_1_Inflation.o

Ex4_2_Nutrition: Exercise4/Ex4_2_Nutrition.o
	cd Exercise4; \
	g++ Ex4_2_Nutrition.o -o Ex4_2_Nutrition

Ex4_2_Nutrition.o: Exercise4/Ex4_2_Nutrition.cpp
	cd Exercise4; \
	g++ -c Ex4_2_Nutrition.cpp -o Ex4_2_Nutrition.o


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

