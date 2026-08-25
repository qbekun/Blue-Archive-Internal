#pragma once
#include "unitysdk.h"

namespace FlatData { class ParcelType; }

#define PARCELTOOLTIPDATAREPOSITORY_GETBLOODSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x2740880)
#define PARCELTOOLTIPDATAREPOSITORY_INITBLOODSTAGETOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2740B70)
#define PARCELTOOLTIPDATAREPOSITORY_INITWEEKDUNGEONTOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2740C20)
#define PARCELTOOLTIPDATAREPOSITORY_INIT_OFFSET UNITYSDK_OFFSET(0x2740CD0)
#define PARCELTOOLTIPDATAREPOSITORY_GETCAMPAIGNSTAGEIDSDEFAULT_OFFSET UNITYSDK_OFFSET(0x2741730)
#define PARCELTOOLTIPDATAREPOSITORY_GETCAMPAIGNSTAGEIDSTHREESTAR_OFFSET UNITYSDK_OFFSET(0x2741CA0)
#define PARCELTOOLTIPDATAREPOSITORY_GETEVENTSTAGEIDSDEFAULT_OFFSET UNITYSDK_OFFSET(0x27421D0)
#define PARCELTOOLTIPDATAREPOSITORY_INITEQUIPMENTTOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2741460)
#define PARCELTOOLTIPDATAREPOSITORY_GETEVENTSTAGEIDSTHREESTAR_OFFSET UNITYSDK_OFFSET(0x27427B0)
#define PARCELTOOLTIPDATAREPOSITORY_GETSHOPCATEGORIES_OFFSET UNITYSDK_OFFSET(0x2742DA0)
#define PARCELTOOLTIPDATAREPOSITORY_INITSHOPITEMTOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2740FA0)
#define PARCELTOOLTIPDATAREPOSITORY_INITEVENTSTAGETOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2740EF0)
#define PARCELTOOLTIPDATAREPOSITORY_GETWEEKDUNGEONIDS_OFFSET UNITYSDK_OFFSET(0x2743090)
#define PARCELTOOLTIPDATAREPOSITORY_GETEQUIPMENTCATEGORIES_OFFSET UNITYSDK_OFFSET(0x2743380)
#define PARCELTOOLTIPDATAREPOSITORY_GETCAMPAIGNSTAGEIDSFIRSTCLEAR_OFFSET UNITYSDK_OFFSET(0x2743460)
#define PARCELTOOLTIPDATAREPOSITORY_INITCAMPAIGNSTAGETOOLTIPINFO_OFFSET UNITYSDK_OFFSET(0x2740E40)
#define PARCELTOOLTIPDATAREPOSITORY_GETEVENTSTAGEIDSFIRSTCLEAR_OFFSET UNITYSDK_OFFSET(0x2743990)
#define PARCELTOOLTIPDATAREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2743F90)

	inline static constexpr unsigned int ParcelTooltipDataRepository_TypeDefinitionIndex = 7231;

	class ParcelTooltipDataRepository : public Il2CppObject
	{
	public:
		Il2CppObject* campaignStageDefaultRewards; // 0x10
		Il2CppObject* campaignStageThreeStarRewards; // 0x18
		Il2CppObject* campaignStageFirstClearRewards; // 0x20
		Il2CppObject* eventStageDefaultRewards; // 0x28
		Il2CppObject* eventStageThreeStarRewards; // 0x30
		Il2CppObject* eventStageFirstClearRewards; // 0x38
		Il2CppObject* bloodStageRewards; // 0x40
		Il2CppObject* weekDungeonRewards; // 0x48
		Il2CppObject* shopItems; // 0x50
		Il2CppObject* equips; // 0x58

		Il2CppObject* GetBloodStageIds(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_GETBLOODSTAGEIDS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitBloodStageTooltipInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_INITBLOODSTAGETOOLTIPINFO_OFFSET))(nullptr);
		}

		::System::Void InitWeekDungeonTooltipInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_INITWEEKDUNGEONTOOLTIPINFO_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_INIT_OFFSET))(nullptr);
		}

		Il2CppObject* GetCampaignStageIdsDefault(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_GETCAMPAIGNSTAGEIDSDEFAULT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetCampaignStageIdsThreeStar(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_GETCAMPAIGNSTAGEIDSTHREESTAR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetEventStageIdsDefault(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_GETEVENTSTAGEIDSDEFAULT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitEquipmentTooltipInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_INITEQUIPMENTTOOLTIPINFO_OFFSET))(nullptr);
		}

		Il2CppObject* GetEventStageIdsThreeStar(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_GETEVENTSTAGEIDSTHREESTAR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetShopCategories(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_GETSHOPCATEGORIES_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitShopItemTooltipInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_INITSHOPITEMTOOLTIPINFO_OFFSET))(nullptr);
		}

		::System::Void InitEventStageTooltipInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_INITEVENTSTAGETOOLTIPINFO_OFFSET))(nullptr);
		}

		Il2CppObject* GetWeekDungeonIds(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_GETWEEKDUNGEONIDS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetEquipmentCategories(::FlatData::ParcelType* arg, ::System::Int64 arg2)
		{
			return ((Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_GETEQUIPMENTCATEGORIES_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetCampaignStageIdsFirstClear(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_GETCAMPAIGNSTAGEIDSFIRSTCLEAR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitCampaignStageTooltipInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_INITCAMPAIGNSTAGETOOLTIPINFO_OFFSET))(nullptr);
		}

		Il2CppObject* GetEventStageIdsFirstClear(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_GETEVENTSTAGEIDSFIRSTCLEAR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARCELTOOLTIPDATAREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};

