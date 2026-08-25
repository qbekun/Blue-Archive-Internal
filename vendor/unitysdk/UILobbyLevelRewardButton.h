#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class LevelRewardStateChangeMessage;

#define UILOBBYLEVELREWARDBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x2674660)
#define UILOBBYLEVELREWARDBUTTON_HANDLELEVELREWARDSTATECHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2674830)
#define UILOBBYLEVELREWARDBUTTON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2674B80)
#define UILOBBYLEVELREWARDBUTTON_UPDATEVISIBILITY_OFFSET UNITYSDK_OFFSET(0x2674840)
#define UILOBBYLEVELREWARDBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x2674C50)
#define UILOBBYLEVELREWARDBUTTON_ONCLICKREWARDBUTTON_OFFSET UNITYSDK_OFFSET(0x2674C60)
#define UILOBBYLEVELREWARDBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2674D10)

	inline static constexpr unsigned int UILobbyLevelRewardButton_TypeDefinitionIndex = 6714;

	class UILobbyLevelRewardButton : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* visibleObject; // 0x18
		MXButton* rewardButton; // 0x20
		::UnityEngine::GameObject* redDot; // 0x28

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYLEVELREWARDBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleLevelRewardStateChangeMessage(LevelRewardStateChangeMessage* arg)
		{
			return ((::System::Boolean(*)(LevelRewardStateChangeMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYLEVELREWARDBUTTON_HANDLELEVELREWARDSTATECHANGEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYLEVELREWARDBUTTON_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void UpdateVisibility()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYLEVELREWARDBUTTON_UPDATEVISIBILITY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYLEVELREWARDBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickRewardButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYLEVELREWARDBUTTON_ONCLICKREWARDBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYLEVELREWARDBUTTON_ONENABLE_OFFSET))(nullptr);
		}

	};

