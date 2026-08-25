#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class MinigameNoteScale; }

namespace MX::SaveData
{
	inline static constexpr unsigned int MinigameNoteScale_TypeDefinitionIndex = 20041;

	class MinigameNoteScale : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::MinigameNoteScale* Big; // 0x0
		::MX::SaveData::MinigameNoteScale* Medium; // 0x0
		::MX::SaveData::MinigameNoteScale* Small; // 0x0

	};
}

