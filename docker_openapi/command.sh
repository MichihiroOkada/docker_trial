#!/bin/bash

docker compose down
docker compose up -d
docker compose ps

docker compose logs -f
# openapi_server-container  | 2024/01/07 15:12:35 Server started
# openapi_server-container  | 2024/01/07 15:13:11 GET /okaserver Getokainfo 83.401µs

