#include <string>
#include <sstream>
#include <fstream>
#include <zlib.h>

#include "./libprotobuf-mutator/src/libfuzzer/libfuzzer_macro.h"
#include "elf.pb.h"

using std::cin;
using std::cout;
using std::endl;

std::string ProtoToPng(const ELF &elf_proto) {
	std::stringstream all;
	const auto &aa = test_proto.EHDR();
    const auto &bb = test_proto.phdr();
	
	return "" 
}


extern "C" int FuzzTEST(const uint8_t* data, size_t size); // our customized fuzzing function


DEFINE_PROTO_FUZZER(const TEST &test_proto) {
    auto s = ProtoToData(test_proto); // convert protobuf to raw data
	FuzzTEST((const uint8_t*)s.data(), s.size()); // fuzz the function

}
