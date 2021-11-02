test:
	rm -rf ./build
	mkdir -p ./build/

	
	#for linux only, comment this out for Windows:
	# g++ ./src/test.cpp -o ./build/test -lGL -lGLU -lglut


	#for Windows only, comment this out for linux			
	g++ ./src/test.cpp -o ./build/test -lopengl32 -lfreeglut


	./build/test
clean:
	rm -rf ./build
run:
	./build/test