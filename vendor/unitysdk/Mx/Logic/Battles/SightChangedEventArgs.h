#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }

#define MX_LOGIC_BATTLES_SIGHTCHANGEDEVENTARGS_SET_GROUPTAG_OFFSET UNITYSDK_OFFSET(0x126FA20)
#define MX_LOGIC_BATTLES_SIGHTCHANGEDEVENTARGS_GET_GROUPTAG_OFFSET UNITYSDK_OFFSET(0x126FA30)
#define MX_LOGIC_BATTLES_SIGHTCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126FA40)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int SightChangedEventArgs_TypeDefinitionIndex = 14027;

	class SightChangedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroupTag* _groupTag_k__BackingField; // 0x10

		::System::Void set_groupTag(::MX::Logic::Battles::GroupTag* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SIGHTCHANGEDEVENTARGS_SET_GROUPTAG_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroupTag* get_groupTag()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SIGHTCHANGEDEVENTARGS_GET_GROUPTAG_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::GroupTag* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SIGHTCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

