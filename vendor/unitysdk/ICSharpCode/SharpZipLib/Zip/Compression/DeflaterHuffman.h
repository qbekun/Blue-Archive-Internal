#pragma once
#include "../../../../unitysdk.h"

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9050700)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_BITREVERSE_OFFSET UNITYSDK_OFFSET(0x9050D20)

namespace ICSharpCode::SharpZipLib::Zip::Compression
{
	inline static constexpr unsigned int DeflaterHuffman_TypeDefinitionIndex = 37122;

	class DeflaterHuffman : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* BL_ORDER; // 0x0
		::Il2CppArray<::System::Object*>* bit4Reverse; // 0x8
		::Il2CppArray<::System::Object*>* staticLCodes; // 0x10
		::Il2CppArray<::System::Object*>* staticLLength; // 0x18
		::Il2CppArray<::System::Object*>* staticDCodes; // 0x20
		::Il2CppArray<::System::Object*>* staticDLength; // 0x28

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int16 BitReverse(::System::Int32 arg)
		{
			return (return (::System::Int16(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_BITREVERSE_OFFSET))(arg, nullptr);
		}

	};
}

