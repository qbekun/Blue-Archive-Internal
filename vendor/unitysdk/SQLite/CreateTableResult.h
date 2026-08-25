#pragma once
#include "../unitysdk.h"

namespace SQLite { class CreateTableResult; }

namespace SQLite
{
	inline static constexpr unsigned int CreateTableResult_TypeDefinitionIndex = 36629;

	class CreateTableResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::SQLite::CreateTableResult* Created; // 0x0
		::SQLite::CreateTableResult* Migrated; // 0x0

	};
}

