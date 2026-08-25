#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }

#define MX_GAMELOGIC_DBMODEL_SKILLLEVELBATCHGROWTHREQUESTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF3810)
#define MX_GAMELOGIC_DBMODEL_SKILLLEVELBATCHGROWTHREQUESTDB_GET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0xFF3820)
#define MX_GAMELOGIC_DBMODEL_SKILLLEVELBATCHGROWTHREQUESTDB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFF3830)
#define MX_GAMELOGIC_DBMODEL_SKILLLEVELBATCHGROWTHREQUESTDB_GET_REPLACEINFOS_OFFSET UNITYSDK_OFFSET(0xFF3840)
#define MX_GAMELOGIC_DBMODEL_SKILLLEVELBATCHGROWTHREQUESTDB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFF3850)
#define MX_GAMELOGIC_DBMODEL_SKILLLEVELBATCHGROWTHREQUESTDB_SET_REPLACEINFOS_OFFSET UNITYSDK_OFFSET(0xFF3860)
#define MX_GAMELOGIC_DBMODEL_SKILLLEVELBATCHGROWTHREQUESTDB_SET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0xFF3870)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int SkillLevelBatchGrowthRequestDB_TypeDefinitionIndex = 12557;

	class SkillLevelBatchGrowthRequestDB : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::SkillSlot* _SkillSlot_k__BackingField; // 0x10
		::System::Int32 _Level_k__BackingField; // 0x14
		Il2CppObject* _ReplaceInfos_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SKILLLEVELBATCHGROWTHREQUESTDB_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* get_SkillSlot()
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SKILLLEVELBATCHGROWTHREQUESTDB_GET_SKILLSLOT_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SKILLLEVELBATCHGROWTHREQUESTDB_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ReplaceInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SKILLLEVELBATCHGROWTHREQUESTDB_GET_REPLACEINFOS_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SKILLLEVELBATCHGROWTHREQUESTDB_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_ReplaceInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SKILLLEVELBATCHGROWTHREQUESTDB_SET_REPLACEINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void set_SkillSlot(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SKILLLEVELBATCHGROWTHREQUESTDB_SET_SKILLSLOT_OFFSET))(arg, nullptr);
		}

	};
}

