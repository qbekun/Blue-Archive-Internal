#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class MinigameNoteColor; }

namespace MX::SaveData
{
	inline static constexpr unsigned int MinigameNoteColor_TypeDefinitionIndex = 20042;

	class MinigameNoteColor : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::MinigameNoteColor* Set1; // 0x0
		::MX::SaveData::MinigameNoteColor* Set2; // 0x0

	};
}

