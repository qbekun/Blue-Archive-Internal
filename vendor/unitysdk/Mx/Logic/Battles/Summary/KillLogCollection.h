#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLES_SUMMARY_KILLLOGCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13ABBE0)
#define MX_LOGIC_BATTLES_SUMMARY_KILLLOGCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x13A7C20)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int KillLogCollection_TypeDefinitionIndex = 14475;

	class KillLogCollection : public <>c__DisplayClass35_0
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_KILLLOGCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Int32 arg, ::MX::Logic::BattleEntities::EntityId* arg2)
		{
			((::System::Void(*)(::System::Int32, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_KILLLOGCOLLECTION_ADD_OFFSET))(arg, arg2, nullptr);
		}

	};
}

