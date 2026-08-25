#pragma once
#include "../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0xE25B80)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_ATTACHONEFRAMELISTENER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_ATTACHONEFRAMELISTENER_OFFSET UNITYSDK_OFFSET(0xE2B040)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_ATTACHLISTENERINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0xE25E10)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_DETACHLISTENERINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_DETACHALLLISTENER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_DETACHALLLISTENER_OFFSET UNITYSDK_OFFSET(0xE2B0A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_CLEAR_OFFSET UNITYSDK_OFFSET(0xE2B160)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_QUEUEMESSAGE_OFFSET UNITYSDK_OFFSET(0xE25690)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_TRIGGERMESSAGE_OFFSET UNITYSDK_OFFSET(0xE2B1B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xE2B310)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xE2B390)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int MessagingSystem_TypeDefinitionIndex = 10423;

	class MessagingSystem : public ::ToyWebViewShared::Messages::NotifyUrlChanged
	{
	public:
		Il2CppObject* _listenerDict; // 0x20
		Il2CppObject* _messageQueue; // 0x28

		::System::Boolean AttachListener(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_ATTACHLISTENER_OFFSET))(arg, nullptr);
		}

		::System::Boolean AttachListener(::System::Type* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::System::Type*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_ATTACHLISTENER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AttachOneFrameListener(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_ATTACHONEFRAMELISTENER_OFFSET))(arg, nullptr);
		}

		::System::Boolean AttachOneFrameListener(::System::Type* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::System::Type*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_ATTACHONEFRAMELISTENER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AttachListenerInternal(::System::Type* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			return ((::System::Boolean(*)(::System::Type*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_ATTACHLISTENERINTERNAL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean DetachListener(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_DETACHLISTENER_OFFSET))(arg, nullptr);
		}

		::System::Boolean DetachListener(::System::Type* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::System::Type*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_DETACHLISTENER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean DetachListenerInternal(::System::Type* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::System::Type*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_DETACHLISTENERINTERNAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean DetachAllListener()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_DETACHALLLISTENER_OFFSET))(nullptr);
		}

		::System::Boolean DetachAllListener(::System::Type* arg)
		{
			return ((::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_DETACHALLLISTENER_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean QueueMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_QUEUEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TriggerMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_TRIGGERMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGSYSTEM_.CTOR_OFFSET))(nullptr);
		}

	};
}

