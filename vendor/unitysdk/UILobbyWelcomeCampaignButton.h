#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UISprite;
class UILabel;
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Animation; }

#define UILOBBYWELCOMECAMPAIGNBUTTON_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x26797E0)
#define UILOBBYWELCOMECAMPAIGNBUTTON_UPDATEVISIBILITY_OFFSET UNITYSDK_OFFSET(0x2679820)
#define UILOBBYWELCOMECAMPAIGNBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x2679C10)
#define UILOBBYWELCOMECAMPAIGNBUTTON_GET_WELCOMEANI_OFFSET UNITYSDK_OFFSET(0x2679C20)
#define UILOBBYWELCOMECAMPAIGNBUTTON__STARTWELCOMEANI_G__YIELDREFRESH|15_0_OFFSET UNITYSDK_OFFSET(0x2679CB0)
#define UILOBBYWELCOMECAMPAIGNBUTTON_STARTWELCOMEANI_OFFSET UNITYSDK_OFFSET(0x2679D50)
#define UILOBBYWELCOMECAMPAIGNBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x267A1F0)
#define UILOBBYWELCOMECAMPAIGNBUTTON_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x267A210)
#define UILOBBYWELCOMECAMPAIGNBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x267A370)

	inline static constexpr unsigned int UILobbyWelcomeCampaignButton_TypeDefinitionIndex = 6726;

	class UILobbyWelcomeCampaignButton : public Il2CppObject
	{
	public:
		MXButton* button; // 0x18
		::UnityEngine::GameObject* redDot; // 0x20
		UISprite* buttonSprite; // 0x28
		UILabel* endDateLabel; // 0x30
		::UnityEngine::AnimationClip* welcomeClip; // 0x38
		::System::Boolean isEnabled; // 0x40
		::UnityEngine::Coroutine* coroutine; // 0x48
		::UnityEngine::Animation* _welcomeAni; // 0x50

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYWELCOMECAMPAIGNBUTTON_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void UpdateVisibility()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYWELCOMECAMPAIGNBUTTON_UPDATEVISIBILITY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYWELCOMECAMPAIGNBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Animation* get_welcomeAni()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYWELCOMECAMPAIGNBUTTON_GET_WELCOMEANI_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _StartWelcomeAni_g__YieldRefresh|15_0(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYWELCOMECAMPAIGNBUTTON__STARTWELCOMEANI_G__YIELDREFRESH|15_0_OFFSET))(arg, nullptr);
		}

		::System::Void StartWelcomeAni()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYWELCOMECAMPAIGNBUTTON_STARTWELCOMEANI_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYWELCOMECAMPAIGNBUTTON_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYWELCOMECAMPAIGNBUTTON_ONCLICKBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYWELCOMECAMPAIGNBUTTON_AWAKE_OFFSET))(nullptr);
		}

	};

