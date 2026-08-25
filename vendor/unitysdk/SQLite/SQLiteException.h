#pragma once
#include "../unitysdk.h"

namespace SQLite { class SQLiteException; }

#define SQLITE_SQLITEEXCEPTION_NEW_OFFSET UNITYSDK_OFFSET(0xA150F0)
#define SQLITE_SQLITEEXCEPTION_GET_RESULT_OFFSET UNITYSDK_OFFSET(0xA151F0)
#define SQLITE_SQLITEEXCEPTION_SET_RESULT_OFFSET UNITYSDK_OFFSET(0xA15200)
#define SQLITE_SQLITEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA15190)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteException_TypeDefinitionIndex = 36576;

	class SQLiteException : public Il2CppObject
	{
	public:
		Result* _Result_k__BackingField; // 0x90

		::SQLite::SQLiteException* New(Result* arg, ::System::String* str)
		{
			return (return (::SQLite::SQLiteException*(*)(Result*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEEXCEPTION_NEW_OFFSET))(arg, str, nullptr);
		}

		Result* get_Result()
		{
			return (return (Result*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEEXCEPTION_GET_RESULT_OFFSET))(nullptr);
		}

		::System::Void set_Result(Result* arg)
		{
			((::System::Void(*)(Result*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEEXCEPTION_SET_RESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Result* arg, ::System::String* str)
		{
			((::System::Void(*)(Result*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEEXCEPTION_.CTOR_OFFSET))(arg, str, nullptr);
		}

	};
}

