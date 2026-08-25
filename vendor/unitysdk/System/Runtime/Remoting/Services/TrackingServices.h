#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYMARSHALEDOBJECT_OFFSET UNITYSDK_OFFSET(0x91D45B0)
#define SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYUNMARSHALEDOBJECT_OFFSET UNITYSDK_OFFSET(0x91D4980)
#define SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYDISCONNECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x91D4D50)
#define SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91D50F0)

namespace System::Runtime::Remoting::Services
{
	inline static constexpr unsigned int TrackingServices_TypeDefinitionIndex = 24460;

	class TrackingServices : public Il2CppObject
	{
	public:
		::System::Collections::ArrayList* _handlers; // 0x0

		::System::Void NotifyMarshaledObject(::System::Object* arg, ::System::Runtime::Remoting::ObjRef* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Remoting::ObjRef*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYMARSHALEDOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void NotifyUnmarshaledObject(::System::Object* arg, ::System::Runtime::Remoting::ObjRef* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Remoting::ObjRef*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYUNMARSHALEDOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void NotifyDisconnectedObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYDISCONNECTEDOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

