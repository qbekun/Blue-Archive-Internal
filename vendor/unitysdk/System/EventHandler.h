#pragma once
#include "../unitysdk.h"

#define SYSTEM_EVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x933CEC0)
#define SYSTEM_EVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x933CFD0)

namespace System
{
	inline static constexpr unsigned int EventHandler_TypeDefinitionIndex = 23735;

	class EventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::EventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

