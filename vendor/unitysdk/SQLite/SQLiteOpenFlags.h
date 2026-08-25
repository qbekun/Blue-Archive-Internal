#pragma once
#include "../unitysdk.h"

namespace SQLite { class SQLiteOpenFlags; }

namespace SQLite
{
	inline static constexpr unsigned int SQLiteOpenFlags_TypeDefinitionIndex = 36579;

	class SQLiteOpenFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::SQLite::SQLiteOpenFlags* ReadOnly; // 0x0
		::SQLite::SQLiteOpenFlags* ReadWrite; // 0x0
		::SQLite::SQLiteOpenFlags* Create; // 0x0
		::SQLite::SQLiteOpenFlags* NoMutex; // 0x0
		::SQLite::SQLiteOpenFlags* FullMutex; // 0x0
		::SQLite::SQLiteOpenFlags* SharedCache; // 0x0
		::SQLite::SQLiteOpenFlags* PrivateCache; // 0x0
		::SQLite::SQLiteOpenFlags* ProtectionComplete; // 0x0
		::SQLite::SQLiteOpenFlags* ProtectionCompleteUnlessOpen; // 0x0
		::SQLite::SQLiteOpenFlags* ProtectionCompleteUntilFirstUserAuthentication; // 0x0
		::SQLite::SQLiteOpenFlags* ProtectionNone; // 0x0

	};
}

