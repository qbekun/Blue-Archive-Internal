#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_INVOKEMESSAGEIDSUBSCRIBERS_OFFSET UNITYSDK_OFFSET(0xA24F310)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_ADDANDCREATE_OFFSET UNITYSDK_OFFSET(0xA24E190)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_UNREGISTERMANAGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA24E5C0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA24FBB0)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerEditorConnectionEvents_TypeDefinitionIndex = 31475;

	class PlayerEditorConnectionEvents : public Il2CppObject
	{
	public:
		Il2CppObject* messageTypeSubscribers; // 0x10
		ConnectionChangeEvent* connectionEvent; // 0x18
		ConnectionChangeEvent* disconnectionEvent; // 0x20

		::System::Void InvokeMessageIdSubscribers(::System::Guid* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Guid*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_INVOKEMESSAGEIDSUBSCRIBERS_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* AddAndCreate(::System::Guid* arg)
		{
			return (return (Il2CppObject*(*)(::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_ADDANDCREATE_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterManagedCallback(::System::Guid* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Guid*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_UNREGISTERMANAGEDCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_.CTOR_OFFSET))(nullptr);
		}

	};
}

