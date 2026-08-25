#pragma once
#include "../unitysdk.h"

namespace FlatData { class SchoolDungeonType; }

namespace FlatData
{
	inline static constexpr unsigned int SchoolDungeonType_TypeDefinitionIndex = 9470;

	class SchoolDungeonType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::SchoolDungeonType* SchoolA; // 0x0
		::FlatData::SchoolDungeonType* SchoolB; // 0x0
		::FlatData::SchoolDungeonType* SchoolC; // 0x0
		::FlatData::SchoolDungeonType* None; // 0x0

	};
}

