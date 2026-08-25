#pragma once
#include "../unitysdk.h"

namespace FlatData { class Difficulty; }

namespace FlatData
{
	inline static constexpr unsigned int Difficulty_TypeDefinitionIndex = 9386;

	class Difficulty : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::Difficulty* Normal; // 0x0
		::FlatData::Difficulty* Hard; // 0x0
		::FlatData::Difficulty* VeryHard; // 0x0
		::FlatData::Difficulty* Hardcore; // 0x0
		::FlatData::Difficulty* Extreme; // 0x0
		::FlatData::Difficulty* Insane; // 0x0
		::FlatData::Difficulty* Torment; // 0x0
		::FlatData::Difficulty* Lunatic; // 0x0

	};
}

