#pragma once
#include "../unitysdk.h"

#define SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93831A0)
#define SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x93832B0)

namespace System
{
	inline static constexpr unsigned int UnhandledExceptionEventHandler_TypeDefinitionIndex = 23866;

	class UnhandledExceptionEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::UnhandledExceptionEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::UnhandledExceptionEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNHANDLEDEXCEPTIONEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

