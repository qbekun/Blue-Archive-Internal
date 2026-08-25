#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityInputRef; }
namespace MX::MinigameCCG::ParameterRef { class PlayerInputRef; }
namespace MX::MinigameCCG { class CCGEntityLocation; }
namespace MX::MinigameCCG::ParameterRef { class EntityOutputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_CLONECARD_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2FAA0)
#define MX_MINIGAMECCG_PROCEDURES_CLONECARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FB60)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int CloneCard_TypeDefinitionIndex = 20998;

	class CloneCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityInputRef* targetCardVar; // 0x10
		::MX::MinigameCCG::ParameterRef::PlayerInputRef* targetPlayerVar; // 0x18
		::MX::MinigameCCG::CCGEntityLocation* location; // 0x20
		::System::Boolean forceDisposal; // 0x24
		::MX::MinigameCCG::ParameterRef::EntityOutputRef* spawnedEntityVar; // 0x28

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_CLONECARD_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_CLONECARD_.CTOR_OFFSET))(nullptr);
		}

	};
}

