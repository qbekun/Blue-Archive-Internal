#pragma once
#include "../../../../unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams { class StreamManipulator; }
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams { class OutputWindow; }
namespace ICSharpCode::SharpZipLib::Zip::Compression { class InflaterDynHeader; }
namespace ICSharpCode::SharpZipLib::Zip::Compression { class InflaterHuffmanTree; }
namespace ICSharpCode::SharpZipLib::Checksum { class Adler32; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_.CTOR_OFFSET UNITYSDK_OFFSET(0x904D320)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_RESET_OFFSET UNITYSDK_OFFSET(0x904E7E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODEHEADER_OFFSET UNITYSDK_OFFSET(0x9050EF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODEDICT_OFFSET UNITYSDK_OFFSET(0x9051140)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODEHUFFMAN_OFFSET UNITYSDK_OFFSET(0x9051230)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODECHKSUM_OFFSET UNITYSDK_OFFSET(0x9051B90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODE_OFFSET UNITYSDK_OFFSET(0x9051E30)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_SETINPUT_OFFSET UNITYSDK_OFFSET(0x9052900)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_INFLATE_OFFSET UNITYSDK_OFFSET(0x9052B10)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_ISNEEDINGINPUT_OFFSET UNITYSDK_OFFSET(0x9053120)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_ISNEEDINGDICTIONARY_OFFSET UNITYSDK_OFFSET(0x9053150)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x9050140)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_TOTALOUT_OFFSET UNITYSDK_OFFSET(0x9053170)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_TOTALIN_OFFSET UNITYSDK_OFFSET(0x904E880)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_REMAININGINPUT_OFFSET UNITYSDK_OFFSET(0x904E8C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9053190)

namespace ICSharpCode::SharpZipLib::Zip::Compression
{
	inline static constexpr unsigned int Inflater_TypeDefinitionIndex = 37123;

	class Inflater : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* CPLENS; // 0x0
		::Il2CppArray<::System::Object*>* CPLEXT; // 0x8
		::Il2CppArray<::System::Object*>* CPDIST; // 0x10
		::Il2CppArray<::System::Object*>* CPDEXT; // 0x18
		::System::Int32 mode; // 0x10
		::System::Int32 readAdler; // 0x14
		::System::Int32 neededBits; // 0x18
		::System::Int32 repLength; // 0x1C
		::System::Int32 repDist; // 0x20
		::System::Int32 uncomprLen; // 0x24
		::System::Boolean isLastBlock; // 0x28
		::System::Int64 totalOut; // 0x30
		::System::Int64 totalIn; // 0x38
		::System::Boolean noHeader; // 0x40
		::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator* input; // 0x48
		::ICSharpCode::SharpZipLib::Zip::Compression::Streams::OutputWindow* outputWindow; // 0x50
		::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader* dynHeader; // 0x58
		::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* litlenTree; // 0x60
		::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* distTree; // 0x68
		::ICSharpCode::SharpZipLib::Checksum::Adler32* adler; // 0x70

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_RESET_OFFSET))(nullptr);
		}

		::System::Boolean DecodeHeader()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODEHEADER_OFFSET))(nullptr);
		}

		::System::Boolean DecodeDict()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODEDICT_OFFSET))(nullptr);
		}

		::System::Boolean DecodeHuffman()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODEHUFFMAN_OFFSET))(nullptr);
		}

		::System::Boolean DecodeChksum()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODECHKSUM_OFFSET))(nullptr);
		}

		::System::Boolean Decode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODE_OFFSET))(nullptr);
		}

		::System::Void SetInput(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_SETINPUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Inflate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_INFLATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsNeedingInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_ISNEEDINGINPUT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNeedingDictionary()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_ISNEEDINGDICTIONARY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFinished()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_ISFINISHED_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalOut()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_TOTALOUT_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalIn()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_TOTALIN_OFFSET))(nullptr);
		}

		::System::Int32 get_RemainingInput()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_REMAININGINPUT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

