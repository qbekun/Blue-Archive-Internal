#pragma once
#include "../unitysdk.h"

namespace SQLite { class CreateFlags; }

#define SQLITE_TABLEMAPPING_GET_MAPPEDTYPE_OFFSET UNITYSDK_OFFSET(0xA21500)
#define SQLITE_TABLEMAPPING_SET_GETBYPRIMARYKEYSQL_OFFSET UNITYSDK_OFFSET(0xA21510)
#define SQLITE_TABLEMAPPING_SET_HASAUTOINCPK_OFFSET UNITYSDK_OFFSET(0xA21520)
#define SQLITE_TABLEMAPPING_SET_CREATEFLAGS_OFFSET UNITYSDK_OFFSET(0xA21530)
#define SQLITE_TABLEMAPPING_GET_COLUMNS_OFFSET UNITYSDK_OFFSET(0xA21540)
#define SQLITE_TABLEMAPPING_GETPUBLICMEMBERS_OFFSET UNITYSDK_OFFSET(0xA21550)
#define SQLITE_TABLEMAPPING_GET_WITHOUTROWID_OFFSET UNITYSDK_OFFSET(0xA21B60)
#define SQLITE_TABLEMAPPING_SET_TABLENAME_OFFSET UNITYSDK_OFFSET(0xA21B70)
#define SQLITE_TABLEMAPPING_GET_HASAUTOINCPK_OFFSET UNITYSDK_OFFSET(0xA21B80)
#define SQLITE_TABLEMAPPING_SET_WITHOUTROWID_OFFSET UNITYSDK_OFFSET(0xA21B90)
#define SQLITE_TABLEMAPPING_FINDCOLUMNWITHPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xA21BA0)
#define SQLITE_TABLEMAPPING_SETAUTOINCPK_OFFSET UNITYSDK_OFFSET(0xA1D600)
#define SQLITE_TABLEMAPPING_SET_PK_OFFSET UNITYSDK_OFFSET(0xA21C80)
#define SQLITE_TABLEMAPPING_SET_METHOD_OFFSET UNITYSDK_OFFSET(0xA21C90)
#define SQLITE_TABLEMAPPING_GET_CREATEFLAGS_OFFSET UNITYSDK_OFFSET(0xA21CA0)
#define SQLITE_TABLEMAPPING_GET_INSERTCOLUMNS_OFFSET UNITYSDK_OFFSET(0xA21CB0)
#define SQLITE_TABLEMAPPING_.CTOR_OFFSET UNITYSDK_OFFSET(0xA171B0)
#define SQLITE_TABLEMAPPING_FINDCOLUMN_OFFSET UNITYSDK_OFFSET(0xA223B0)
#define SQLITE_TABLEMAPPING_GET_GETBYPRIMARYKEYSQL_OFFSET UNITYSDK_OFFSET(0xA22530)
#define SQLITE_TABLEMAPPING_GET_METHOD_OFFSET UNITYSDK_OFFSET(0xA22540)
#define SQLITE_TABLEMAPPING_GET_TABLENAME_OFFSET UNITYSDK_OFFSET(0xA22550)
#define SQLITE_TABLEMAPPING_GET_INSERTORREPLACECOLUMNS_OFFSET UNITYSDK_OFFSET(0xA22560)
#define SQLITE_TABLEMAPPING_SET_MAPPEDTYPE_OFFSET UNITYSDK_OFFSET(0xA22570)
#define SQLITE_TABLEMAPPING_SET_COLUMNS_OFFSET UNITYSDK_OFFSET(0xA22580)
#define SQLITE_TABLEMAPPING_GET_PK_OFFSET UNITYSDK_OFFSET(0xA22590)
#define SQLITE_TABLEMAPPING_GETFIELDSFROMVALUETUPLE_OFFSET UNITYSDK_OFFSET(0xA21AD0)

namespace SQLite
{
	inline static constexpr unsigned int TableMapping_TypeDefinitionIndex = 36613;

