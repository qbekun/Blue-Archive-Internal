#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGTargetCategoryRule; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGTARGETCATEGORYRULEEXT_FINDTARGETCANDIDATES_OFFSET UNITYSDK_OFFSET(0x1DC4FB0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGTargetCategoryRuleExt_TypeDefinitionIndex = 20480;

	class CCGTargetCategoryRuleExt : public Il2CppObject
	{
	public:
		Il2CppObject* FindTargetCandidates(::MX::MinigameCCG::CCGTargetCategoryRule* arg, ::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGPlayer* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGTargetCategoryRule*, ::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGTARGETCATEGORYRULEEXT_FINDTARGETCANDIDATES_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

