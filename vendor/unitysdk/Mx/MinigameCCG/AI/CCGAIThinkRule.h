#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class ICCGCondition; }
namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG::AI { class CCGAIPlayerAction; }

#define MX_MINIGAMECCG_AI_CCGAITHINKRULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E38340)

namespace MX::MinigameCCG::AI
{
	inline static constexpr unsigned int CCGAIThinkRule_TypeDefinitionIndex = 21048;

	class CCGAIThinkRule : public Il2CppObject
	{
	public:
		Il2CppObject* preprocedures; // 0x10
		::MX::MinigameCCG::ICCGCondition* condition; // 0x18
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* priority; // 0x20
		::MX::MinigameCCG::AI::CCGAIPlayerAction* action; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_AI_CCGAITHINKRULE_.CTOR_OFFSET))(nullptr);
		}

	};
}

