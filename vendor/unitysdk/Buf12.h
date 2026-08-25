#pragma once
#include "unitysdk.h"

#define BUF12_GET_LOW64_OFFSET UNITYSDK_OFFSET(0x93D45B0)
#define BUF12_SET_LOW64_OFFSET UNITYSDK_OFFSET(0x93D4600)
#define BUF12_GET_HIGH64_OFFSET UNITYSDK_OFFSET(0x93D4500)
#define BUF12_SET_HIGH64_OFFSET UNITYSDK_OFFSET(0x93D4550)

	inline static constexpr unsigned int Buf12_TypeDefinitionIndex = 24025;

	class Buf12 : public Il2CppObject
	{
	public:
		::System::UInt32 U0; // 0x10
		::System::UInt32 U1; // 0x14
		::System::UInt32 U2; // 0x18
		::System::UInt64 ulo64LE; // 0x10
		::System::UInt64 uhigh64LE; // 0x14

		::System::UInt64 get_Low64()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BUF12_GET_LOW64_OFFSET))(nullptr);
		}

		::System::Void set_Low64(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BUF12_SET_LOW64_OFFSET))(arg, nullptr);
		}

		::System::UInt64 get_High64()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BUF12_GET_HIGH64_OFFSET))(nullptr);
		}

		::System::Void set_High64(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BUF12_SET_HIGH64_OFFSET))(arg, nullptr);
		}

	};

