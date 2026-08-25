#pragma once
#include "../unitysdk.h"

namespace FlatData { class ConquestEnemyType; }

namespace FlatData
{
	inline static constexpr unsigned int ConquestEnemyType_TypeDefinitionIndex = 9441;

	class ConquestEnemyType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ConquestEnemyType* None; // 0x0
		::FlatData::ConquestEnemyType* Normal; // 0x0
		::FlatData::ConquestEnemyType* MiddleBoss; // 0x0
		::FlatData::ConquestEnemyType* Boss; // 0x0
		::FlatData::ConquestEnemyType* UnexpectedEvent; // 0x0
		::FlatData::ConquestEnemyType* Challenge; // 0x0
		::FlatData::ConquestEnemyType* IndividualErosion; // 0x0
		::FlatData::ConquestEnemyType* MassErosion; // 0x0

	};
}

