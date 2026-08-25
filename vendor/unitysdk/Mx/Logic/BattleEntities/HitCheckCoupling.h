#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_BATTLEENTITIES_HITCHECKCOUPLING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11BA5B0)
#define MX_LOGIC_BATTLEENTITIES_HITCHECKCOUPLING_HITALREADY_OFFSET UNITYSDK_OFFSET(0x11BA630)
#define MX_LOGIC_BATTLEENTITIES_HITCHECKCOUPLING_ADDTOHIT_OFFSET UNITYSDK_OFFSET(0x11BA6C0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int HitCheckCoupling_TypeDefinitionIndex = 13333;

	class HitCheckCoupling : public Il2CppObject
	{
	public:
		Il2CppObject* hitEntityTable; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HITCHECKCOUPLING_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HitAlready(::System::Int32 arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HITCHECKCOUPLING_HITALREADY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddToHit(::System::Int32 arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			((::System::Void(*)(::System::Int32, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_HITCHECKCOUPLING_ADDTOHIT_OFFSET))(arg, arg2, nullptr);
		}

	};
}

