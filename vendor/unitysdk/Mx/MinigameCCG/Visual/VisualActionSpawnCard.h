#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_SpawnCard; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class ICCGCardData; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E79720)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNCARD_SETINPUTENTITIES_OFFSET UNITYSDK_OFFSET(0x1E797C0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNCARD_PRELOAD_OFFSET UNITYSDK_OFFSET(0x1E79850)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNCARD_PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x1E799F0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNCARD_RUN_OFFSET UNITYSDK_OFFSET(0x1E79B90)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionSpawnCard_TypeDefinitionIndex = 21135;

	class VisualActionSpawnCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_SpawnCard* eventInput; // 0x28

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_SpawnCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_SpawnCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNCARD_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetInputEntities()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNCARD_SETINPUTENTITIES_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Preload(CCGVisualCard* arg, ::MX::MinigameCCG::ICCGCardData* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(CCGVisualCard*, ::MX::MinigameCCG::ICCGCardData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNCARD_PRELOAD_OFFSET))(arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayEffect(CCGVisualCard* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(CCGVisualCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNCARD_PLAYEFFECT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNCARD_RUN_OFFSET))(nullptr);
		}

	};
}

