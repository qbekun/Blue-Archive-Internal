#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_DECOMPRESSION_ZLIB_ADLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8E7080)
#define BESTHTTP_DECOMPRESSION_ZLIB_ADLER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8E7090)
#define BESTHTTP_DECOMPRESSION_ZLIB_ADLER_ADLER32_OFFSET UNITYSDK_OFFSET(0x8E70E0)

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int Adler_TypeDefinitionIndex = 23384;

	class Adler : public Il2CppObject
	{
	public:
		::System::UInt32 BASE; // 0x0
		::System::Int32 NMAX; // 0x4

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ADLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ADLER_.CCTOR_OFFSET))(nullptr);
		}

		::System::UInt32 Adler32(::System::UInt32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ADLER_ADLER32_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

