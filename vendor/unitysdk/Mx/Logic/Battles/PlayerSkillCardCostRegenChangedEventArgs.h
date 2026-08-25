#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }

#define MX_LOGIC_BATTLES_PLAYERSKILLCARDCOSTREGENCHANGEDEVENTARGS_GET_COSTREGEN_OFFSET UNITYSDK_OFFSET(0x1273720)
#define MX_LOGIC_BATTLES_PLAYERSKILLCARDCOSTREGENCHANGEDEVENTARGS_GET_GROUPTAG_OFFSET UNITYSDK_OFFSET(0x1273730)
#define MX_LOGIC_BATTLES_PLAYERSKILLCARDCOSTREGENCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1273740)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int PlayerSkillCardCostRegenChangedEventArgs_TypeDefinitionIndex = 14050;

	class PlayerSkillCardCostRegenChangedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroupTag* _GroupTag_k__BackingField; // 0x10
		::System::Single _CostRegen_k__BackingField; // 0x14

		::System::Single get_CostRegen()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERSKILLCARDCOSTREGENCHANGEDEVENTARGS_GET_COSTREGEN_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroupTag* get_GroupTag()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERSKILLCARDCOSTREGENCHANGEDEVENTARGS_GET_GROUPTAG_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::GroupTag* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERSKILLCARDCOSTREGENCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

