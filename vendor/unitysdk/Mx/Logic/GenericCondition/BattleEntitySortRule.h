#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_GENERICCONDITION_BATTLEENTITYSORTRULE_COMPARE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_GENERICCONDITION_BATTLEENTITYSORTRULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x108BD00)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int BattleEntitySortRule_TypeDefinitionIndex = 12927;

	class BattleEntitySortRule : public Il2CppObject
	{
	public:
		::System::Int32 Compare(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_BATTLEENTITYSORTRULE_COMPARE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_BATTLEENTITYSORTRULE_.CTOR_OFFSET))(nullptr);
		}

	};
}

