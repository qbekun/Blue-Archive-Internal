#pragma once
#include "../unitysdk.h"

namespace FlatData { class ConquestTileType; }

namespace FlatData
{
	inline static constexpr unsigned int ConquestTileType_TypeDefinitionIndex = 9443;

	class ConquestTileType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ConquestTileType* None; // 0x0
		::FlatData::ConquestTileType* Start; // 0x0
		::FlatData::ConquestTileType* Normal; // 0x0
		::FlatData::ConquestTileType* Battle; // 0x0
		::FlatData::ConquestTileType* Base; // 0x0

	};
}

