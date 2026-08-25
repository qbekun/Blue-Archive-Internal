#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Networking::PlayerConnection { class IEditorPlayerConnection; }
namespace UnityEngine::Networking::PlayerConnection { class MessageEventArgs; }

#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SYSTEM.IOBSERVER_UNITYENGINE.INPUTSYSTEM.INPUTREMOTING.MESSAGE_.ONNEXT_OFFSET UNITYSDK_OFFSET(0x9EFEFD0)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EFF370)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONSTOPSENDING_OFFSET UNITYSDK_OFFSET(0x9EFF380)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONNEWDEVICE_OFFSET UNITYSDK_OFFSET(0x9EFF4D0)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SYSTEM.IOBSERVER_UNITYENGINE.INPUTSYSTEM.INPUTREMOTING.MESSAGE_.ONERROR_OFFSET UNITYSDK_OFFSET(0x9EFF4E0)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONNEWLAYOUT_OFFSET UNITYSDK_OFFSET(0x9EFF4F0)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_BIND_OFFSET UNITYSDK_OFFSET(0x9EFF500)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x9EFFD50)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONSTARTSENDING_OFFSET UNITYSDK_OFFSET(0x9EFFF40)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONREMOVEDEVICE_OFFSET UNITYSDK_OFFSET(0x9EFFF50)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONNEWEVENTS_OFFSET UNITYSDK_OFFSET(0x9EFFF60)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x9EFFF70)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SYSTEM.IOBSERVER_UNITYENGINE.INPUTSYSTEM.INPUTREMOTING.MESSAGE_.ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9F00030)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F00040)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONCHANGEUSAGES_OFFSET UNITYSDK_OFFSET(0x9F00230)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SENDTOSUBSCRIBERS_OFFSET UNITYSDK_OFFSET(0x9EFF390)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x9EFFCA0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int RemoteInputPlayerConnection_TypeDefinitionIndex = 28521;

	class RemoteInputPlayerConnection : public Il2CppObject
	{
	public:
		::System::Guid* kNewDeviceMsg; // 0x0
		::System::Guid* kNewLayoutMsg; // 0x10
		::System::Guid* kNewEventsMsg; // 0x20
		::System::Guid* kRemoveDeviceMsg; // 0x30
		::System::Guid* kChangeUsagesMsg; // 0x40
		::System::Guid* kStartSendingMsg; // 0x50
		::System::Guid* kStopSendingMsg; // 0x60
		::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection* m_Connection; // 0x18
		::Il2CppArray<::System::Object*>* m_Subscribers; // 0x20
		::Il2CppArray<::System::Object*>* m_ConnectedIds; // 0x28

		::System::Void System.IObserver_UnityEngine.InputSystem.InputRemoting.Message_.OnNext(Message* arg)
		{
			((::System::Void(*)(Message*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SYSTEM.IOBSERVER_UNITYENGINE.INPUTSYSTEM.INPUTREMOTING.MESSAGE_.ONNEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnStopSending(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONSTOPSENDING_OFFSET))(arg, nullptr);
		}

		::System::Void OnNewDevice(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONNEWDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void System.IObserver_UnityEngine.InputSystem.InputRemoting.Message_.OnError(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SYSTEM.IOBSERVER_UNITYENGINE.INPUTSYSTEM.INPUTREMOTING.MESSAGE_.ONERROR_OFFSET))(arg, nullptr);
		}

		::System::Void OnNewLayout(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONNEWLAYOUT_OFFSET))(arg, nullptr);
		}

		::System::Void Bind(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::IDisposable* Subscribe(Il2CppObject* arg)
		{
			return (return (::System::IDisposable*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SUBSCRIBE_OFFSET))(arg, nullptr);
		}

		::System::Void OnStartSending(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONSTARTSENDING_OFFSET))(arg, nullptr);
		}

		::System::Void OnRemoveDevice(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONREMOVEDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void OnNewEvents(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONNEWEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisconnected(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONDISCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void System.IObserver_UnityEngine.InputSystem.InputRemoting.Message_.OnCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SYSTEM.IOBSERVER_UNITYENGINE.INPUTSYSTEM.INPUTREMOTING.MESSAGE_.ONCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnChangeUsages(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONCHANGEUSAGES_OFFSET))(arg, nullptr);
		}

		::System::Void SendToSubscribers(MessageType* arg, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs* arg)
		{
			((::System::Void(*)(MessageType*, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SENDTOSUBSCRIBERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnConnected(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONCONNECTED_OFFSET))(arg, nullptr);
		}

	};
}

