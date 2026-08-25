#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }

#define MX_LOGIC_BATTLES_PLAYERSKILLCARDCOSTADDEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1273690)
#define MX_LOGIC_BATTLES_PLAYERSKILLCARDCOSTADDEDEVENTARGS_GET_GROUPTAG_OFFSET UNITYSDK_OFFSET(0x1273700)
#define MX_LOGIC_BATTLES_PLAYERSKILLCARDCOSTADDEDEVENTARGS_GET_COST_OFFSET UNITYSDK_OFFSET(0x1273710)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int PlayerSkillCardCostAddedEventArgs_TypeDefinitionIndex = 14049;

	class PlayerSkillCardCostAddedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroupTag* _GroupTag_k__BackingField; // 0x10
		::System::Single _Cost_k__BackingField; // 0x14

		::System::Void .ctor(::MX::Logic::Battles::GroupTag* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERSKILLCARDCOSTADDEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Battles::GroupTag* get_GroupTag()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERSKILLCARDCOSTADDEDEVENTARGS_GET_GROUPTAG_OFFSET))(nullptr);
		}

		::System::Single get_Cost()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERSKILLCARDCOSTADDEDEVENTARGS_GET_COST_OFFSET))(nullptr);
		}

	};
}

