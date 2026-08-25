#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_GENERICCONDITION_BATTLEENTITYCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x108C220)
#define MX_LOGIC_GENERICCONDITION_BATTLEENTITYCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x108C230)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int BattleEntityComparer_TypeDefinitionIndex = 12931;

	class BattleEntityComparer : public Il2CppObject
	{
	public:
		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_BATTLEENTITYCOMPARER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Compare(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_BATTLEENTITYCOMPARER_COMPARE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

