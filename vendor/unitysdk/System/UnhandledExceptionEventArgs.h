#pragma once
#include "../unitysdk.h"

#define SYSTEM_UNHANDLEDEXCEPTIONEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9383110)
#define SYSTEM_UNHANDLEDEXCEPTIONEVENTARGS_GET_EXCEPTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x9383180)
#define SYSTEM_UNHANDLEDEXCEPTIONEVENTARGS_GET_ISTERMINATING_OFFSET UNITYSDK_OFFSET(0x9383190)

namespace System
{
	inline static constexpr unsigned int UnhandledExceptionEventArgs_TypeDefinitionIndex = 23865;

	class UnhandledExceptionEventArgs : public Il2CppObject
	{
	public:
		::System::Object* _exception; // 0x10
		::System::Boolean _isTerminating; // 0x18

		::System::Void .ctor(::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNHANDLEDEXCEPTIONEVENTARGS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_ExceptionObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNHANDLEDEXCEPTIONEVENTARGS_GET_EXCEPTIONOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTerminating()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNHANDLEDEXCEPTIONEVENTARGS_GET_ISTERMINATING_OFFSET))(nullptr);
		}

	};
}

