test:
	rm -rf ./build
	mkdir -p ./build/
	g++ ./src/test.cpp -o ./build/test -lGL -lGLU -lglut
	./build/test
clean:
	rm -rf ./build
run:
	./build/test