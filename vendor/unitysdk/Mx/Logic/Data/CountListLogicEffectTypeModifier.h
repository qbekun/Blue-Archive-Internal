#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class CountListLogicEffectTypeModifierDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTYPEMODIFIER_GET_LOGICEFFECTTYPELIST_OFFSET UNITYSDK_OFFSET(0x122BC80)
#define MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTYPEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122BC90)
#define MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTYPEMODIFIER_GETCHECKCOUNT_OFFSET UNITYSDK_OFFSET(0x122BE90)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListLogicEffectTypeModifier_TypeDefinitionIndex = 13794;

	class CountListLogicEffectTypeModifier : public Il2CppObject
	{
	public:
		Il2CppObject* _LogicEffectTypeList_k__BackingField; // 0x28

		Il2CppObject* get_LogicEffectTypeList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTYPEMODIFIER_GET_LOGICEFFECTTYPELIST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CountListLogicEffectTypeModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CountListLogicEffectTypeModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTYPEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCheckCount(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Int32(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTYPEMODIFIER_GETCHECKCOUNT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

