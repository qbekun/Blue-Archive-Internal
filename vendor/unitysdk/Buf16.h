#pragma once
#include "unitysdk.h"

#define BUF16_GET_LOW64_OFFSET UNITYSDK_OFFSET(0x93D4E50)
#define BUF16_SET_LOW64_OFFSET UNITYSDK_OFFSET(0x93D4EA0)
#define BUF16_GET_HIGH64_OFFSET UNITYSDK_OFFSET(0x93D4E00)
#define BUF16_SET_HIGH64_OFFSET UNITYSDK_OFFSET(0x93D67B0)

	inline static constexpr unsigned int Buf16_TypeDefinitionIndex = 24026;

	class Buf16 : public Il2CppObject
	{
	public:
		::System::UInt32 U0; // 0x10
		::System::UInt32 U1; // 0x14
		::System::UInt32 U2; // 0x18
		::System::UInt32 U3; // 0x1C
		::System::UInt64 ulo64LE; // 0x10
		::System::UInt64 uhigh64LE; // 0x18

		::System::UInt64 get_Low64()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BUF16_GET_LOW64_OFFSET))(nullptr);
		}

		::System::Void set_Low64(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BUF16_SET_LOW64_OFFSET))(arg, nullptr);
		}

		::System::UInt64 get_High64()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BUF16_GET_HIGH64_OFFSET))(nullptr);
		}

		::System::Void set_High64(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BUF16_SET_HIGH64_OFFSET))(arg, nullptr);
		}

	};

