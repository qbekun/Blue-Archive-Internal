#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::GenericCondition { class ReferenceVariable; }
namespace MX::Logic::GenericCondition { class BattleEntityComparer; }

#define MX_LOGIC_GENERICCONDITION_BATTLEENTITYSORT_GET_OFFSET UNITYSDK_OFFSET(0x108C0E0)
#define MX_LOGIC_GENERICCONDITION_BATTLEENTITYSORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x108C1B0)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int BattleEntitySort_TypeDefinitionIndex = 12930;

	class BattleEntitySort : public Il2CppObject
	{
	public:
		::MX::Logic::GenericCondition::ReferenceVariable* SortTargetList; // 0x10
		Il2CppObject* SortRuleList; // 0x18
		::MX::Logic::GenericCondition::BattleEntityComparer* comparer; // 0x20

		Il2CppObject* Get()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_BATTLEENTITYSORT_GET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_BATTLEENTITYSORT_.CTOR_OFFSET))(nullptr);
		}

	};
}

