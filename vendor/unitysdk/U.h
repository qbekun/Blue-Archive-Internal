#pragma once
#include "unitysdk.h"

#define U_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21D830)

	inline static constexpr unsigned int U_TypeDefinitionIndex = 31080;

	class U : public Il2CppObject
	{
	public:
		::System::Object** p8; // 0x10
		::System::Object** p32; // 0x10
		::System::Object** p64; // 0x10
		::System::UInt64 i; // 0x10

		::System::Void .ctor(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + U_.CTOR_OFFSET))(arg, nullptr);
		}

	};

