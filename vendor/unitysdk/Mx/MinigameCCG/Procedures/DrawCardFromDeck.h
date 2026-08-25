#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class PlayerInputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityCollectionOutputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_DRAWCARDFROMDECK_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E31900)
#define MX_MINIGAMECCG_PROCEDURES_DRAWCARDFROMDECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E319C0)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int DrawCardFromDeck_TypeDefinitionIndex = 21011;

	class DrawCardFromDeck : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::PlayerInputRef* playerVar; // 0x10
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* drawCountVar; // 0x18
		::MX::MinigameCCG::ParameterRef::EntityCollectionOutputRef* drawnCardEntities; // 0x28

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_DRAWCARDFROMDECK_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_DRAWCARDFROMDECK_.CTOR_OFFSET))(nullptr);
		}

	};
}

