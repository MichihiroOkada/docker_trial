FROM ubuntu:22.04 AS builder

CMD echo "hello oka server"

#install
RUN apt-get update && apt-get install -y \
    software-properties-common

RUN apt-get install -y golang
RUN apt-get install -y golang-go
RUN add-apt-repository ppa:longsleep/golang-backports

COPY ./server /
#CMD tail -f /dev/null
RUN go build -a -o openapi_server .

FROM ubuntu:22.04 AS runtime
COPY --from=builder /openapi_server ./
#ENTRYPOINT ["go run ./main.go"]
#ENTRYPOINT ["ls"]
ENTRYPOINT ["./openapi_server"]
#ENTRYPOINT ["tail -f /dev/null"]


