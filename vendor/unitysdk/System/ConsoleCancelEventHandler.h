#pragma once
#include "../unitysdk.h"

#define SYSTEM_CONSOLECANCELEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93853B0)
#define SYSTEM_CONSOLECANCELEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x93854C0)

namespace System
{
	inline static constexpr unsigned int ConsoleCancelEventHandler_TypeDefinitionIndex = 23883;

	class ConsoleCancelEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::ConsoleCancelEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ConsoleCancelEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLECANCELEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

