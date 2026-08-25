#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_TryApplyHealToTargetEquipments; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONTRYAPPLYHEALTOTARGETEQUIPMENTS_RUN_OFFSET UNITYSDK_OFFSET(0x1E7CEC0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONTRYAPPLYHEALTOTARGETEQUIPMENTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D040)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionTryApplyHealToTargetEquipments_TypeDefinitionIndex = 21139;

	class VisualActionTryApplyHealToTargetEquipments : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_TryApplyHealToTargetEquipments* eventInput; // 0x28

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONTRYAPPLYHEALTOTARGETEQUIPMENTS_RUN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_TryApplyHealToTargetEquipments* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_TryApplyHealToTargetEquipments*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONTRYAPPLYHEALTOTARGETEQUIPMENTS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

