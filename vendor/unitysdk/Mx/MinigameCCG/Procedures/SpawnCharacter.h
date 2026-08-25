#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG::ParameterRef { class PlayerInputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityOutputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_SPAWNCHARACTER_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E36CF0)
#define MX_MINIGAMECCG_PROCEDURES_SPAWNCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E36DB0)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int SpawnCharacter_TypeDefinitionIndex = 21040;

	class SpawnCharacter : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* characterIdVar; // 0x10
		::MX::MinigameCCG::ParameterRef::PlayerInputRef* playerVar; // 0x20
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* slotIndexVar; // 0x28
		::MX::MinigameCCG::ParameterRef::EntityOutputRef* spawnedEntityVar; // 0x38

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SPAWNCHARACTER_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SPAWNCHARACTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

