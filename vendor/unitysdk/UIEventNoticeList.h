#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
class EventNotifyInfo;

#define UIEVENTNOTICELIST_SETDATA_OFFSET UNITYSDK_OFFSET(0x24B8C60)
#define UIEVENTNOTICELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x24B9430)

	inline static constexpr unsigned int UIEventNoticeList_TypeDefinitionIndex = 5871;

	class UIEventNoticeList : public <GetEntityAsync>d__15
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

		::System::Void SetData(EventNotifyInfo* arg)
		{
			((::System::Void(*)(EventNotifyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTNOTICELIST_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTNOTICELIST_.CTOR_OFFSET))(nullptr);
		}

	};

