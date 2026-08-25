#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_ApplyShieldStriker; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class EventHealthChange; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONAPPLYSHIELDSTRIKER_RUN_OFFSET UNITYSDK_OFFSET(0x1E3ED90)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONAPPLYSHIELDSTRIKER_PLAYSHIELDEFFECTANDANIMATION_OFFSET UNITYSDK_OFFSET(0x1E3EF10)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONAPPLYSHIELDSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F0B0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionApplyShieldStriker_TypeDefinitionIndex = 21064;

	class VisualActionApplyShieldStriker : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_ApplyShieldStriker* eventInput; // 0x28

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONAPPLYSHIELDSTRIKER_RUN_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayShieldEffectAndAnimation(::MX::MinigameCCG::EventHealthChange* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::EventHealthChange*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONAPPLYSHIELDSTRIKER_PLAYSHIELDEFFECTANDANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_ApplyShieldStriker* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_ApplyShieldStriker*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONAPPLYSHIELDSTRIKER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

