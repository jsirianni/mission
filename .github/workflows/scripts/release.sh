#!/bin/bash

set -e

# Ensure $1 is set
if [ -z "$1" ]; then
  echo "Usage: $0 <version>"
  exit 1
fi

release=${1}

echo "Creating release $release"

echo "Uploading main.hashima/areaflags.map to the release"
gh release upload $release main.hashima/areaflags.map

echo "Release finished"
