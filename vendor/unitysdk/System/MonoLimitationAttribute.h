#pragma once
#include "../unitysdk.h"

#define SYSTEM_MONOLIMITATIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x938F7D0)

namespace System
{
	inline static constexpr unsigned int MonoLimitationAttribute_TypeDefinitionIndex = 23908;

	class MonoLimitationAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOLIMITATIONATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

