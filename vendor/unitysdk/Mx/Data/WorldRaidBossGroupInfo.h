#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::Data::Excel { class WorldRaidBossGroupExcel; }
namespace MX::Data::Excel { class InteractiveWorldRaidBossGroupExcel; }

#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1864C00)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1864C10)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x1864C20)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1864C30)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1864C40)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_LINKGROUPID_OFFSET UNITYSDK_OFFSET(0x1864C50)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_LINKGROUPID_OFFSET UNITYSDK_OFFSET(0x1864C60)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSNAME_OFFSET UNITYSDK_OFFSET(0x1864C70)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSNAME_OFFSET UNITYSDK_OFFSET(0x1864C80)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSHPKR_OFFSET UNITYSDK_OFFSET(0x1864C90)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSHPKR_OFFSET UNITYSDK_OFFSET(0x1864CA0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSHPTW_OFFSET UNITYSDK_OFFSET(0x1864CB0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSHPTW_OFFSET UNITYSDK_OFFSET(0x1864CC0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSHPASIA_OFFSET UNITYSDK_OFFSET(0x1864CD0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSHPASIA_OFFSET UNITYSDK_OFFSET(0x1864CE0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSHPNA_OFFSET UNITYSDK_OFFSET(0x1864CF0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSHPNA_OFFSET UNITYSDK_OFFSET(0x1864D00)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSHPGLOBAL_OFFSET UNITYSDK_OFFSET(0x1864D10)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSHPGLOBAL_OFFSET UNITYSDK_OFFSET(0x1864D20)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_ECHELONCONSTRAINTGROUPID_OFFSET UNITYSDK_OFFSET(0x1864D30)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_ECHELONCONSTRAINTGROUPID_OFFSET UNITYSDK_OFFSET(0x1864D40)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_CLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x1864D50)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_VISIBLECLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x1864DB0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_VISIBLECLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x1864DC0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_INVISIBLECLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x1864DD0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_INVISIBLECLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x1864DE0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_ANOTHERBOSSKILLED_OFFSET UNITYSDK_OFFSET(0x1864DF0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_ANOTHERBOSSKILLED_OFFSET UNITYSDK_OFFSET(0x1864E00)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSPOPUPNAMETEXTURE_OFFSET UNITYSDK_OFFSET(0x1864E10)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSPOPUPNAMETEXTURE_OFFSET UNITYSDK_OFFSET(0x1864E20)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSPOPUPBG_OFFSET UNITYSDK_OFFSET(0x1864E30)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSPOPUPBG_OFFSET UNITYSDK_OFFSET(0x1864E40)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSPOPUPPORTRAIT_OFFSET UNITYSDK_OFFSET(0x1864E60)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSPOPUPPORTRAIT_OFFSET UNITYSDK_OFFSET(0x1864E70)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSPARCELPORTRAIT_OFFSET UNITYSDK_OFFSET(0x1864E90)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSPARCELPORTRAIT_OFFSET UNITYSDK_OFFSET(0x1864EA0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSLISTPORTRAIT_OFFSET UNITYSDK_OFFSET(0x1864EC0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSLISTPORTRAIT_OFFSET UNITYSDK_OFFSET(0x1864ED0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_ISHIDEBEFORESPAWN_OFFSET UNITYSDK_OFFSET(0x1864EF0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_ISHIDEBEFORESPAWN_OFFSET UNITYSDK_OFFSET(0x1864F00)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_ISHIDEANOTHERBOSSPARCELWHENSPAWN_OFFSET UNITYSDK_OFFSET(0x1864F10)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_ISHIDEANOTHERBOSSPARCELWHENSPAWN_OFFSET UNITYSDK_OFFSET(0x1864F20)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDRAIDBOSSGROUPOPENCONDITIONID_OFFSET UNITYSDK_OFFSET(0x1864F30)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDRAIDBOSSGROUPOPENCONDITIONID_OFFSET UNITYSDK_OFFSET(0x1864F40)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_RAIDSCENARIOBATTLELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1864F50)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_RAIDSCENARIOBATTLELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1864F60)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_ISSEASONFINALBOSS_OFFSET UNITYSDK_OFFSET(0x1864F80)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_ISSEASONFINALBOSS_OFFSET UNITYSDK_OFFSET(0x1864F90)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_EXCLUSIVEOPERATORBOSSSPAWN_OFFSET UNITYSDK_OFFSET(0x1864FA0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_EXCLUSIVEOPERATORBOSSSPAWN_OFFSET UNITYSDK_OFFSET(0x1864FB0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_EXCLUSIVEOPERATORSCENARIOBATTLE_OFFSET UNITYSDK_OFFSET(0x1864FD0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_EXCLUSIVEOPERATORSCENARIOBATTLE_OFFSET UNITYSDK_OFFSET(0x1864FE0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_EXCLUSIVEOPERATORBOSSKILL_OFFSET UNITYSDK_OFFSET(0x1865000)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_EXCLUSIVEOPERATORBOSSKILL_OFFSET UNITYSDK_OFFSET(0x1865010)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_EXCLUSIVEOPERATORBOSSDAMAGED_OFFSET UNITYSDK_OFFSET(0x1865030)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_EXCLUSIVEOPERATORBOSSDAMAGED_OFFSET UNITYSDK_OFFSET(0x1865040)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_BLACKLISTCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1865060)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WHITELISTCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1865100)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_AVAILABLECHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x18651A0)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1865240)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1865570)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GETWORLDBOSSNAME_OFFSET UNITYSDK_OFFSET(0x1865900)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_GETWORLDBOSSHP_OFFSET UNITYSDK_OFFSET(0x1865980)
#define MX_DATA_WORLDRAIDBOSSGROUPINFO_ISAVAILABLECHARACTEREXIST_OFFSET UNITYSDK_OFFSET(0x1865A70)

