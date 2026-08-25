#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputManager; }
namespace UnityEngine::InputSystem { class InputControlLayoutChange; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::Utilities { class InternedString; }
namespace UnityEngine::InputSystem { class InputDeviceChange; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }

#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDLAYOUTCHANGE_OFFSET UNITYSDK_OFFSET(0x9EFA8A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SYSTEM.IOBSERVER_UNITYENGINE.INPUTSYSTEM.INPUTREMOTING.MESSAGE_.ONERROR_OFFSET UNITYSDK_OFFSET(0x9EFADD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_TRYGETDEVICEBYREMOTEID_OFFSET UNITYSDK_OFFSET(0x9EFADE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SEND_OFFSET UNITYSDK_OFFSET(0x9EFACB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x9EFAFA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_DESERIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SERIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDALLGENERATEDLAYOUTS_OFFSET UNITYSDK_OFFSET(0x9EFAFB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EFB220)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_STOPSENDING_OFFSET UNITYSDK_OFFSET(0x9EFB2B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SYSTEM.IOBSERVER_UNITYENGINE.INPUTSYSTEM.INPUTREMOTING.MESSAGE_.ONNEXT_OFFSET UNITYSDK_OFFSET(0x9EFB5A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_GET_SENDING_OFFSET UNITYSDK_OFFSET(0x9EFB480)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDINITIALMESSAGES_OFFSET UNITYSDK_OFFSET(0x9EFC960)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_BUILDLAYOUTNAMESPACE_OFFSET UNITYSDK_OFFSET(0x9EFCB60)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_STARTSENDING_OFFSET UNITYSDK_OFFSET(0x9EFCBE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x9EFCEB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDALLDEVICES_OFFSET UNITYSDK_OFFSET(0x9EFC980)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SET_SENDING_OFFSET UNITYSDK_OFFSET(0x9EFB580)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDDEVICE_OFFSET UNITYSDK_OFFSET(0x9EFD700)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x9EFD8F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_FINDORCREATESENDERRECORD_OFFSET UNITYSDK_OFFSET(0x9EFDA60)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SYSTEM.IOBSERVER_UNITYENGINE.INPUTSYSTEM.INPUTREMOTING.MESSAGE_.ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9EFDB00)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDLAYOUT_OFFSET UNITYSDK_OFFSET(0x9EFB180)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_REMOVEREMOTEDEVICES_OFFSET UNITYSDK_OFFSET(0x9EFDB10)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x9EFE200)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_FINDLOCALDEVICEID_OFFSET UNITYSDK_OFFSET(0x9EFAEB0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_TypeDefinitionIndex = 28519;

	class InputRemoting : public Il2CppObject
	{
	public:
		Flags* m_Flags; // 0x10
		::UnityEngine::InputSystem::InputManager* m_LocalManager; // 0x18
		::Il2CppArray<::System::Object*>* m_Subscribers; // 0x20
		::Il2CppArray<::System::Object*>* m_Senders; // 0x28

		::System::Void SendLayoutChange(::System::String* str, ::UnityEngine::InputSystem::InputControlLayoutChange* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::InputSystem::InputControlLayoutChange*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDLAYOUTCHANGE_OFFSET))(str, arg, nullptr);
		}

		::System::Void System.IObserver_UnityEngine.InputSystem.InputRemoting.Message_.OnError(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SYSTEM.IOBSERVER_UNITYENGINE.INPUTSYSTEM.INPUTREMOTING.MESSAGE_.ONERROR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* TryGetDeviceByRemoteId(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_TRYGETDEVICEBYREMOTEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Send(Message* arg)
		{
			((::System::Void(*)(Message*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SEND_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputManager* get_manager()
		{
			return (return (::UnityEngine::InputSystem::InputManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_GET_MANAGER_OFFSET))(nullptr);
		}

		Il2CppObject* DeserializeData(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_DESERIALIZEDATA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SerializeData(Il2CppObject* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SERIALIZEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SendAllGeneratedLayouts()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDALLGENERATEDLAYOUTS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::InputManager* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputManager*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StopSending()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_STOPSENDING_OFFSET))(nullptr);
		}

		::System::Void System.IObserver_UnityEngine.InputSystem.InputRemoting.Message_.OnNext(Message* arg)
		{
			((::System::Void(*)(Message*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SYSTEM.IOBSERVER_UNITYENGINE.INPUTSYSTEM.INPUTREMOTING.MESSAGE_.ONNEXT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_sending()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_GET_SENDING_OFFSET))(nullptr);
		}

		::System::Void SendInitialMessages()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDINITIALMESSAGES_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::InternedString* BuildLayoutNamespace(::System::Int32 arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::InternedString*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_BUILDLAYOUTNAMESPACE_OFFSET))(arg, nullptr);
		}

		::System::Void StartSending()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_STARTSENDING_OFFSET))(nullptr);
		}

		::System::Void SendDeviceChange(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::InputDeviceChange* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDDEVICECHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SendAllDevices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDALLDEVICES_OFFSET))(nullptr);
		}

		::System::Void set_sending(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SET_SENDING_OFFSET))(arg, nullptr);
		}

		::System::Void SendDevice(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void SendEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 FindOrCreateSenderRecord(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_FINDORCREATESENDERRECORD_OFFSET))(arg, nullptr);
		}

		::System::Void System.IObserver_UnityEngine.InputSystem.InputRemoting.Message_.OnCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SYSTEM.IOBSERVER_UNITYENGINE.INPUTSYSTEM.INPUTREMOTING.MESSAGE_.ONCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void SendLayout(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDLAYOUT_OFFSET))(str, nullptr);
		}

		::System::Void RemoveRemoteDevices(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_REMOVEREMOTEDEVICES_OFFSET))(arg, nullptr);
		}

		::System::IDisposable* Subscribe(Il2CppObject* arg)
		{
			return (return (::System::IDisposable*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SUBSCRIBE_OFFSET))(arg, nullptr);
		}

		::System::Int32 FindLocalDeviceId(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_FINDLOCALDEVICEID_OFFSET))(arg, arg, nullptr);
		}

	};
}

