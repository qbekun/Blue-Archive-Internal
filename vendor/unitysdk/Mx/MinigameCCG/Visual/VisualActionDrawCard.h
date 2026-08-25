#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_DrawCard; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDRAWCARD_LOCATIONHAND_OFFSET UNITYSDK_OFFSET(0x1E66910)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDRAWCARD_RUN_OFFSET UNITYSDK_OFFSET(0x1E66A90)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDRAWCARD_SETINPUTENTITIES_OFFSET UNITYSDK_OFFSET(0x1E66C10)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDRAWCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E66CA0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDRAWCARD_DRAW_OFFSET UNITYSDK_OFFSET(0x1E66D40)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDRAWCARD_LOCATIONGRAVE_OFFSET UNITYSDK_OFFSET(0x1E66EC0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionDrawCard_TypeDefinitionIndex = 21097;

	class VisualActionDrawCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_DrawCard* eventInput; // 0x28
		CCGVisualCard* drawnCard; // 0x30

		::Cysharp::Threading::Tasks::UniTask* LocationHand()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDRAWCARD_LOCATIONHAND_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDRAWCARD_RUN_OFFSET))(nullptr);
		}

		::System::Void SetInputEntities()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDRAWCARD_SETINPUTENTITIES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_DrawCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_DrawCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDRAWCARD_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Draw()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDRAWCARD_DRAW_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* LocationGrave()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDRAWCARD_LOCATIONGRAVE_OFFSET))(nullptr);
		}

	};
}

