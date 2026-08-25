#pragma once
#include "unitysdk.h"

#define BUF24_GET_LOW64_OFFSET UNITYSDK_OFFSET(0x93D6440)
#define BUF24_SET_LOW64_OFFSET UNITYSDK_OFFSET(0x93D6380)
#define BUF24_SET_MID64_OFFSET UNITYSDK_OFFSET(0x93D63E0)
#define BUF24_SET_HIGH64_OFFSET UNITYSDK_OFFSET(0x93D6750)

	inline static constexpr unsigned int Buf24_TypeDefinitionIndex = 24027;

	class Buf24 : public Il2CppObject
	{
	public:
		::System::UInt32 U0; // 0x10
		::System::UInt32 U1; // 0x14
		::System::UInt32 U2; // 0x18
		::System::UInt32 U3; // 0x1C
		::System::UInt32 U4; // 0x20
		::System::UInt32 U5; // 0x24
		::System::UInt64 ulo64LE; // 0x10
		::System::UInt64 umid64LE; // 0x18
		::System::UInt64 uhigh64LE; // 0x20

		::System::UInt64 get_Low64()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BUF24_GET_LOW64_OFFSET))(nullptr);
		}

		::System::Void set_Low64(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BUF24_SET_LOW64_OFFSET))(arg, nullptr);
		}

		::System::Void set_Mid64(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BUF24_SET_MID64_OFFSET))(arg, nullptr);
		}

		::System::Void set_High64(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BUF24_SET_HIGH64_OFFSET))(arg, nullptr);
		}

	};

