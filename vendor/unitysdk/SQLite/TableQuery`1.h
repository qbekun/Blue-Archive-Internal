#pragma once
#include "../unitysdk.h"

namespace SQLite { class SQLiteConnection; }
namespace SQLite { class TableMapping; }
namespace SQLite { class BaseTableQuery; }
namespace SQLite { class SQLiteCommand; }

#define SQLITE_TABLEQUERY`1_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_SET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_GET_TABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_SET_TABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_WHERE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_DELETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_DELETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_TAKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_SKIP_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_ELEMENTAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_DEFERRED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_ORDERBY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_ORDERBYDESCENDING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_THENBY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_THENBYDESCENDING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_ADDORDERBY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_ADDWHERE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_GENERATECOMMAND_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_COMPILEEXPR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_COMPILENULLBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_GETSQLNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_TOLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_FIRST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_FIRSTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_FIRST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_FIRSTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_TABLEQUERY`1_CREATEQUERYSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace SQLite
{
	inline static constexpr unsigned int TableQuery`1_TypeDefinitionIndex = 36635;

	class TableQuery`1 : public ::UnityEngine::Bindings::NativeMethodAttribute
	{
	public:
		::SQLite::SQLiteConnection* _Connection_k__BackingField; // 0x0
		::SQLite::TableMapping* _Table_k__BackingField; // 0x0
		::System::Linq::Expressions::Expression* _where; // 0x0
		Il2CppObject* _orderBys; // 0x0
		Il2CppObject* _limit; // 0x0
		Il2CppObject* _offset; // 0x0
		::SQLite::BaseTableQuery* _joinInner; // 0x0
		::System::Linq::Expressions::Expression* _joinInnerKeySelector; // 0x0
		::SQLite::BaseTableQuery* _joinOuter; // 0x0
		::System::Linq::Expressions::Expression* _joinOuterKeySelector; // 0x0
		::System::Linq::Expressions::Expression* _joinSelector; // 0x0
		::System::Linq::Expressions::Expression* _selector; // 0x0
		::System::Boolean _deferred; // 0x0

		::SQLite::SQLiteConnection* get_Connection()
		{
			return (return (::SQLite::SQLiteConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_GET_CONNECTION_OFFSET))(nullptr);
		}

		::System::Void set_Connection(::SQLite::SQLiteConnection* arg)
		{
			((::System::Void(*)(::SQLite::SQLiteConnection*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_SET_CONNECTION_OFFSET))(arg, nullptr);
		}

		::SQLite::TableMapping* get_Table()
		{
			return (return (::SQLite::TableMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_GET_TABLE_OFFSET))(nullptr);
		}

		::System::Void set_Table(::SQLite::TableMapping* arg)
		{
			((::System::Void(*)(::SQLite::TableMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_SET_TABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::SQLite::SQLiteConnection* arg, ::SQLite::TableMapping* arg)
		{
			((::System::Void(*)(::SQLite::SQLiteConnection*, ::SQLite::TableMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::SQLite::SQLiteConnection* arg)
		{
			((::System::Void(*)(::SQLite::SQLiteConnection*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Clone()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_CLONE_OFFSET))(nullptr);
		}

		Il2CppObject* Where(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_WHERE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Delete()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_DELETE_OFFSET))(nullptr);
		}

		::System::Int32 Delete(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_DELETE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Take(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_TAKE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Skip(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_SKIP_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ElementAt(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_ELEMENTAT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Deferred()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_DEFERRED_OFFSET))(nullptr);
		}

		Il2CppObject* OrderBy(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_ORDERBY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OrderByDescending(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_ORDERBYDESCENDING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ThenBy(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_THENBY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ThenByDescending(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_THENBYDESCENDING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AddOrderBy(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_ADDORDERBY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWhere(::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_ADDWHERE_OFFSET))(arg, nullptr);
		}

		::SQLite::SQLiteCommand* GenerateCommand(::System::String* str)
		{
			return (return (::SQLite::SQLiteCommand*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_GENERATECOMMAND_OFFSET))(str, nullptr);
		}

		Il2CppObject* CompileExpr(::System::Linq::Expressions::Expression* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::System::Linq::Expressions::Expression*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_COMPILEEXPR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_CONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::String* CompileNullBinaryExpression(::System::Linq::Expressions::BinaryExpression* arg, Il2CppObject* arg)
		{
			return (return (::System::String*(*)(::System::Linq::Expressions::BinaryExpression*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_COMPILENULLBINARYEXPRESSION_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetSqlName(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::String*(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_GETSQLNAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_COUNT_OFFSET))(nullptr);
		}

		::System::Int32 Count(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_COUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* ToList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_TOLIST_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_TOARRAY_OFFSET))(nullptr);
		}

		Il2CppObject* First()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_FIRST_OFFSET))(nullptr);
		}

		Il2CppObject* FirstOrDefault()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_FIRSTORDEFAULT_OFFSET))(nullptr);
		}

		Il2CppObject* First(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_FIRST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FirstOrDefault(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_FIRSTORDEFAULT_OFFSET))(arg, nullptr);
		}

		::System::String* CreateQueryString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEQUERY`1_CREATEQUERYSTRING_OFFSET))(nullptr);
		}

	};
}

