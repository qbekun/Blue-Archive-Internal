#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class CountListLogicEffectTemplateModifierDAO; }

#define MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTEMPLATEMODIFIER_GET_COUNTTRUECONDITION_OFFSET UNITYSDK_OFFSET(0x122B580)
#define MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTEMPLATEMODIFIER_GETCHECKCOUNT_OFFSET UNITYSDK_OFFSET(0x122B590)
#define MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTEMPLATEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122B6C0)
#define MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTEMPLATEMODIFIER_GET_TEMPLATEIDHASHLIST_OFFSET UNITYSDK_OFFSET(0x122B980)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListLogicEffectTemplateModifier_TypeDefinitionIndex = 13792;

	class CountListLogicEffectTemplateModifier : public Il2CppObject
	{
	public:
		Il2CppObject* _TemplateIdHashList_k__BackingField; // 0x28
		::System::Boolean _CountTrueCondition_k__BackingField; // 0x30

		::System::Boolean get_CountTrueCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTEMPLATEMODIFIER_GET_COUNTTRUECONDITION_OFFSET))(nullptr);
		}

		::System::Int32 GetCheckCount(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Int32(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTEMPLATEMODIFIER_GETCHECKCOUNT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CountListLogicEffectTemplateModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CountListLogicEffectTemplateModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTEMPLATEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TemplateIdHashList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTLOGICEFFECTTEMPLATEMODIFIER_GET_TEMPLATEIDHASHLIST_OFFSET))(nullptr);
		}

	};
}

