FROM ubuntu:20.04 AS builder

CMD echo "hello oka client"

#install
RUN apt-get update && apt-get install -y \
    software-properties-common

RUN apt-get install -y net-tools iputils-ping
RUN apt-get install -y ncat

RUN add-apt-repository ppa:longsleep/golang-backports

CMD ls -l /
CMD tail -f /dev/null


