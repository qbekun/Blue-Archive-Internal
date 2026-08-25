#pragma once
#include "../../../../unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip::Compression { class InflaterHuffmanTree; }
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams { class StreamManipulator; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERHUFFMANTREE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9054140)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERHUFFMANTREE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9053FB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERHUFFMANTREE_BUILDTREE_OFFSET UNITYSDK_OFFSET(0x9054850)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERHUFFMANTREE_GETSYMBOL_OFFSET UNITYSDK_OFFSET(0x90517F0)

namespace ICSharpCode::SharpZipLib::Zip::Compression
{
	inline static constexpr unsigned int InflaterHuffmanTree_TypeDefinitionIndex = 37126;

	class InflaterHuffmanTree : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* tree; // 0x10
		::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* defLitLenTree; // 0x0
		::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* defDistTree; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERHUFFMANTREE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERHUFFMANTREE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void BuildTree(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERHUFFMANTREE_BUILDTREE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSymbol(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator* arg)
		{
			return (return (::System::Int32(*)(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERHUFFMANTREE_GETSYMBOL_OFFSET))(arg, nullptr);
		}

	};
}

