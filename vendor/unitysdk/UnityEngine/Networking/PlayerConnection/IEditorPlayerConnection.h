#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_IEDITORPLAYERCONNECTION_REGISTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_IEDITORPLAYERCONNECTION_REGISTERCONNECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_IEDITORPLAYERCONNECTION_REGISTERDISCONNECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_IEDITORPLAYERCONNECTION_SEND_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int IEditorPlayerConnection_TypeDefinitionIndex = 31464;

	class IEditorPlayerConnection : public Il2CppObject
	{
	public:
		::System::Void Register(::System::Guid* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Guid*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_IEDITORPLAYERCONNECTION_REGISTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterConnection(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_IEDITORPLAYERCONNECTION_REGISTERCONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterDisconnection(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_IEDITORPLAYERCONNECTION_REGISTERDISCONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Void Send(::System::Guid* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Guid*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_IEDITORPLAYERCONNECTION_SEND_OFFSET))(arg, arg, nullptr);
		}

	};
}

