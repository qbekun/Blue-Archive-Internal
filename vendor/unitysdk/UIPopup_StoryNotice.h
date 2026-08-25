#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
namespace FlatData { class ScenarioModeSubTypes; }
namespace MX::NetworkProtocol { class OptionSaveResponse; }
class UIScenarioMode_MainVolume_Series2;

#define UIPOPUP_STORYNOTICE_ONCLICKFORCEENTEROK_OFFSET UNITYSDK_OFFSET(0x27EDFA0)
#define UIPOPUP_STORYNOTICE_ONCLICKFORCEENTERCANCEL_OFFSET UNITYSDK_OFFSET(0x27EE170)
#define UIPOPUP_STORYNOTICE_AWAKE_OFFSET UNITYSDK_OFFSET(0x27EE1A0)
#define UIPOPUP_STORYNOTICE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27EE560)
#define UIPOPUP_STORYNOTICE__ONCLICKFORCEENTEROK_B__15_0_OFFSET UNITYSDK_OFFSET(0x27EE5E0)
#define UIPOPUP_STORYNOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27EE6E0)
#define UIPOPUP_STORYNOTICE__ONCLICKFORCEENTEROK_B__15_1_OFFSET UNITYSDK_OFFSET(0x27EE6F0)
#define UIPOPUP_STORYNOTICE_SETDATA_OFFSET UNITYSDK_OFFSET(0x27EE710)
#define UIPOPUP_STORYNOTICE_ONBACK_OFFSET UNITYSDK_OFFSET(0x27EE780)
#define UIPOPUP_STORYNOTICE_ONCLICKTRYENTER_OFFSET UNITYSDK_OFFSET(0x27EE7C0)

	inline static constexpr unsigned int UIPopup_StoryNotice_TypeDefinitionIndex = 7711;

	class UIPopup_StoryNotice : public Il2CppObject
	{
	public:
		UILabel* _conditionDescriptionLabel; // 0xD8
		MXButton* _tryEnterButton; // 0xE0
		MXButton* _okButton; // 0xE8
		::UnityEngine::GameObject* _forceEnterNoticeObject; // 0xF0
		MXButton* _forceEnterOkButton; // 0xF8
		MXButton* _forceEnterCancelButton; // 0x100
		::System::Action* _mainVolumeOpenEndCallback; // 0x108
		::System::Action* _cancelCallback; // 0x110
		Il2CppObject* _openConditions; // 0x118
		::FlatData::ScenarioModeSubTypes* _series; // 0x120

		::System::Void OnClickForceEnterOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STORYNOTICE_ONCLICKFORCEENTEROK_OFFSET))(nullptr);
		}

		::System::Void OnClickForceEnterCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STORYNOTICE_ONCLICKFORCEENTERCANCEL_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STORYNOTICE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STORYNOTICE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickForceEnterOk_b__15_0(::MX::NetworkProtocol::OptionSaveResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::OptionSaveResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STORYNOTICE__ONCLICKFORCEENTEROK_B__15_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STORYNOTICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickForceEnterOk_b__15_1(UIScenarioMode_MainVolume_Series2* arg)
		{
			((::System::Void(*)(UIScenarioMode_MainVolume_Series2*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STORYNOTICE__ONCLICKFORCEENTEROK_B__15_1_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Action* arg, ::System::Action* arg2, Il2CppObject* arg3, ::FlatData::ScenarioModeSubTypes* arg4)
		{
			((::System::Void(*)(::System::Action*, ::System::Action*, Il2CppObject*, ::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STORYNOTICE_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STORYNOTICE_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OnClickTryEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STORYNOTICE_ONCLICKTRYENTER_OFFSET))(nullptr);
		}

	};

