#pragma once
#include "unitysdk.h"

class MXButton;
class UIPermanentRaidBossSelectScrollViewController;
class PermanentRaidBossGroupSelectMessage;

#define UIPOPUPPERMANENTRAID_BOSSSELECT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x26FA790)
#define UIPOPUPPERMANENTRAID_BOSSSELECT___N__0_OFFSET UNITYSDK_OFFSET(0x26FA820)
#define UIPOPUPPERMANENTRAID_BOSSSELECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x26FA830)
#define UIPOPUPPERMANENTRAID_BOSSSELECT_SETCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x26FA9B0)
#define UIPOPUPPERMANENTRAID_BOSSSELECT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x26FA9D0)
#define UIPOPUPPERMANENTRAID_BOSSSELECT_ONBACK_OFFSET UNITYSDK_OFFSET(0x26FAAF0)
#define UIPOPUPPERMANENTRAID_BOSSSELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26FABD0)
#define UIPOPUPPERMANENTRAID_BOSSSELECT_HANDLEPERMANENTRAIDBOSSGROUPSELECTMESSAGE_OFFSET UNITYSDK_OFFSET(0x26FABE0)

	inline static constexpr unsigned int UIPopupPermanentRaid_BossSelect_TypeDefinitionIndex = 7049;

	class UIPopupPermanentRaid_BossSelect : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UIPermanentRaidBossSelectScrollViewController* bossSelectScrollView; // 0xE0
		Il2CppObject* _bossGroups; // 0xE8
		::System::Action* _closeCallback; // 0xF0

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPPERMANENTRAID_BOSSSELECT_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPPERMANENTRAID_BOSSSELECT___N__0_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPPERMANENTRAID_BOSSSELECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetCloseCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPPERMANENTRAID_BOSSSELECT_SETCLOSECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPPERMANENTRAID_BOSSSELECT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPPERMANENTRAID_BOSSSELECT_ONBACK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPPERMANENTRAID_BOSSSELECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandlePermanentRaidBossGroupSelectMessage(PermanentRaidBossGroupSelectMessage* arg)
		{
			return ((::System::Boolean(*)(PermanentRaidBossGroupSelectMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPPERMANENTRAID_BOSSSELECT_HANDLEPERMANENTRAIDBOSSGROUPSELECTMESSAGE_OFFSET))(arg, nullptr);
		}

	};

