#pragma once
#include "../../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityOutputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityCollectionOutputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG::AI { class CCGAIThinkContext; }
namespace MX::MinigameCCG { class CCGEvent; }

#define MX_MINIGAMECCG_AI_ACTION_USESTRIKERACTIVESKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E38F90)
#define MX_MINIGAMECCG_AI_ACTION_USESTRIKERACTIVESKILL_ONPLAYEREVENT_OFFSET UNITYSDK_OFFSET(0x1E38FA0)

namespace MX::MinigameCCG::AI::Action
{
	inline static constexpr unsigned int UseStrikerActiveSkill_TypeDefinitionIndex = 21053;

	class UseStrikerActiveSkill : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityOutputRef* sourceEntityVar; // 0x10
		::MX::MinigameCCG::ParameterRef::EntityCollectionOutputRef* targetCandidatesVar; // 0x18
		Il2CppObject* targetSelectProcedures; // 0x20
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* targetSelectedVar; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_AI_ACTION_USESTRIKERACTIVESKILL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnPlayerEvent(::MX::MinigameCCG::AI::CCGAIThinkContext* arg, ::MX::MinigameCCG::CCGEvent* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::AI::CCGAIThinkContext*, ::MX::MinigameCCG::CCGEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_AI_ACTION_USESTRIKERACTIVESKILL_ONPLAYEREVENT_OFFSET))(arg, arg, nullptr);
		}

	};
}

