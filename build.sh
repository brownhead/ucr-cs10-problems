#!/usr/bin/env bash

# This will ensure that the script exits if a failure occurs
set -e

# This will ensure every command is printed out
set -x

# Figure out where the script is
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# Move into the root of the project
cd "$DIR"

# Create out binaries directory if it doesn't exit
mkdir ./bin || true

for i in $( find . -name "*.cpp" ); do
	# Cut off the file extension and initial ./
	nice_name=${i:2: -4}

	# Replace all slashes (/) with dashes (-)
	nice_name=${nice_name//\//-}
	g++ -o ./bin/$nice_name $i
done
