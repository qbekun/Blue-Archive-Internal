#pragma once
#include "../../../../unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams { class StreamManipulator; }
namespace ICSharpCode::SharpZipLib::Zip::Compression { class InflaterHuffmanTree; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_ATTEMPTREAD_OFFSET UNITYSDK_OFFSET(0x9052700)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x90524A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_CREATESTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9053320)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_GET_LITERALLENGTHTREE_OFFSET UNITYSDK_OFFSET(0x9052820)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_GET_DISTANCETREE_OFFSET UNITYSDK_OFFSET(0x9052890)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90533D0)

namespace ICSharpCode::SharpZipLib::Zip::Compression
{
	inline static constexpr unsigned int InflaterDynHeader_TypeDefinitionIndex = 37125;

	class InflaterDynHeader : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* MetaCodeLengthIndex; // 0x0
		::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator* input; // 0x10
		Il2CppObject* state; // 0x18
		Il2CppObject* stateMachine; // 0x20
		::Il2CppArray<::System::Object*>* codeLengths; // 0x28
		::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* litLenTree; // 0x30
		::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* distTree; // 0x38
		::System::Int32 litLenCodeCount; // 0x40
		::System::Int32 distanceCodeCount; // 0x44
		::System::Int32 metaCodeCount; // 0x48

		::System::Boolean AttemptRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_ATTEMPTREAD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator* arg)
		{
			((::System::Void(*)(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateStateMachine()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_CREATESTATEMACHINE_OFFSET))(nullptr);
		}

		::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* get_LiteralLengthTree()
		{
			return (return (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_GET_LITERALLENGTHTREE_OFFSET))(nullptr);
		}

		::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* get_DistanceTree()
		{
			return (return (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_GET_DISTANCETREE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