namespace MX::Data
{
	inline static constexpr unsigned int WorldRaidBossGroupInfo_TypeDefinitionIndex = 15923;

	class WorldRaidBossGroupInfo : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x10
		::System::Int64 _Id_k__BackingField; // 0x18
		::System::Int64 _GroupId_k__BackingField; // 0x20
		::System::Int64 _LinkGroupId_k__BackingField; // 0x28
		::System::String* _WorldBossName_k__BackingField; // 0x30
		::System::Int64 _WorldBossHPKr_k__BackingField; // 0x38
		::System::Int64 _WorldBossHPTw_k__BackingField; // 0x40
		::System::Int64 _WorldBossHPAsia_k__BackingField; // 0x48
		::System::Int64 _WorldBossHPNa_k__BackingField; // 0x50
		::System::Int64 _WorldBossHPGlobal_k__BackingField; // 0x58
		::System::Int64 _EchelonConstraintGroupId_k__BackingField; // 0x60
		Il2CppObject* _VisibleClearRewards_k__BackingField; // 0x68
		Il2CppObject* _InVisibleClearRewards_k__BackingField; // 0x70
		Il2CppObject* _AnotherBossKilled_k__BackingField; // 0x78
		::System::String* _WorldBossPopupNameTexture_k__BackingField; // 0x80
		::System::String* _WorldBossPopupBG_k__BackingField; // 0x88
		::System::String* _WorldBossPopupPortrait_k__BackingField; // 0x90
		::System::String* _WorldBossParcelPortrait_k__BackingField; // 0x98
		::System::String* _WorldBossListPortrait_k__BackingField; // 0xA0
		::System::Boolean _IsHideBeforeSpawn_k__BackingField; // 0xA8
		::System::Boolean _IsHideAnotherBossParcelWhenSpawn_k__BackingField; // 0xA9
		::System::Int64 _WorldRaidBossGroupOpenConditionId_k__BackingField; // 0xB0
		::System::String* _RaidScenarioBattleLocalizeKey_k__BackingField; // 0xB8
		::System::Boolean _IsSeasonFinalBoss_k__BackingField; // 0xC0
		::System::String* _ExclusiveOperatorBossSpawn_k__BackingField; // 0xC8
		::System::String* _ExclusiveOperatorScenarioBattle_k__BackingField; // 0xD0
		::System::String* _ExclusiveOperatorBossKill_k__BackingField; // 0xD8
		::System::String* _ExclusiveOperatorBossDamaged_k__BackingField; // 0xE0

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LinkGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_LINKGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_LinkGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_LINKGROUPID_OFFSET))(arg, nullptr);
		}

		::System::String* get_WorldBossName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSNAME_OFFSET))(nullptr);
		}

		::System::Void set_WorldBossName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSNAME_OFFSET))(str, nullptr);
		}

		::System::Int64 get_WorldBossHPKr()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSHPKR_OFFSET))(nullptr);
		}

		::System::Void set_WorldBossHPKr(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSHPKR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_WorldBossHPTw()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSHPTW_OFFSET))(nullptr);
		}

		::System::Void set_WorldBossHPTw(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSHPTW_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_WorldBossHPAsia()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSHPASIA_OFFSET))(nullptr);
		}

		::System::Void set_WorldBossHPAsia(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSHPASIA_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_WorldBossHPNa()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSHPNA_OFFSET))(nullptr);
		}

		::System::Void set_WorldBossHPNa(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSHPNA_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_WorldBossHPGlobal()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSHPGLOBAL_OFFSET))(nullptr);
		}

		::System::Void set_WorldBossHPGlobal(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSHPGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EchelonConstraintGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_ECHELONCONSTRAINTGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_EchelonConstraintGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_ECHELONCONSTRAINTGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ClearRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_CLEARREWARDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_VisibleClearRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_VISIBLECLEARREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_VisibleClearRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_VISIBLECLEARREWARDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_InVisibleClearRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_INVISIBLECLEARREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_InVisibleClearRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_INVISIBLECLEARREWARDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AnotherBossKilled()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_ANOTHERBOSSKILLED_OFFSET))(nullptr);
		}

		::System::Void set_AnotherBossKilled(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_ANOTHERBOSSKILLED_OFFSET))(arg, nullptr);
		}

		::System::String* get_WorldBossPopupNameTexture()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSPOPUPNAMETEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_WorldBossPopupNameTexture(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSPOPUPNAMETEXTURE_OFFSET))(str, nullptr);
		}

		::System::String* get_WorldBossPopupBG()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSPOPUPBG_OFFSET))(nullptr);
		}

		::System::Void set_WorldBossPopupBG(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSPOPUPBG_OFFSET))(str, nullptr);
		}

		::System::String* get_WorldBossPopupPortrait()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSPOPUPPORTRAIT_OFFSET))(nullptr);
		}

		::System::Void set_WorldBossPopupPortrait(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSPOPUPPORTRAIT_OFFSET))(str, nullptr);
		}

		::System::String* get_WorldBossParcelPortrait()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSPARCELPORTRAIT_OFFSET))(nullptr);
		}

		::System::Void set_WorldBossParcelPortrait(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSPARCELPORTRAIT_OFFSET))(str, nullptr);
		}

		::System::String* get_WorldBossListPortrait()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDBOSSLISTPORTRAIT_OFFSET))(nullptr);
		}

		::System::Void set_WorldBossListPortrait(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDBOSSLISTPORTRAIT_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsHideBeforeSpawn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_ISHIDEBEFORESPAWN_OFFSET))(nullptr);
		}

		::System::Void set_IsHideBeforeSpawn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_ISHIDEBEFORESPAWN_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsHideAnotherBossParcelWhenSpawn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_ISHIDEANOTHERBOSSPARCELWHENSPAWN_OFFSET))(nullptr);
		}

		::System::Void set_IsHideAnotherBossParcelWhenSpawn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_ISHIDEANOTHERBOSSPARCELWHENSPAWN_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_WorldRaidBossGroupOpenConditionId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WORLDRAIDBOSSGROUPOPENCONDITIONID_OFFSET))(nullptr);
		}

		::System::Void set_WorldRaidBossGroupOpenConditionId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_WORLDRAIDBOSSGROUPOPENCONDITIONID_OFFSET))(arg, nullptr);
		}

		::System::String* get_RaidScenarioBattleLocalizeKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_RAIDSCENARIOBATTLELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Void set_RaidScenarioBattleLocalizeKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_RAIDSCENARIOBATTLELOCALIZEKEY_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsSeasonFinalBoss()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_ISSEASONFINALBOSS_OFFSET))(nullptr);
		}

		::System::Void set_IsSeasonFinalBoss(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_ISSEASONFINALBOSS_OFFSET))(arg, nullptr);
		}

		::System::String* get_ExclusiveOperatorBossSpawn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_EXCLUSIVEOPERATORBOSSSPAWN_OFFSET))(nullptr);
		}

		::System::Void set_ExclusiveOperatorBossSpawn(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_EXCLUSIVEOPERATORBOSSSPAWN_OFFSET))(str, nullptr);
		}

		::System::String* get_ExclusiveOperatorScenarioBattle()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_EXCLUSIVEOPERATORSCENARIOBATTLE_OFFSET))(nullptr);
		}

		::System::Void set_ExclusiveOperatorScenarioBattle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_EXCLUSIVEOPERATORSCENARIOBATTLE_OFFSET))(str, nullptr);
		}

		::System::String* get_ExclusiveOperatorBossKill()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_EXCLUSIVEOPERATORBOSSKILL_OFFSET))(nullptr);
		}

		::System::Void set_ExclusiveOperatorBossKill(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_EXCLUSIVEOPERATORBOSSKILL_OFFSET))(str, nullptr);
		}

		::System::String* get_ExclusiveOperatorBossDamaged()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_EXCLUSIVEOPERATORBOSSDAMAGED_OFFSET))(nullptr);
		}

		::System::Void set_ExclusiveOperatorBossDamaged(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_SET_EXCLUSIVEOPERATORBOSSDAMAGED_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_BlackListCharacterIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_BLACKLISTCHARACTERIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_WhiteListCharacterIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_WHITELISTCHARACTERIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_AvailableCharacterIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GET_AVAILABLECHARACTERIDS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::WorldRaidBossGroupExcel* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WorldRaidBossGroupExcel*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::InteractiveWorldRaidBossGroupExcel* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::InteractiveWorldRaidBossGroupExcel*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetWorldBossName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GETWORLDBOSSNAME_OFFSET))(nullptr);
		}

		::System::Int64 GetWorldBossHP(::System::String* str)
		{
			return (return (::System::Int64(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_GETWORLDBOSSHP_OFFSET))(str, nullptr);
		}

		::System::Boolean IsAvailableCharacterExist(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDBOSSGROUPINFO_ISAVAILABLECHARACTEREXIST_OFFSET))(arg, nullptr);
		}

	};
}

