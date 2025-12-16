FROM gcc:latest

WORKDIR /app

COPY K2_Rock_Paper_Scissors.cpp .

RUN g++ K2_Rock_Paper_Scissors.cpp -o game

CMD ["./game"]
