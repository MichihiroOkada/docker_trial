FROM ubuntu:22.04 AS build

RUN apt-get update && apt-get install -y \
        cmake \
        openssl \
        gcc \
        g++ \
        libqhttpengine-dev \
        net-tools

RUN apt-get install -y git
RUN apt-get install -y qtbase5-dev
RUN apt-get install -y libssl-dev
RUN apt-get install -y libcrypt-dev

COPY ./server /server
WORKDIR /server
#ADD ./src ./src
#ADD ./CMakeLists.txt ./
RUN mkdir -p ./build
WORKDIR /server/build
RUN cmake  -DNODEBUG:STRING="ON" ..
RUN make

#FROM alpine:latest AS runtime
#RUN apk add --update \
#        libgcc  \
#        libstdc++  \
#        qt5-qtbase \
#        openssl
#
#WORKDIR /usr/server
#COPY --from=build /usr/server/build/src/cpp-qt-qhttpengine-server ./build/src/
#COPY --from=build /usr/server/external/ ./external
EXPOSE 8080/tcp
ENTRYPOINT /server/build/src/cpp-qt-qhttpengine-server
