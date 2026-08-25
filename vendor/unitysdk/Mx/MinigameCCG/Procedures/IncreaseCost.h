#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class PlayerInputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_INCREASECOST_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E33750)
#define MX_MINIGAMECCG_PROCEDURES_INCREASECOST_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E33760)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int IncreaseCost_TypeDefinitionIndex = 21025;

	class IncreaseCost : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::PlayerInputRef* playerVar; // 0x10
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* costVar; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_INCREASECOST_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_INCREASECOST_ONSTATE_OFFSET))(arg, nullptr);
		}

	};
}

