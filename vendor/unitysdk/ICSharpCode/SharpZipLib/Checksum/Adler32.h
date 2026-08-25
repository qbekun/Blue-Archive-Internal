#pragma once
#include "../../../unitysdk.h"

#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_ADLER32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9050E30)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_ADLER32_RESET_OFFSET UNITYSDK_OFFSET(0x9050EE0)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_ADLER32_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9051E20)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_ADLER32_UPDATE_OFFSET UNITYSDK_OFFSET(0x9052EA0)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_ADLER32_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9056A80)

namespace ICSharpCode::SharpZipLib::Checksum
{
	inline static constexpr unsigned int Adler32_TypeDefinitionIndex = 37136;

	class Adler32 : public Il2CppObject
	{
	public:
		::System::UInt32 BASE; // 0x0
		::System::UInt32 checkValue; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_ADLER32_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_ADLER32_RESET_OFFSET))(nullptr);
		}

		::System::Int64 get_Value()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_ADLER32_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void Update(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_ADLER32_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_ADLER32_.CCTOR_OFFSET))(nullptr);
		}

	};
}

