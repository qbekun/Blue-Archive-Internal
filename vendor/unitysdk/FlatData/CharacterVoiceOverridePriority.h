#pragma once
#include "../unitysdk.h"

namespace FlatData { class CharacterVoiceOverridePriority; }

namespace FlatData
{
	inline static constexpr unsigned int CharacterVoiceOverridePriority_TypeDefinitionIndex = 9422;

	class CharacterVoiceOverridePriority : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::CharacterVoiceOverridePriority* None; // 0x0
		::FlatData::CharacterVoiceOverridePriority* High; // 0x0
		::FlatData::CharacterVoiceOverridePriority* Low; // 0x0

	};
}