	class TableMapping : public Il2CppObject
	{
	public:
		::System::Type* _MappedType_k__BackingField; // 0x10
		::System::String* _TableName_k__BackingField; // 0x18
		::System::Boolean _WithoutRowId_k__BackingField; // 0x20
		::Il2CppArray<::System::Object*>* _Columns_k__BackingField; // 0x28
		Column* _PK_k__BackingField; // 0x30
		::System::String* _GetByPrimaryKeySql_k__BackingField; // 0x38
		::SQLite::CreateFlags* _CreateFlags_k__BackingField; // 0x40
		MapMethod* _Method_k__BackingField; // 0x44
		Column* _autoPk; // 0x48
		::Il2CppArray<::System::Object*>* _insertColumns; // 0x50
		::Il2CppArray<::System::Object*>* _insertOrReplaceColumns; // 0x58
		::System::Boolean _HasAutoIncPK_k__BackingField; // 0x60

		::System::Type* get_MappedType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_MAPPEDTYPE_OFFSET))(nullptr);
		}

		::System::Void set_GetByPrimaryKeySql(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_GETBYPRIMARYKEYSQL_OFFSET))(str, nullptr);
		}

		::System::Void set_HasAutoIncPK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_HASAUTOINCPK_OFFSET))(arg, nullptr);
		}

		::System::Void set_CreateFlags(::SQLite::CreateFlags* arg)
		{
			((::System::Void(*)(::SQLite::CreateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_CREATEFLAGS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Columns()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_COLUMNS_OFFSET))(nullptr);
		}

		Il2CppObject* GetPublicMembers(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GETPUBLICMEMBERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_WithoutRowId()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_WITHOUTROWID_OFFSET))(nullptr);
		}

		::System::Void set_TableName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_TABLENAME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_HasAutoIncPK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_HASAUTOINCPK_OFFSET))(nullptr);
		}

		::System::Void set_WithoutRowId(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_WITHOUTROWID_OFFSET))(arg, nullptr);
		}

		Column* FindColumnWithPropertyName(::System::String* str)
		{
			return (return (Column*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_FINDCOLUMNWITHPROPERTYNAME_OFFSET))(str, nullptr);
		}

		::System::Void SetAutoIncPK(::System::Object* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SETAUTOINCPK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_PK(Column* arg)
		{
			((::System::Void(*)(Column*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_PK_OFFSET))(arg, nullptr);
		}

		::System::Void set_Method(MapMethod* arg)
		{
			((::System::Void(*)(MapMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_METHOD_OFFSET))(arg, nullptr);
		}

		::SQLite::CreateFlags* get_CreateFlags()
		{
			return (return (::SQLite::CreateFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_CREATEFLAGS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_InsertColumns()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_INSERTCOLUMNS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::SQLite::CreateFlags* arg)
		{
			((::System::Void(*)(::System::Type*, ::SQLite::CreateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Column* FindColumn(::System::String* str)
		{
			return (return (Column*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_FINDCOLUMN_OFFSET))(str, nullptr);
		}

		::System::String* get_GetByPrimaryKeySql()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_GETBYPRIMARYKEYSQL_OFFSET))(nullptr);
		}

		MapMethod* get_Method()
		{
			return (return (MapMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_METHOD_OFFSET))(nullptr);
		}

		::System::String* get_TableName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_TABLENAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_InsertOrReplaceColumns()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_INSERTORREPLACECOLUMNS_OFFSET))(nullptr);
		}

		::System::Void set_MappedType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_MAPPEDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Columns(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_SET_COLUMNS_OFFSET))(arg, nullptr);
		}

		Column* get_PK()
		{
			return (return (Column*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GET_PK_OFFSET))(nullptr);
		}

		Il2CppObject* GetFieldsFromValueTuple(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEMAPPING_GETFIELDSFROMVALUETUPLE_OFFSET))(arg, nullptr);
		}

	};
}

