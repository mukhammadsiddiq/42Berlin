#!/usr/bin/env bash
find . -type f -name '*.sh' -exec basename -s .sh {} \;

