#pragma once
#include "unitysdk.h"

namespace SQLite { class CreateFlags; }

#define COLUMN_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA225A0)
#define COLUMN_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA225B0)
#define COLUMN_GET_PROPERTYINFO_OFFSET UNITYSDK_OFFSET(0xA225C0)
#define COLUMN_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xA22630)
#define COLUMN_GET_COLUMNTYPE_OFFSET UNITYSDK_OFFSET(0xA22660)
#define COLUMN_SET_COLUMNTYPE_OFFSET UNITYSDK_OFFSET(0xA22670)
#define COLUMN_GET_COLLATION_OFFSET UNITYSDK_OFFSET(0xA22680)
#define COLUMN_SET_COLLATION_OFFSET UNITYSDK_OFFSET(0xA22690)
#define COLUMN_GET_ISAUTOINC_OFFSET UNITYSDK_OFFSET(0xA226A0)
#define COLUMN_SET_ISAUTOINC_OFFSET UNITYSDK_OFFSET(0xA226B0)
#define COLUMN_GET_ISAUTOGUID_OFFSET UNITYSDK_OFFSET(0xA226C0)
#define COLUMN_SET_ISAUTOGUID_OFFSET UNITYSDK_OFFSET(0xA226D0)
#define COLUMN_GET_ISPK_OFFSET UNITYSDK_OFFSET(0xA226E0)
#define COLUMN_SET_ISPK_OFFSET UNITYSDK_OFFSET(0xA226F0)
#define COLUMN_GET_INDICES_OFFSET UNITYSDK_OFFSET(0xA22700)
#define COLUMN_SET_INDICES_OFFSET UNITYSDK_OFFSET(0xA22710)
#define COLUMN_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0xA22720)
#define COLUMN_SET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0xA22730)
#define COLUMN_GET_MAXSTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0xA22740)
#define COLUMN_SET_MAXSTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0xA22750)
#define COLUMN_GET_STOREASTEXT_OFFSET UNITYSDK_OFFSET(0xA22760)
#define COLUMN_SET_STOREASTEXT_OFFSET UNITYSDK_OFFSET(0xA22770)
#define COLUMN_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21CC0)
#define COLUMN_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22D80)
#define COLUMN_SETVALUE_OFFSET UNITYSDK_OFFSET(0xA1CB50)
#define COLUMN_GETVALUE_OFFSET UNITYSDK_OFFSET(0xA15590)
#define COLUMN_GETMEMBERTYPE_OFFSET UNITYSDK_OFFSET(0xA22780)

	inline static constexpr unsigned int Column_TypeDefinitionIndex = 36607;

	class Column : public Il2CppObject
	{
	public:
		::System::Reflection::MemberInfo* _member; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::System::Type* _ColumnType_k__BackingField; // 0x20
		::System::String* _Collation_k__BackingField; // 0x28
		::System::Boolean _IsAutoInc_k__BackingField; // 0x30
		::System::Boolean _IsAutoGuid_k__BackingField; // 0x31
		::System::Boolean _IsPK_k__BackingField; // 0x32
		Il2CppObject* _Indices_k__BackingField; // 0x38
		::System::Boolean _IsNullable_k__BackingField; // 0x40
		Il2CppObject* _MaxStringLength_k__BackingField; // 0x44
		::System::Boolean _StoreAsText_k__BackingField; // 0x4C

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLUMN_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + COLUMN_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Reflection::PropertyInfo* get_PropertyInfo()
		{
			return (return (::System::Reflection::PropertyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLUMN_GET_PROPERTYINFO_OFFSET))(nullptr);
		}

		::System::String* get_PropertyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLUMN_GET_PROPERTYNAME_OFFSET))(nullptr);
		}

		::System::Type* get_ColumnType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLUMN_GET_COLUMNTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ColumnType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + COLUMN_SET_COLUMNTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Collation()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLUMN_GET_COLLATION_OFFSET))(nullptr);
		}

		::System::Void set_Collation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + COLUMN_SET_COLLATION_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsAutoInc()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COLUMN_GET_ISAUTOINC_OFFSET))(nullptr);
		}

		::System::Void set_IsAutoInc(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COLUMN_SET_ISAUTOINC_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAutoGuid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COLUMN_GET_ISAUTOGUID_OFFSET))(nullptr);
		}

		::System::Void set_IsAutoGuid(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COLUMN_SET_ISAUTOGUID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COLUMN_GET_ISPK_OFFSET))(nullptr);
		}

		::System::Void set_IsPK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COLUMN_SET_ISPK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Indices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLUMN_GET_INDICES_OFFSET))(nullptr);
		}

		::System::Void set_Indices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COLUMN_SET_INDICES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNullable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COLUMN_GET_ISNULLABLE_OFFSET))(nullptr);
		}

		::System::Void set_IsNullable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COLUMN_SET_ISNULLABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MaxStringLength()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLUMN_GET_MAXSTRINGLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_MaxStringLength(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COLUMN_SET_MAXSTRINGLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_StoreAsText()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COLUMN_GET_STOREASTEXT_OFFSET))(nullptr);
		}

		::System::Void set_StoreAsText(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COLUMN_SET_STOREASTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Reflection::MemberInfo* arg, ::SQLite::CreateFlags* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::SQLite::CreateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + COLUMN_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Reflection::PropertyInfo* arg, ::SQLite::CreateFlags* arg)
		{
			((::System::Void(*)(::System::Reflection::PropertyInfo*, ::SQLite::CreateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + COLUMN_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + COLUMN_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + COLUMN_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Type* GetMemberType(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Type*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + COLUMN_GETMEMBERTYPE_OFFSET))(arg, nullptr);
		}

	};

