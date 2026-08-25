#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::NetworkProtocol { class ServerNotificationFlag; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define REDDOTCHANGEDMESSAGERECEIVER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC1A110)
#define REDDOTCHANGEDMESSAGERECEIVER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC1A120)
#define REDDOTCHANGEDMESSAGERECEIVER_SETREDDOT_OFFSET UNITYSDK_OFFSET(0xC1A2A0)
#define REDDOTCHANGEDMESSAGERECEIVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC1A460)
#define REDDOTCHANGEDMESSAGERECEIVER_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xC1A330)
#define REDDOTCHANGEDMESSAGERECEIVER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC1A470)
#define REDDOTCHANGEDMESSAGERECEIVER_HANDLEREDDOTCHANGEDMESSAGE_OFFSET UNITYSDK_OFFSET(0xC1A570)

	inline static constexpr unsigned int RedDotChangedMessageReceiver_TypeDefinitionIndex = 8853;

	class RedDotChangedMessageReceiver : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* redDot; // 0x18
		::MX::NetworkProtocol::ServerNotificationFlag* flag; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTCHANGEDMESSAGERECEIVER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTCHANGEDMESSAGERECEIVER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void SetRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTCHANGEDMESSAGERECEIVER_SETREDDOT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTCHANGEDMESSAGERECEIVER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTCHANGEDMESSAGERECEIVER_SHOWREDDOT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTCHANGEDMESSAGERECEIVER_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleRedDotChangedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTCHANGEDMESSAGERECEIVER_HANDLEREDDOTCHANGEDMESSAGE_OFFSET))(arg, nullptr);
		}

	};

