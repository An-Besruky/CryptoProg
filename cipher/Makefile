.PHONY: all debug release clean

RELEASE_FLAGS = -O2 -Wall -DNDEBUG
DEBUG_FLAGS   = -g -O0 -Wall
LDFLAGS=-lcrypto++
RELEASE_EXEC  = hashh
DEBUG_EXEC    = hashh-dbg
SOURCE        = hashh.cpp

all: debug release

debug: $(DEBUG_EXEC)

$(DEBUG_EXEC): $(SOURCE)
	g++ $(DEBUG_FLAGS) $< $(LDFLAGS) -o $@ 

release: $(RELEASE_EXEC)

$(RELEASE_EXEC): $(SOURCE)
	g++ $(RELEASE_FLAGS) $< $(LDFLAGS) -o $@

clean:
	rm -f $(RELEASE_EXEC) $(DEBUG_EXEC) *bin *hex hashhs*

