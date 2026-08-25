#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_MulliganDrawCards; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONMULLIGANDRAWCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E6ED00)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONMULLIGANDRAWCARD_SETINPUTENTITIES_OFFSET UNITYSDK_OFFSET(0x1E6ED30)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONMULLIGANDRAWCARD_RUN_OFFSET UNITYSDK_OFFSET(0x1E6EDF0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONMULLIGANDRAWCARD_TOHAND_OFFSET UNITYSDK_OFFSET(0x1E6EF70)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONMULLIGANDRAWCARD_CHECKMULLIGAN_OFFSET UNITYSDK_OFFSET(0x1E6F110)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionMulliganDrawCard_TypeDefinitionIndex = 21118;

	class VisualActionMulliganDrawCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_MulliganDrawCards* eventInput; // 0x28

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_MulliganDrawCards* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_MulliganDrawCards*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONMULLIGANDRAWCARD_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetInputEntities()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONMULLIGANDRAWCARD_SETINPUTENTITIES_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONMULLIGANDRAWCARD_RUN_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* ToHand(Il2CppObject* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONMULLIGANDRAWCARD_TOHAND_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* CheckMulligan(Il2CppObject* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONMULLIGANDRAWCARD_CHECKMULLIGAN_OFFSET))(arg, nullptr);
		}

	};
}

