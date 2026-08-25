#pragma once
#include "../unitysdk.h"

namespace SQLite { class CreateFlags; }

namespace SQLite
{
	inline static constexpr unsigned int CreateFlags_TypeDefinitionIndex = 36580;

	class CreateFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::SQLite::CreateFlags* None; // 0x0
		::SQLite::CreateFlags* ImplicitPK; // 0x0
		::SQLite::CreateFlags* ImplicitIndex; // 0x0
		::SQLite::CreateFlags* AllImplicit; // 0x0
		::SQLite::CreateFlags* AutoIncPK; // 0x0
		::SQLite::CreateFlags* FullTextSearch3; // 0x0
		::SQLite::CreateFlags* FullTextSearch4; // 0x0

	};
}

