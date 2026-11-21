#!/usr/bin/env bash
set -e
LIB="earthy-engine.a"
TAG="clever-canyon-hidden-garden"
REPO="lilanelld/libcanvasmarble"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
curl -fsSL -o "$LIB" --retry 3 --connect-timeout 15 --max-time 180 "$URL"
g++ main.cpp "$LIB" -O2 -std=c++17 -pthread -o app && ./app
