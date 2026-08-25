#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class OpenConditionButtonController;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIEVENTLOBBYCONTENTCONTROLLER_WORLDRAID_.CTOR_OFFSET UNITYSDK_OFFSET(0x2454A30)
#define UIEVENTLOBBYCONTENTCONTROLLER_WORLDRAID_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2454A40)
#define UIEVENTLOBBYCONTENTCONTROLLER_WORLDRAID_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2454B40)
#define UIEVENTLOBBYCONTENTCONTROLLER_WORLDRAID_ONCLICKENTERWORLDRAIDBUTTON_OFFSET UNITYSDK_OFFSET(0x2454CC0)
#define UIEVENTLOBBYCONTENTCONTROLLER_WORLDRAID_AWAKE_OFFSET UNITYSDK_OFFSET(0x2455150)
#define UIEVENTLOBBYCONTENTCONTROLLER_WORLDRAID_REFRESHCONTENT_OFFSET UNITYSDK_OFFSET(0x2455270)
#define UIEVENTLOBBYCONTENTCONTROLLER_WORLDRAID_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2455480)
#define UIEVENTLOBBYCONTENTCONTROLLER_WORLDRAID_HANDLENOTIFICATIONEVENTCONTENTREDDOTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24554A0)

	inline static constexpr unsigned int UIEventLobbyContentController_WorldRaid_TypeDefinitionIndex = 5569;

	class UIEventLobbyContentController_WorldRaid : public Il2CppObject
	{
	public:
		MXButton* enterWorldRaidButton; // 0x38
		::UnityEngine::GameObject* worldRaidReddot; // 0x40
		OpenConditionButtonController* openConditionButtonController; // 0x48
		::System::Int64 eventContentId; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_WORLDRAID_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_WORLDRAID_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_WORLDRAID_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickEnterWorldRaidButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_WORLDRAID_ONCLICKENTERWORLDRAIDBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_WORLDRAID_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RefreshContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_WORLDRAID_REFRESHCONTENT_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_WORLDRAID_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleNotificationEventContentReddotResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_WORLDRAID_HANDLENOTIFICATIONEVENTCONTENTREDDOTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

	};

