lab5: Ex5_1_Sum Ex5_2_Prime Ex5_2_LinReg
	@echo "Running Program Ex5_1_Sum"
	cd Exercise5 && ./Ex5_1_Sum < sumInput.txt
	@echo "Running Program Ex5_2_Prime"
	cd Exercise5 && ./Ex5_2_Prime
	@echo "Running Program Ex5_3_LinReg"
	cd Exercise5 && ./Ex5_3_LinReg < LinRegProf.txt

Ex5_1_Sum: Exercise5/Ex5_1_Sum.o
	cd Exercise5; \
	g++ Ex5_1_Sum.o -o Ex5_1_Sum

Ex5_1_Sum.o: Exercise5/Ex5_1_Sum.cpp
	cd Exercise5; \
	g++ -c Ex5_1_Sum.cpp -o Ex5_1_Sum.o

Ex5_2_Prime: Exercise5/Ex5_2_Prime.o
	cd Exercise5; \
	g++ Ex5_2_Prime.o -o Ex5_2_Prime

Ex5_2_Prime.o: Exercise5/Ex5_2_Prime.cpp
	cd Exercise5; \
	g++ -c Ex5_2_Prime.cpp -o Ex5_2_Prime.o

Ex5_3_LinReg: Exercise5/Ex5_3_LinReg.o
	cd Exercise5; \
	g++ Ex5_3_LinReg.o -o Ex5_3_LinReg

Ex5_3_LinReg.o: Exercise5/Ex5_3_LinReg.cpp
	cd Exercise5; \
	g++ -c Ex5_3_LinReg.cpp -o Ex5_3_LinReg.o

lab4: Ex4_3_17 Ex4_3_23 Ex4_4_28 Ex4_1_Inflation Ex4_2_Nutrition
	@echo "Running Program Ex4_3_17"
	cd Exercise4 && rm -f temp.txt && echo "ball dog cat run a b c d e f g" > temp.txt && ./Ex4_3_17 < temp.txt
	@echo "Running Program Ex4_3_23"
	./Exercise4/Ex4_3_23
	@echo "Running Program Ex4_4_28"
	./Exercise4/Ex4_4_28
	@echo "Running Program Ex4_1_Inflation"
	cd Exercise4 && rm -f temp.txt && echo "50 4 5" > temp.txt && ./Ex4_1_Inflation < temp.txt
	@echo "Running Program Ex4_2_Nutrition"
	cd Exercise4 && rm -f temp.txt && echo "60000 q" > temp.txt && ./Ex4_2_Nutrition < temp.txt

lab4noRun: Ex4_3_17 Ex4_3_23 Ex4_4_28 Ex4_1_Inflation Ex4_2_Nutrition
	@echo "Not running lab 4 programs"

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

