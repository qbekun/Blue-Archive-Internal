#pragma once
#include "../unitysdk.h"

#define SYSTEM_MONOTYPEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x93B3660)

namespace System
{
	inline static constexpr unsigned int MonoTypeInfo_TypeDefinitionIndex = 23953;

	class MonoTypeInfo : public Il2CppObject
	{
	public:
		::System::String* full_name; // 0x10
		::System::Reflection::RuntimeConstructorInfo* default_ctor; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOTYPEINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

