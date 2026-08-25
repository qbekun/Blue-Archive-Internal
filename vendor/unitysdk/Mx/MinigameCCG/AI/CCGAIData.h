#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class PlayerOutputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityCollectionOutputRef; }
namespace MX::MinigameCCG::AI::Action { class ChangeFrontStriker; }
namespace MX::MinigameCCG::AI { class CCGAIThinkContext; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_AI_CCGAIDATA_GET_PARAMETERDECLARATIONS_OFFSET UNITYSDK_OFFSET(0x1E376D0)
#define MX_MINIGAMECCG_AI_CCGAIDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1E376E0)
#define MX_MINIGAMECCG_AI_CCGAIDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E376F0)
#define MX_MINIGAMECCG_AI_CCGAIDATA_CREATECONTEXT_OFFSET UNITYSDK_OFFSET(0x1E37B20)
#define MX_MINIGAMECCG_AI_CCGAIDATA_GET_AIID_OFFSET UNITYSDK_OFFSET(0x1E37C00)

namespace MX::MinigameCCG::AI
{
	inline static constexpr unsigned int CCGAIData_TypeDefinitionIndex = 21044;

	class CCGAIData : public Il2CppObject
	{
	public:
		::System::Int64 aiId; // 0x18
		Il2CppObject* parameterDeclarations; // 0x20
		::MX::MinigameCCG::ParameterRef::PlayerOutputRef* playerVar; // 0x28
		::MX::MinigameCCG::ParameterRef::EntityCollectionOutputRef* activeSkillUsableStrikersVar; // 0x30
		::MX::MinigameCCG::ParameterRef::EntityCollectionOutputRef* activeSkillUsableSpecialVar; // 0x38
		::MX::MinigameCCG::ParameterRef::EntityCollectionOutputRef* frontSwapableStrikersVar; // 0x40
		Il2CppObject* preprocedures; // 0x48
		::MX::MinigameCCG::AI::Action::ChangeFrontStriker* frontStrikerAction; // 0x50
		Il2CppObject* playerTurnRules; // 0x58

		Il2CppObject* get_ParameterDeclarations()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_AI_CCGAIDATA_GET_PARAMETERDECLARATIONS_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_AI_CCGAIDATA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_AI_CCGAIDATA_.CTOR_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::AI::CCGAIThinkContext* CreateContext(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGPlayer* arg)
		{
			return (return (::MX::MinigameCCG::AI::CCGAIThinkContext*(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_AI_CCGAIDATA_CREATECONTEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_AIId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_AI_CCGAIDATA_GET_AIID_OFFSET))(nullptr);
		}

	};
}

