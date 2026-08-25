#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class CharacterDeadCheckType; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CharacterDeadCheckType_TypeDefinitionIndex = 14274;

	class CharacterDeadCheckType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::CharacterDeadCheckType* SpawnedCharacterDead; // 0x0
		::MX::Logic::Battles::CharacterDeadCheckType* All; // 0x0

	};
}

