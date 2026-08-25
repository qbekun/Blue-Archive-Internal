#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Core::Math { class IPseudoRandomService; }
namespace MX::Logic::Skills { class TargetSortCriteria; }
namespace FlatData { class StatType; }

#define MX_LOGIC_BATTLEENTITIES_TARGETINGSERVICE_REORDER_OFFSET UNITYSDK_OFFSET(0x11BEDC0)
#define MX_LOGIC_BATTLEENTITIES_TARGETINGSERVICE_GETEVALUATIONVALUE_OFFSET UNITYSDK_OFFSET(0x11D2D70)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int TargetingService_TypeDefinitionIndex = 13374;

	class TargetingService : public Il2CppObject
	{
	public:
		::System::Void Reorder(Il2CppObject* arg, ::MX::Logic::Skills::TargetSortRule* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4, ::MX::Core::Math::IPseudoRandomService* arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Logic::Skills::TargetSortRule*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::MX::Core::Math::IPseudoRandomService*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETINGSERVICE_REORDER_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Double GetEvaluationValue(::MX::Logic::Skills::TargetSortCriteria* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4, ::FlatData::StatType* arg5)
		{
			return ((::System::Double(*)(::MX::Logic::Skills::TargetSortCriteria*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TARGETINGSERVICE_GETEVALUATIONVALUE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};
}

