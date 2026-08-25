#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG::ParameterRef { class PlayerInputRef; }
namespace MX::MinigameCCG { class CCGEntityLocation; }
namespace MX::MinigameCCG::ParameterRef { class EntityOutputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_SPAWNCARD_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E36860)
#define MX_MINIGAMECCG_PROCEDURES_SPAWNCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E36920)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int SpawnCard_TypeDefinitionIndex = 21038;

	class SpawnCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* cardIdVar; // 0x10
		::MX::MinigameCCG::ParameterRef::PlayerInputRef* playerVar; // 0x20
		::MX::MinigameCCG::CCGEntityLocation* location; // 0x28
		::System::Boolean forceDisposal; // 0x2C
		::MX::MinigameCCG::ParameterRef::EntityOutputRef* spawnedEntityVar; // 0x30

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SPAWNCARD_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SPAWNCARD_.CTOR_OFFSET))(nullptr);
		}

	};
}

