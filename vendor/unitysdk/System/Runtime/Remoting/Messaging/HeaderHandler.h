#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F0700)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x91F0810)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int HeaderHandler_TypeDefinitionIndex = 24541;

	class HeaderHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Invoke(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_HEADERHANDLER_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

