#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace FlatData { class EventTargetType; }
namespace FlatData { class OpenConditionContent; }
namespace MX::GameLogic::Service { class OpenConditionLockReason; }
class EventNotifyInfo;

#define EVENTNOTICEARCHIVESCROLLVIEWELEMENT_ONCLICKDISABLESHORTCUT_OFFSET UNITYSDK_OFFSET(0x2469BA0)
#define EVENTNOTICEARCHIVESCROLLVIEWELEMENT_ONCLICKSHORTCUT_OFFSET UNITYSDK_OFFSET(0x2469C40)
#define EVENTNOTICEARCHIVESCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2469C50)
#define EVENTNOTICEARCHIVESCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x246A530)
#define EVENTNOTICEARCHIVESCROLLVIEWELEMENT_ISSATISFYOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x246A510)
#define EVENTNOTICEARCHIVESCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x246A570)

	inline static constexpr unsigned int EventNoticeArchiveScrollViewElement_TypeDefinitionIndex = 5627;

	class EventNoticeArchiveScrollViewElement : public <GetEntityAsync>d__15
	{
	public:
		UITexture* Icon; // 0x28
		UILabel* RemainTimeLabel; // 0x30
		UILabel* EventNameLabel; // 0x38
		UILabel* EventInfoLabel; // 0x40
		::UnityEngine::GameObject* RewardEventTag; // 0x48
		::UnityEngine::GameObject* RaidEventTag; // 0x50
		::UnityEngine::GameObject* TimeAttackEventTag; // 0x58
		::UnityEngine::GameObject* EliminateRaidEventTag; // 0x60
		::UnityEngine::GameObject* MultiFloorRaidEventTag; // 0x68
		::UnityEngine::GameObject* ShortcutButtonObject; // 0x70
		MXButton* EnableShortcutButton; // 0x78
		MXButton* DisableShortcutButton; // 0x80
		::FlatData::EventTargetType* shortcutType; // 0x88
		::FlatData::OpenConditionContent* content; // 0x8C
		::MX::GameLogic::Service::OpenConditionLockReason* reason; // 0x90

		::System::Void OnClickDisableShortcut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTICEARCHIVESCROLLVIEWELEMENT_ONCLICKDISABLESHORTCUT_OFFSET))(nullptr);
		}

		::System::Void OnClickShortcut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTICEARCHIVESCROLLVIEWELEMENT_ONCLICKSHORTCUT_OFFSET))(nullptr);
		}

		::System::Void SetData(EventNotifyInfo* arg)
		{
			((::System::Void(*)(EventNotifyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTICEARCHIVESCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTICEARCHIVESCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfyOpenCondition(::FlatData::EventTargetType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTICEARCHIVESCROLLVIEWELEMENT_ISSATISFYOPENCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTICEARCHIVESCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

	};

