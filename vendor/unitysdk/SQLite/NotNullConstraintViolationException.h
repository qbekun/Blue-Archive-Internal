#pragma once
#include "../unitysdk.h"

namespace SQLite { class TableMapping; }
namespace SQLite { class NotNullConstraintViolationException; }
namespace SQLite { class SQLiteException; }

#define SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_GET_COLUMNS_OFFSET UNITYSDK_OFFSET(0xA15210)
#define SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_SET_COLUMNS_OFFSET UNITYSDK_OFFSET(0xA15220)
#define SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA15240)
#define SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA15260)
#define SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_NEW_OFFSET UNITYSDK_OFFSET(0xA153E0)
#define SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_NEW_OFFSET UNITYSDK_OFFSET(0xA15450)
#define SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_NEW_OFFSET UNITYSDK_OFFSET(0xA154C0)

namespace SQLite
{
	inline static constexpr unsigned int NotNullConstraintViolationException_TypeDefinitionIndex = 36578;

	class NotNullConstraintViolationException : public Il2CppObject
	{
	public:
		Il2CppObject* _Columns_k__BackingField; // 0x98

		Il2CppObject* get_Columns()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_GET_COLUMNS_OFFSET))(nullptr);
		}

		::System::Void set_Columns(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_SET_COLUMNS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Result* arg, ::System::String* str)
		{
			((::System::Void(*)(Result*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(Result* arg, ::System::String* str, ::SQLite::TableMapping* arg, ::System::Object* arg)
		{
			((::System::Void(*)(Result*, ::System::String*, ::SQLite::TableMapping*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_.CTOR_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::SQLite::NotNullConstraintViolationException* New(Result* arg, ::System::String* str)
		{
			return (return (::SQLite::NotNullConstraintViolationException*(*)(Result*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_NEW_OFFSET))(arg, str, nullptr);
		}

		::SQLite::NotNullConstraintViolationException* New(Result* arg, ::System::String* str, ::SQLite::TableMapping* arg, ::System::Object* arg)
		{
			return (return (::SQLite::NotNullConstraintViolationException*(*)(Result*, ::System::String*, ::SQLite::TableMapping*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_NEW_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::SQLite::NotNullConstraintViolationException* New(::SQLite::SQLiteException* arg, ::SQLite::TableMapping* arg, ::System::Object* arg)
		{
			return (return (::SQLite::NotNullConstraintViolationException*(*)(::SQLite::SQLiteException*, ::SQLite::TableMapping*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLCONSTRAINTVIOLATIONEXCEPTION_NEW_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

