#pragma once
#include "../../unitysdk.h"

namespace FlatData { class StatLevelUpType; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace FlatData { class EquipmentOptionType; }
namespace MX::Data::Excel { class CharacterGearExcel; }

#define MX_DATA_GEAROPTIONDATAINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1849820)
#define MX_DATA_GEAROPTIONDATAINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x1849830)
#define MX_DATA_GEAROPTIONDATAINFO_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1849840)
#define MX_DATA_GEAROPTIONDATAINFO_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1849850)
#define MX_DATA_GEAROPTIONDATAINFO_GET_STATLEVELUPTYPE_OFFSET UNITYSDK_OFFSET(0x1849860)
#define MX_DATA_GEAROPTIONDATAINFO_SET_STATLEVELUPTYPE_OFFSET UNITYSDK_OFFSET(0x1849870)
#define MX_DATA_GEAROPTIONDATAINFO_GET_TIER_OFFSET UNITYSDK_OFFSET(0x1849880)
#define MX_DATA_GEAROPTIONDATAINFO_SET_TIER_OFFSET UNITYSDK_OFFSET(0x1849890)
#define MX_DATA_GEAROPTIONDATAINFO_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x18498A0)
#define MX_DATA_GEAROPTIONDATAINFO_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x18498B0)
#define MX_DATA_GEAROPTIONDATAINFO_GET_LEARNSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x18498C0)
#define MX_DATA_GEAROPTIONDATAINFO_SET_LEARNSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x18498D0)
#define MX_DATA_GEAROPTIONDATAINFO_GET_STATTYPE_OFFSET UNITYSDK_OFFSET(0x18498E0)
#define MX_DATA_GEAROPTIONDATAINFO_SET_STATTYPE_OFFSET UNITYSDK_OFFSET(0x18498F0)
#define MX_DATA_GEAROPTIONDATAINFO_GET_MINSTATVALUE_OFFSET UNITYSDK_OFFSET(0x1849900)
#define MX_DATA_GEAROPTIONDATAINFO_SET_MINSTATVALUE_OFFSET UNITYSDK_OFFSET(0x1849910)
#define MX_DATA_GEAROPTIONDATAINFO_GET_MAXSTATVALUE_OFFSET UNITYSDK_OFFSET(0x1849920)
#define MX_DATA_GEAROPTIONDATAINFO_SET_MAXSTATVALUE_OFFSET UNITYSDK_OFFSET(0x1849930)
#define MX_DATA_GEAROPTIONDATAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1849940)
#define MX_DATA_GEAROPTIONDATAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1849950)
#define MX_DATA_GEAROPTIONDATAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1849A10)

namespace MX::Data
{
	inline static constexpr unsigned int GearOptionDataInfo_TypeDefinitionIndex = 15832;

	class GearOptionDataInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _CharacterId_k__BackingField; // 0x18
		::FlatData::StatLevelUpType* _StatLevelUpType_k__BackingField; // 0x20
		::System::Int64 _Tier_k__BackingField; // 0x28
		::System::Int64 _MaxLevel_k__BackingField; // 0x30
		::MX::Logic::BattleEntities::SkillSlot* _LearnSkillSlot_k__BackingField; // 0x38
		::FlatData::EquipmentOptionType* _StatType_k__BackingField; // 0x3C
		::System::Int64 _MinStatValue_k__BackingField; // 0x40
		::System::Int64 _MaxStatValue_k__BackingField; // 0x48

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::FlatData::StatLevelUpType* get_StatLevelUpType()
		{
			return (return (::FlatData::StatLevelUpType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_GET_STATLEVELUPTYPE_OFFSET))(nullptr);
		}

		::System::Void set_StatLevelUpType(::FlatData::StatLevelUpType* arg)
		{
			((::System::Void(*)(::FlatData::StatLevelUpType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_SET_STATLEVELUPTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Tier()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_GET_TIER_OFFSET))(nullptr);
		}

		::System::Void set_Tier(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_SET_TIER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_GET_MAXLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_MaxLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_SET_MAXLEVEL_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* get_LearnSkillSlot()
		{
			return (return (::MX::Logic::BattleEntities::SkillSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_GET_LEARNSKILLSLOT_OFFSET))(nullptr);
		}

		::System::Void set_LearnSkillSlot(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_SET_LEARNSKILLSLOT_OFFSET))(arg, nullptr);
		}

		::FlatData::EquipmentOptionType* get_StatType()
		{
			return (return (::FlatData::EquipmentOptionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_GET_STATTYPE_OFFSET))(nullptr);
		}

		::System::Void set_StatType(::FlatData::EquipmentOptionType* arg)
		{
			((::System::Void(*)(::FlatData::EquipmentOptionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_SET_STATTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MinStatValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_GET_MINSTATVALUE_OFFSET))(nullptr);
		}

		::System::Void set_MinStatValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_SET_MINSTATVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxStatValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_GET_MAXSTATVALUE_OFFSET))(nullptr);
		}

		::System::Void set_MaxStatValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_SET_MAXSTATVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CharacterGearExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterGearExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CharacterGearExcel* arg, ::FlatData::EquipmentOptionType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterGearExcel*, ::FlatData::EquipmentOptionType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEAROPTIONDATAINFO_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

