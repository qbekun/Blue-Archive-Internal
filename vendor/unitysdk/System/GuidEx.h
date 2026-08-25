#pragma once
#include "../unitysdk.h"

#define SYSTEM_GUIDEX_HEXSTOCHARS_OFFSET UNITYSDK_OFFSET(0xA4AD680)
#define SYSTEM_GUIDEX_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0xA4AD6F0)
#define SYSTEM_GUIDEX_HEXSTOCHARSHEXOUTPUT_OFFSET UNITYSDK_OFFSET(0xA4AE0B0)

namespace System
{
	inline static constexpr unsigned int GuidEx_TypeDefinitionIndex = 34651;

	class GuidEx : public Il2CppObject
	{
	public:
		::System::Int32 _a; // 0x10
		::System::Int16 _b; // 0x14
		::System::Int16 _c; // 0x16
		::System::Byte _d; // 0x18
		::System::Byte _e; // 0x19
		::System::Byte _f; // 0x1A
		::System::Byte _g; // 0x1B
		::System::Byte _h; // 0x1C
		::System::Byte _i; // 0x1D
		::System::Byte _j; // 0x1E
		::System::Byte _k; // 0x1F

		::System::Int32 HexsToChars(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUIDEX_HEXSTOCHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUIDEX_TRYFORMAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 HexsToCharsHexOutput(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUIDEX_HEXSTOCHARSHEXOUTPUT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

