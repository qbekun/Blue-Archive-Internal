#pragma once
#include "unitysdk.h"

class UINormalCraftSlotInfo;
class UIShiftingCraftSlotInfo;
class IntTabController;
class OpenConditionButtonController;
class UINormalCraftRewardDetail;
class MXButton;
namespace MX::Data { class CraftType; }

#define UICRAFTDURATIONLIST_SETDOTANDBTN_OFFSET UNITYSDK_OFFSET(0x238C4B0)
#define UICRAFTDURATIONLIST_CHOOSESTARTUPTAB_OFFSET UNITYSDK_OFFSET(0x238C510)
#define UICRAFTDURATIONLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x238C520)
#define UICRAFTDURATIONLIST_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x238C530)
#define UICRAFTDURATIONLIST_ONBACK_OFFSET UNITYSDK_OFFSET(0x238C580)
#define UICRAFTDURATIONLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x238C630)
#define UICRAFTDURATIONLIST_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x238C870)
#define UICRAFTDURATIONLIST_CO_LOADCRAFTINFO_OFFSET UNITYSDK_OFFSET(0x238C900)
#define UICRAFTDURATIONLIST_ONCLICKCRAFTPROBABILITYTABLE_OFFSET UNITYSDK_OFFSET(0x238C990)
#define UICRAFTDURATIONLIST_ONOPENED_OFFSET UNITYSDK_OFFSET(0x238CB20)
#define UICRAFTDURATIONLIST_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x238D150)
#define UICRAFTDURATIONLIST_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0x238D1E0)
#define UICRAFTDURATIONLIST_ISTIMEOUTNODESELECTING_OFFSET UNITYSDK_OFFSET(0x238CF60)
#define UICRAFTDURATIONLIST___N__0_OFFSET UNITYSDK_OFFSET(0x238D240)

	inline static constexpr unsigned int UICraftDurationList_TypeDefinitionIndex = 5145;

	class UICraftDurationList : public Il2CppObject
	{
	public:
		UINormalCraftSlotInfo* normalCraftSlotInfo; // 0xD8
		UIShiftingCraftSlotInfo* shiftinCraftSlotInfo; // 0xE0
		IntTabController* craftTypeTab; // 0xE8
		OpenConditionButtonController* openCondition; // 0xF0
		UINormalCraftRewardDetail* rewardDetailPopup; // 0xF8
		MXButton* craftProbabilityTableButton; // 0x100
		::System::Int32 targetTab; // 0x108
		::System::Int32 NORMAL_CRAFT; // 0x0
		::System::Int32 SHIFTING_CRAFT; // 0x0

		::System::Void SetDotAndBtn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONLIST_SETDOTANDBTN_OFFSET))(nullptr);
		}

		::System::Void ChooseStartupTab(::MX::Data::CraftType* arg)
		{
			((::System::Void(*)(::MX::Data::CraftType*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONLIST_CHOOSESTARTUPTAB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshUI(::MX::Data::CraftType* arg)
		{
			((::System::Void(*)(::MX::Data::CraftType*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONLIST_REFRESHUI_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONLIST_ONBACK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONLIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONLIST_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_LoadCraftInfo()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONLIST_CO_LOADCRAFTINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickCraftProbabilityTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONLIST_ONCLICKCRAFTPROBABILITYTABLE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONLIST_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONLIST_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONLIST_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* IsTimeOutNodeSelecting()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONLIST_ISTIMEOUTNODESELECTING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONLIST___N__0_OFFSET))(nullptr);
		}

	};

