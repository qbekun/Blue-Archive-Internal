#pragma once
#include "../unitysdk.h"

#define SQLITE_ORM_GETTYPE_OFFSET UNITYSDK_OFFSET(0xA1C3A0)
#define SQLITE_ORM_SQLDECL_OFFSET UNITYSDK_OFFSET(0xA19A60)
#define SQLITE_ORM_SQLTYPE_OFFSET UNITYSDK_OFFSET(0xA23BB0)
#define SQLITE_ORM_ISPK_OFFSET UNITYSDK_OFFSET(0xA22930)
#define SQLITE_ORM_COLLATION_OFFSET UNITYSDK_OFFSET(0xA228C0)
#define SQLITE_ORM_ISAUTOINC_OFFSET UNITYSDK_OFFSET(0xA22A60)
#define SQLITE_ORM_GETFIELD_OFFSET UNITYSDK_OFFSET(0xA24390)
#define SQLITE_ORM_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0xA24420)
#define SQLITE_ORM_INFLATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA244B0)
#define SQLITE_ORM_GETINDICES_OFFSET UNITYSDK_OFFSET(0xA22B90)
#define SQLITE_ORM_MAXSTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0xA22D00)
#define SQLITE_ORM_MAXSTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0xA244F0)
#define SQLITE_ORM_ISMARKEDNOTNULL_OFFSET UNITYSDK_OFFSET(0xA22BD0)

namespace SQLite
{
	inline static constexpr unsigned int Orm_TypeDefinitionIndex = 36618;

	class Orm : public Il2CppObject
	{
	public:
		::System::Int32 DefaultMaxStringLength; // 0x0
		::System::String* ImplicitPkName; // 0x0
		::System::String* ImplicitIndexSuffix; // 0x0

		::System::Type* GetType(::System::Object* arg)
		{
			return (return (::System::Type*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ORM_GETTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* SqlDecl(Column* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(Column*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ORM_SQLDECL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* SqlType(Column* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(Column*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ORM_SQLTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsPK(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ORM_ISPK_OFFSET))(arg, nullptr);
		}

		::System::String* Collation(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::String*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ORM_COLLATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAutoInc(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ORM_ISAUTOINC_OFFSET))(arg, nullptr);
		}

		::System::Reflection::FieldInfo* GetField(::System::Reflection::TypeInfo* arg, ::System::String* str)
		{
			return (return (::System::Reflection::FieldInfo*(*)(::System::Reflection::TypeInfo*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ORM_GETFIELD_OFFSET))(arg, str, nullptr);
		}

		::System::Reflection::PropertyInfo* GetProperty(::System::Reflection::TypeInfo* arg, ::System::String* str)
		{
			return (return (::System::Reflection::PropertyInfo*(*)(::System::Reflection::TypeInfo*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ORM_GETPROPERTY_OFFSET))(arg, str, nullptr);
		}

		::System::Object* InflateAttribute(::System::Reflection::CustomAttributeData* arg)
		{
			return (return (::System::Object*(*)(::System::Reflection::CustomAttributeData*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ORM_INFLATEATTRIBUTE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetIndices(::System::Reflection::MemberInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ORM_GETINDICES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* MaxStringLength(::System::Reflection::MemberInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ORM_MAXSTRINGLENGTH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* MaxStringLength(::System::Reflection::PropertyInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::PropertyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ORM_MAXSTRINGLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMarkedNotNull(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ORM_ISMARKEDNOTNULL_OFFSET))(arg, nullptr);
		}

	};
}

