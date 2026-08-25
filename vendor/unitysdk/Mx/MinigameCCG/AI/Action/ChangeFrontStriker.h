#pragma once
#include "../../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityInputRef; }
namespace MX::MinigameCCG::AI { class CCGAIThinkContext; }
namespace MX::MinigameCCG { class CCGEvent; }

#define MX_MINIGAMECCG_AI_ACTION_CHANGEFRONTSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E37B10)
#define MX_MINIGAMECCG_AI_ACTION_CHANGEFRONTSTRIKER_ONPLAYEREVENT_OFFSET UNITYSDK_OFFSET(0x1E38350)

namespace MX::MinigameCCG::AI::Action
{
	inline static constexpr unsigned int ChangeFrontStriker_TypeDefinitionIndex = 21049;

	class ChangeFrontStriker : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityInputRef* sourceEntityVar; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_AI_ACTION_CHANGEFRONTSTRIKER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnPlayerEvent(::MX::MinigameCCG::AI::CCGAIThinkContext* arg, ::MX::MinigameCCG::CCGEvent* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::AI::CCGAIThinkContext*, ::MX::MinigameCCG::CCGEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_AI_ACTION_CHANGEFRONTSTRIKER_ONPLAYEREVENT_OFFSET))(arg, arg, nullptr);
		}

	};
}

