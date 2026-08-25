#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class IPlayerEditorConnectionNative; }
namespace UnityEngine::Networking::PlayerConnection { class PlayerEditorConnectionEvents; }
namespace UnityEngine::Networking::PlayerConnection { class PlayerConnection; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA24DAE0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0xA24DC10)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA24DB70)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA24DD90)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_GETCONNECTIONNATIVEAPI_OFFSET UNITYSDK_OFFSET(0xA24DD10)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTER_OFFSET UNITYSDK_OFFSET(0xA24DEA0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTER_OFFSET UNITYSDK_OFFSET(0xA24E3A0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTERCONNECTION_OFFSET UNITYSDK_OFFSET(0xA24E710)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTERDISCONNECTION_OFFSET UNITYSDK_OFFSET(0xA24E8D0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTERCONNECTION_OFFSET UNITYSDK_OFFSET(0xA24E930)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTERDISCONNECTION_OFFSET UNITYSDK_OFFSET(0xA24E990)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_SEND_OFFSET UNITYSDK_OFFSET(0xA24E9F0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_TRYSEND_OFFSET UNITYSDK_OFFSET(0xA24EBD0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_BLOCKUNTILRECVMSG_OFFSET UNITYSDK_OFFSET(0xA24EDB0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_DISCONNECTALL_OFFSET UNITYSDK_OFFSET(0xA24F080)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_MESSAGECALLBACKINTERNAL_OFFSET UNITYSDK_OFFSET(0xA24F180)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_CONNECTEDCALLBACKINTERNAL_OFFSET UNITYSDK_OFFSET(0xA24F7A0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_DISCONNECTEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA24F970)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA24FAF0)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerConnection_TypeDefinitionIndex = 31468;

	class PlayerConnection : public Il2CppObject
	{
	public:
		::UnityEngine::IPlayerEditorConnectionNative* connectionNative; // 0x0
		::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents* m_PlayerEditorConnectionEvents; // 0x18
		Il2CppObject* m_connectedPlayers; // 0x20
		::System::Boolean m_IsInitilized; // 0x28
		::UnityEngine::Networking::PlayerConnection::PlayerConnection* s_Instance; // 0x8

		::UnityEngine::Networking::PlayerConnection::PlayerConnection* get_instance()
		{
			return (return (::UnityEngine::Networking::PlayerConnection::PlayerConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Boolean get_isConnected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_GET_ISCONNECTED_OFFSET))(nullptr);
		}

		::UnityEngine::Networking::PlayerConnection::PlayerConnection* CreateInstance()
		{
			return (return (::UnityEngine::Networking::PlayerConnection::PlayerConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_CREATEINSTANCE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::IPlayerEditorConnectionNative* GetConnectionNativeApi()
		{
			return (return (::UnityEngine::IPlayerEditorConnectionNative*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_GETCONNECTIONNATIVEAPI_OFFSET))(nullptr);
		}

		::System::Void Register(::System::Guid* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Guid*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Unregister(::System::Guid* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Guid*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterConnection(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTERCONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterDisconnection(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTERDISCONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterConnection(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTERCONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterDisconnection(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTERDISCONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Void Send(::System::Guid* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Guid*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_SEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TrySend(::System::Guid* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Guid*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_TRYSEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean BlockUntilRecvMsg(::System::Guid* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Guid*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_BLOCKUNTILRECVMSG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DisconnectAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_DISCONNECTALL_OFFSET))(nullptr);
		}

		::System::Void MessageCallbackInternal(::System::Int32 arg, ::System::UInt64 arg, ::System::UInt64 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::UInt64, ::System::UInt64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_MESSAGECALLBACKINTERNAL_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Void ConnectedCallbackInternal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_CONNECTEDCALLBACKINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void DisconnectedCallback(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_DISCONNECTEDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

