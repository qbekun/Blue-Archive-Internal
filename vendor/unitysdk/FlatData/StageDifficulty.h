#pragma once
#include "../unitysdk.h"

namespace FlatData { class StageDifficulty; }

namespace FlatData
{
	inline static constexpr unsigned int StageDifficulty_TypeDefinitionIndex = 9652;

	class StageDifficulty : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::StageDifficulty* None; // 0x0
		::FlatData::StageDifficulty* Normal; // 0x0
		::FlatData::StageDifficulty* Hard; // 0x0
		::FlatData::StageDifficulty* VeryHard; // 0x0
		::FlatData::StageDifficulty* VeryHard_Ex; // 0x0

	};
}

