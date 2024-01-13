FROM ubuntu:20.04 AS builder

CMD echo "hello oka server"

#install
RUN apt-get update && apt-get install -y \
    software-properties-common

RUN apt-get install -y net-tools iputils-ping
RUN apt-get install -y ncat

RUN add-apt-repository ppa:longsleep/golang-backports

CMD ls -l /
COPY ./oka.sh /oka.sh
ADD ./oka_add.sh /oka_add.sh
#CMD tail -f /dev/null

FROM ubuntu:20.04 AS runtime
COPY --from=builder /oka.sh ./
COPY --from=builder /oka_add.sh ./oka_add.sh
ENTRYPOINT ["./oka.sh"]


