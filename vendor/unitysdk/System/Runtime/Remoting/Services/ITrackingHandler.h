#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_SERVICES_ITRACKINGHANDLER_DISCONNECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_SERVICES_ITRACKINGHANDLER_MARSHALEDOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_SERVICES_ITRACKINGHANDLER_UNMARSHALEDOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Services
{
	inline static constexpr unsigned int ITrackingHandler_TypeDefinitionIndex = 24459;

	class ITrackingHandler : public Il2CppObject
	{
	public:
		::System::Void DisconnectedObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_ITRACKINGHANDLER_DISCONNECTEDOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void MarshaledObject(::System::Object* arg, ::System::Runtime::Remoting::ObjRef* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Remoting::ObjRef*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_ITRACKINGHANDLER_MARSHALEDOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UnmarshaledObject(::System::Object* arg, ::System::Runtime::Remoting::ObjRef* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Remoting::ObjRef*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_ITRACKINGHANDLER_UNMARSHALEDOBJECT_OFFSET))(arg, arg, nullptr);
		}

	};
}

