#pragma once
#include "../unitysdk.h"

#define SYSTEM_EVENTHANDLER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_EVENTHANDLER`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int EventHandler`1_TypeDefinitionIndex = 23736;

	class EventHandler`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EVENTHANDLER`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EVENTHANDLER`1_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

