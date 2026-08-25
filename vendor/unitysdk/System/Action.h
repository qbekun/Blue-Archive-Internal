#pragma once
#include "../unitysdk.h"

#define SYSTEM_ACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9276540)
#define SYSTEM_ACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x9276600)

namespace System
{
	inline static constexpr unsigned int Action_TypeDefinitionIndex = 23679;

	class Action : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACTION_INVOKE_OFFSET))(nullptr);
		}

	};
}

