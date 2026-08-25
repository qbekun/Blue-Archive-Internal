#pragma once
#include "unitysdk.h"

class MXButton;
class MXToggle;
class InventoryScrollViewController;
class UILabel;
class ButtonActivator;
class UIPotentialGrowthLevelUpDisplay;
class CharacterObject;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class PotentialStatBonusRateType; }
class UIPotentialBatchModeSlotDisplay;
namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define UIPOTENTIALGROWTH_HANDLECHARACTERPOTENTIALGROWTHRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2726BA0)
#define UIPOTENTIALGROWTH_TRYGETLEVELUPCOSTATLEVEL_OFFSET UNITYSDK_OFFSET(0x2726DA0)
#define UIPOTENTIALGROWTH_REFRESHREQUIREDITEMLIST_OFFSET UNITYSDK_OFFSET(0x2727400)
#define UIPOTENTIALGROWTH_ONUSESELECTITEMTOGGLECHAGED_OFFSET UNITYSDK_OFFSET(0x2727C20)
#define UIPOTENTIALGROWTH_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2729440)
#define UIPOTENTIALGROWTH_ONPOTENTIALSLOTSUBBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x2729910)
#define UIPOTENTIALGROWTH_GETSTATPERPOTENTIALLEVEL_OFFSET UNITYSDK_OFFSET(0x27299E0)
#define UIPOTENTIALGROWTH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2729BA0)
#define UIPOTENTIALGROWTH_GETPOTENTIALSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x27270A0)
#define UIPOTENTIALGROWTH_REFRESHLEVELUPCOST_OFFSET UNITYSDK_OFFSET(0x2727D60)
#define UIPOTENTIALGROWTH_RESETUI_OFFSET UNITYSDK_OFFSET(0x2729490)
#define UIPOTENTIALGROWTH_AWAKE_OFFSET UNITYSDK_OFFSET(0x2729E00)
#define UIPOTENTIALGROWTH_ONPOTENTIALSLOTPOSSIBLEMAXBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x272A4D0)
#define UIPOTENTIALGROWTH_SETDATA_OFFSET UNITYSDK_OFFSET(0x272BCA0)
#define UIPOTENTIALGROWTH_AVAILABLEPOTENTIALSTATLEVELUP_OFFSET UNITYSDK_OFFSET(0x2728BD0)
#define UIPOTENTIALGROWTH_ONCLOSEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x272BDB0)
#define UIPOTENTIALGROWTH_HANDLEREPOSITIONSCROLLVIEWBEFOREOPENINGTOOLTIPMESSAGE_OFFSET UNITYSDK_OFFSET(0x272BE40)
#define UIPOTENTIALGROWTH_CO_SHOWLEVELUPDISPLAY_OFFSET UNITYSDK_OFFSET(0x2726D10)
#define UIPOTENTIALGROWTH_ONPOTENTIALSLOTADDBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x272BF00)
#define UIPOTENTIALGROWTH_ONLEVELUPBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x272C090)
#define UIPOTENTIALGROWTH_.CTOR_OFFSET UNITYSDK_OFFSET(0x272C220)
#define UIPOTENTIALGROWTH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x272C390)

	inline static constexpr unsigned int UIPotentialGrowth_TypeDefinitionIndex = 7181;

	class UIPotentialGrowth : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		::Il2CppArray<::System::Object*>* potentialSlots; // 0xE0
		MXToggle* useSelectionItemToggle; // 0xE8
		InventoryScrollViewController* requiredItemListscrollViewController; // 0xF0
		UILabel* requiredItemListEmptyLabel; // 0xF8
		UILabel* requiredGoldLabel; // 0x100
		ButtonActivator* levelUpButton; // 0x108
		UILabel* notEnoughCostLabel; // 0x110
		UIPotentialGrowthLevelUpDisplay* levelUpDisplay; // 0x118
		CharacterObject* characterObject; // 0x120
		Il2CppObject* cachedPotentialStatExcelDict; // 0x128
		Il2CppObject* cachedRepPotentialStatExcelDict; // 0x130
		Il2CppObject* levelUpCostDict; // 0x138
		Il2CppObject* levelUpCostReplaceInfoList; // 0x140

		::System::Boolean HandleCharacterPotentialGrowthResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_HANDLECHARACTERPOTENTIALGROWTHRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetLevelUpCostAtLevel(::FlatData::PotentialStatBonusRateType* arg, ::System::Int32 arg2, Il2CppObject&* arg3)
		{
			return ((::System::Boolean(*)(::FlatData::PotentialStatBonusRateType*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_TRYGETLEVELUPCOSTATLEVEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RefreshRequiredItemList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_REFRESHREQUIREDITEMLIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnUseSelectItemToggleChaged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_ONUSESELECTITEMTOGGLECHAGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnPotentialSlotSubButtonClicked(UIPotentialBatchModeSlotDisplay* arg)
		{
			((::System::Void(*)(UIPotentialBatchModeSlotDisplay*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_ONPOTENTIALSLOTSUBBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetStatPerPotentialLevel(::FlatData::PotentialStatBonusRateType* arg, ::System::Int32 arg2)
		{
			return ((::System::Int64(*)(::FlatData::PotentialStatBonusRateType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_GETSTATPERPOTENTIALLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_ONDISABLE_OFFSET))(nullptr);
		}

		Il2CppObject* GetPotentialStatExcel(::FlatData::PotentialStatBonusRateType* arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::FlatData::PotentialStatBonusRateType*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_GETPOTENTIALSTATEXCEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RefreshLevelUpCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_REFRESHLEVELUPCOST_OFFSET))(nullptr);
		}

		::System::Void ResetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_RESETUI_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnPotentialSlotPossibleMaxButtonClicked(UIPotentialBatchModeSlotDisplay* arg)
		{
			((::System::Void(*)(UIPotentialBatchModeSlotDisplay*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_ONPOTENTIALSLOTPOSSIBLEMAXBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean AvailablePotentialStatLevelUp(::FlatData::PotentialStatBonusRateType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::PotentialStatBonusRateType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_AVAILABLEPOTENTIALSTATLEVELUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnCloseButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_ONCLOSEBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Boolean HandleRepositionScrollViewBeforeOpeningTooltipMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_HANDLEREPOSITIONSCROLLVIEWBEFOREOPENINGTOOLTIPMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowLevelUpDisplay(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_CO_SHOWLEVELUPDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void OnPotentialSlotAddButtonClicked(UIPotentialBatchModeSlotDisplay* arg)
		{
			((::System::Void(*)(UIPotentialBatchModeSlotDisplay*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_ONPOTENTIALSLOTADDBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnLevelUpButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_ONLEVELUPBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTH_ONENABLE_OFFSET))(nullptr);
		}

	};

