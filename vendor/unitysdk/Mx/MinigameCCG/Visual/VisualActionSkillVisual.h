#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_SkillVisual; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace UnityEngine { class Transform; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILLVISUAL_RUN_OFFSET UNITYSDK_OFFSET(0x1E753C0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILLVISUAL_ROTATELOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x1E75540)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILLVISUAL_PREPARESKILL_OFFSET UNITYSDK_OFFSET(0x1E756E0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILLVISUAL_INITIALIZEVFXCONTAINER_OFFSET UNITYSDK_OFFSET(0x1E75860)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILLVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E75930)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILLVISUAL_CACHEDATAASYNC_OFFSET UNITYSDK_OFFSET(0x1E75B40)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionSkillVisual_TypeDefinitionIndex = 21131;

	class VisualActionSkillVisual : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_SkillVisual* eventInput; // 0x90

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILLVISUAL_RUN_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* RotateLookAtTarget(::UnityEngine::Transform* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILLVISUAL_ROTATELOOKATTARGET_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PrepareSkill()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILLVISUAL_PREPARESKILL_OFFSET))(nullptr);
		}

		::System::Void InitializeVFXContainer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILLVISUAL_INITIALIZEVFXCONTAINER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_SkillVisual* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_SkillVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILLVISUAL_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* CacheDataAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILLVISUAL_CACHEDATAASYNC_OFFSET))(nullptr);
		}

	};
}

