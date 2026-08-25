#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UIServerSelectListPopup;
class UIRegionSelectListPopup;
class UIServerSelectGlobalStatus;
class UIToggle;
namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIPatchDownload;

#define UISERVERSELECT_HANDLESELECTSERVERMESSAGE_OFFSET UNITYSDK_OFFSET(0xCD5900)
#define UISERVERSELECT_ONOPENED_OFFSET UNITYSDK_OFFSET(0xCD5BA0)
#define UISERVERSELECT_ONCLICKCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0xCD6D90)
#define UISERVERSELECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD6FE0)
#define UISERVERSELECT_SETCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0xCD5A00)
#define UISERVERSELECT_ONCLICKREGIONSELECTBUTTON_OFFSET UNITYSDK_OFFSET(0xCD71F0)
#define UISERVERSELECT_ONCLICKSERVERSELECTBUTTON_OFFSET UNITYSDK_OFFSET(0xCD7210)
#define UISERVERSELECT_ONTOGGLESKIPCOMPULSORYTUTORIAL_OFFSET UNITYSDK_OFFSET(0xCD7240)
#define UISERVERSELECT_ONTOGGLESKIPTUTORIAL_OFFSET UNITYSDK_OFFSET(0xCD7320)
#define UISERVERSELECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCD7400)
#define UISERVERSELECT_AWAKE_OFFSET UNITYSDK_OFFSET(0xCD7670)
#define UISERVERSELECT_HANDLESELECTREGIONMESSAGE_OFFSET UNITYSDK_OFFSET(0xCD7B70)
#define UISERVERSELECT__ONCLICKCONFIRMBUTTON_B__29_0_OFFSET UNITYSDK_OFFSET(0xCD7C70)
#define UISERVERSELECT_HANDLESETUPGLOBALUTILMESSAGE_OFFSET UNITYSDK_OFFSET(0xCD7D10)
#define UISERVERSELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xCD7D40)

	inline static constexpr unsigned int UIServerSelect_TypeDefinitionIndex = 9154;

	class UIServerSelect : public Il2CppObject
	{
	public:
		MXButton* serverSelectButton; // 0xD8
		UILabel* serverNameLabel; // 0xE0
		UIServerSelectListPopup* selectServerPopup; // 0xE8
		MXButton* confirmButton; // 0xF0
		MXButton* regionSelectButton; // 0xF8
		UILabel* regionNameLabel; // 0x100
		UIRegionSelectListPopup* selectRegionPopup; // 0x108
		UIServerSelectGlobalStatus* globalStatus; // 0x110
		UIToggle* skipTutorialCheck; // 0x118
		UIToggle* skipCompulsoryTutorialCheck; // 0x120
		::UnityEngine::GameObject* informationGroup; // 0x128
		UILabel* streamVersionLabel; // 0x130
		UILabel* buildNameLabel; // 0x138
		::System::Int32 skipCompulsoryTutorialOff; // 0x140
		::System::Int32 skipCompulsoryTutorialOn; // 0x144
		::System::Int32 skipTutorialOff; // 0x148
		::System::Int32 skipTutorialOn; // 0x14C

		::System::Boolean HandleSelectServerMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECT_HANDLESELECTSERVERMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECT_ONCLICKCONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECT_SETCONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickRegionSelectButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECT_ONCLICKREGIONSELECTBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickServerSelectButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECT_ONCLICKSERVERSELECTBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnToggleSkipCompulsoryTutorial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECT_ONTOGGLESKIPCOMPULSORYTUTORIAL_OFFSET))(nullptr);
		}

		::System::Void OnToggleSkipTutorial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECT_ONTOGGLESKIPTUTORIAL_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleSelectRegionMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECT_HANDLESELECTREGIONMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickConfirmButton_b__29_0(UIPatchDownload* arg)
		{
			((::System::Void(*)(UIPatchDownload*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECT__ONCLICKCONFIRMBUTTON_B__29_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleSetupGlobalUtilMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECT_HANDLESETUPGLOBALUTILMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISERVERSELECT_.CTOR_OFFSET))(nullptr);
		}

	};

