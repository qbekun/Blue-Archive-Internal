#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Data { class IncludeType; }
namespace MX::GameData::DAO::Battle { class TargetSideConditionalModifierDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_DATA_TARGETSIDECONDITIONALMODIFIER_GET_INCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x1231D70)
#define MX_LOGIC_DATA_TARGETSIDECONDITIONALMODIFIER_GET_TARGETSIDE_OFFSET UNITYSDK_OFFSET(0x1231D80)
#define MX_LOGIC_DATA_TARGETSIDECONDITIONALMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1231D90)
#define MX_LOGIC_DATA_TARGETSIDECONDITIONALMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x1231DD0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TargetSideConditionalModifier_TypeDefinitionIndex = 13834;

	class TargetSideConditionalModifier : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetSideId* _TargetSide_k__BackingField; // 0x18
		::MX::Logic::Data::IncludeType* _IncludeType_k__BackingField; // 0x1C

		::MX::Logic::Data::IncludeType* get_IncludeType()
		{
			return ((::MX::Logic::Data::IncludeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETSIDECONDITIONALMODIFIER_GET_INCLUDETYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetSideId* get_TargetSide()
		{
			return ((::MX::Logic::Skills::TargetSideId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETSIDECONDITIONALMODIFIER_GET_TARGETSIDE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::TargetSideConditionalModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::TargetSideConditionalModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETSIDECONDITIONALMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETSIDECONDITIONALMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

