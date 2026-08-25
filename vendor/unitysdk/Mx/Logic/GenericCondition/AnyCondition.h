#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::GenericCondition { class ReferenceVariable; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_GENERICCONDITION_ANYCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x108D370)
#define MX_LOGIC_GENERICCONDITION_ANYCONDITION_GET_EACHOFCHECKTARGETLIST_OFFSET UNITYSDK_OFFSET(0x108D380)
#define MX_LOGIC_GENERICCONDITION_ANYCONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x108D390)
#define MX_LOGIC_GENERICCONDITION_ANYCONDITION_SET_EACHOFCHECKTARGETLIST_OFFSET UNITYSDK_OFFSET(0x108D520)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int AnyCondition_TypeDefinitionIndex = 12942;

	class AnyCondition : public Il2CppObject
	{
	public:
		::MX::Logic::GenericCondition::ReferenceVariable* CheckTargetList; // 0x10
		::MX::Logic::GenericCondition::ReferenceVariable* Condition; // 0x18
		::MX::Logic::BattleEntities::BattleEntity* _EachOfCheckTargetList_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_ANYCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_EachOfCheckTargetList()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_ANYCONDITION_GET_EACHOFCHECKTARGETLIST_OFFSET))(nullptr);
		}

		::System::Boolean Check()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_ANYCONDITION_CHECK_OFFSET))(nullptr);
		}

		::System::Void set_EachOfCheckTargetList(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_ANYCONDITION_SET_EACHOFCHECKTARGETLIST_OFFSET))(arg, nullptr);
		}

	};
}

