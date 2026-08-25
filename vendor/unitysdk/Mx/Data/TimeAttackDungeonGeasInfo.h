#pragma once
#include "../../unitysdk.h"

namespace FlatData { class TimeAttackDungeonType; }
namespace MX::Data::Excel { class TimeAttackDungeonGeasExcel; }

#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_TIMEWEIGHTCONST_OFFSET UNITYSDK_OFFSET(0x185FEF0)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x185FF00)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x185FF10)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x185FF20)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_TIMEWEIGHTCONST_OFFSET UNITYSDK_OFFSET(0x185FF30)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x185FF40)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_UIINFOS_OFFSET UNITYSDK_OFFSET(0x185FF50)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_ALLYSKILLEFFECTINFOS_OFFSET UNITYSDK_OFFSET(0x185FF60)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_CLEARDEFAULTPOINT_OFFSET UNITYSDK_OFFSET(0x185FF70)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_CLEARTIMEWEIGHTPOINT_OFFSET UNITYSDK_OFFSET(0x185FF80)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_ENEMYSKILLEFFECTINFOS_OFFSET UNITYSDK_OFFSET(0x185FF90)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_CLEARDEFAULTPOINT_OFFSET UNITYSDK_OFFSET(0x185FFA0)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_ALLYSKILLEFFECTINFOS_OFFSET UNITYSDK_OFFSET(0x185FFB0)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_UIINFOS_OFFSET UNITYSDK_OFFSET(0x185FFC0)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x185FFD0)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1860590)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_LOCALIZEETCKEY_OFFSET UNITYSDK_OFFSET(0x18605A0)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_DUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x18605B0)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_ENEMYSKILLEFFECTINFOS_OFFSET UNITYSDK_OFFSET(0x18605C0)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_DUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x18605D0)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x18605E0)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_RECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x18605F0)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1860600)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_LOCALIZEETCKEY_OFFSET UNITYSDK_OFFSET(0x1860610)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_RECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x1860620)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_CLEARTIMEWEIGHTPOINT_OFFSET UNITYSDK_OFFSET(0x1860630)
#define MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x1860640)

namespace MX::Data
{
	inline static constexpr unsigned int TimeAttackDungeonGeasInfo_TypeDefinitionIndex = 15900;

	class TimeAttackDungeonGeasInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::FlatData::TimeAttackDungeonType* _DungeonType_k__BackingField; // 0x18
		::System::Int32 _Difficulty_k__BackingField; // 0x1C
		::System::UInt32 _LocalizeEtcKey_k__BackingField; // 0x20
		::System::Int64 _BattleDuration_k__BackingField; // 0x28
		::System::Int64 _ClearDefaultPoint_k__BackingField; // 0x30
		::System::Int64 _ClearTimeWeightPoint_k__BackingField; // 0x38
		::System::Int64 _TimeWeightConst_k__BackingField; // 0x40
		::System::Int64 _GroundId_k__BackingField; // 0x48
		::System::Int32 _RecommandLevel_k__BackingField; // 0x50
		Il2CppObject* _AllySkillEffectInfos_k__BackingField; // 0x58
		Il2CppObject* _EnemySkillEffectInfos_k__BackingField; // 0x60
		Il2CppObject* _UIInfos_k__BackingField; // 0x68

		::System::Int64 get_TimeWeightConst()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_TIMEWEIGHTCONST_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Void set_BattleDuration(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_BATTLEDURATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_GroundId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_GROUNDID_OFFSET))(arg, nullptr);
		}

		::System::Void set_TimeWeightConst(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_TIMEWEIGHTCONST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Difficulty()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_UIInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_UIINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void set_AllySkillEffectInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_ALLYSKILLEFFECTINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClearDefaultPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_CLEARDEFAULTPOINT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ClearTimeWeightPoint()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_CLEARTIMEWEIGHTPOINT_OFFSET))(nullptr);
		}

		Il2CppObject* get_EnemySkillEffectInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_ENEMYSKILLEFFECTINFOS_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearDefaultPoint()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_CLEARDEFAULTPOINT_OFFSET))(nullptr);
		}

		Il2CppObject* get_AllySkillEffectInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_ALLYSKILLEFFECTINFOS_OFFSET))(nullptr);
		}

		Il2CppObject* get_UIInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_UIINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::TimeAttackDungeonGeasExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::TimeAttackDungeonGeasExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeEtcKey(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_LOCALIZEETCKEY_OFFSET))(arg, nullptr);
		}

		::System::Void set_DungeonType(::FlatData::TimeAttackDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::TimeAttackDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_DUNGEONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EnemySkillEffectInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_ENEMYSKILLEFFECTINFOS_OFFSET))(arg, nullptr);
		}

		::FlatData::TimeAttackDungeonType* get_DungeonType()
		{
			return (return (::FlatData::TimeAttackDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_DUNGEONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int32 get_RecommandLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_RECOMMANDLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_LocalizeEtcKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_GET_LOCALIZEETCKEY_OFFSET))(nullptr);
		}

		::System::Void set_RecommandLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_RECOMMANDLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClearTimeWeightPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_CLEARTIMEWEIGHTPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASINFO_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

