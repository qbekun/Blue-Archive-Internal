#pragma once
#include "unitysdk.h"

class UILabel;
class ButtonActivator;
namespace FlatData { class EventTargetType; }
class IncreaseInfo;

#define UIWELCOMECAMPAIGN_BONUSSLOT_ONCLICKSHORTCUT_OFFSET UNITYSDK_OFFSET(0xBD75A0)
#define UIWELCOMECAMPAIGN_BONUSSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0xBD6D80)
#define UIWELCOMECAMPAIGN_BONUSSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0xBD75B0)
#define UIWELCOMECAMPAIGN_BONUSSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xBD76E0)

	inline static constexpr unsigned int UIWelcomeCampaign_BonusSlot_TypeDefinitionIndex = 8683;

	class UIWelcomeCampaign_BonusSlot : public Il2CppObject
	{
	public:
		UILabel* nameLabel; // 0x18
		UILabel* increaseLabel; // 0x20
		ButtonActivator* ShortcutButton; // 0x28
		::FlatData::EventTargetType* shortcutType; // 0x30

		::System::Void OnClickShortcut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_BONUSSLOT_ONCLICKSHORTCUT_OFFSET))(nullptr);
		}

		::System::Void SetData(IncreaseInfo* arg)
		{
			((::System::Void(*)(IncreaseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_BONUSSLOT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_BONUSSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_BONUSSLOT_.CTOR_OFFSET))(nullptr);
		}

	};

