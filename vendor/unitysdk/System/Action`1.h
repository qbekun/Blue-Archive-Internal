#pragma once
#include "../unitysdk.h"

#define SYSTEM_ACTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ACTION`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int Action`1_TypeDefinitionIndex = 23680;

	class Action`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACTION`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACTION`1_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

