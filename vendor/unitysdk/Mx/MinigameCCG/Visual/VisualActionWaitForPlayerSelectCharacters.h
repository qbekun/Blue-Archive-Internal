#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace MX::MinigameCCG { class SelectionContainer; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERSELECTCHARACTERS_SETINPUTENTITIES_OFFSET UNITYSDK_OFFSET(0x1E80530)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERSELECTCHARACTERS_RUN_OFFSET UNITYSDK_OFFSET(0x1E80700)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERSELECTCHARACTERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E80880)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionWaitForPlayerSelectCharacters_TypeDefinitionIndex = 21149;

	class VisualActionWaitForPlayerSelectCharacters : public Il2CppObject
	{
	public:
		::System::Void SetInputEntities()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERSELECTCHARACTERS_SETINPUTENTITIES_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERSELECTCHARACTERS_RUN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::SelectionContainer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::SelectionContainer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERSELECTCHARACTERS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

