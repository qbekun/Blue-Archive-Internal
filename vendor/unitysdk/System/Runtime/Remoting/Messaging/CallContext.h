#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E7E20)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_SETCURRENTCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x91E7E30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_SETLOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x91E7E40)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_LOGICALGETDATA_OFFSET UNITYSDK_OFFSET(0x91E7EA0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_LOGICALSETDATA_OFFSET UNITYSDK_OFFSET(0x91E7F10)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CallContext_TypeDefinitionIndex = 24518;

	class CallContext : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* SetCurrentCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_SETCURRENTCALLCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* SetLogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_SETLOGICALCALLCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Object* LogicalGetData(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_LOGICALGETDATA_OFFSET))(str, nullptr);
		}

		::System::Void LogicalSetData(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_LOGICALSETDATA_OFFSET))(str, arg, nullptr);
		}

	};
}

