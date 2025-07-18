FROM gcc:latest AS builder

RUN mkdir /app
WORKDIR /app

COPY *.c ./

RUN gcc hola_mundo.c -o hola_mundo -static

FROM scratch

COPY --from=builder /app/hola_mundo .

CMD [ "./hola_mundo" ]