#pragma once
#include "../unitysdk.h"

#define SYSTEM_MONOCUSTOMATTRS_ISUSERCATTRPROVIDER_OFFSET UNITYSDK_OFFSET(0x93B88C0)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESINTERNAL_OFFSET UNITYSDK_OFFSET(0x93B8AA0)
#define SYSTEM_MONOCUSTOMATTRS_GETPSEUDOCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x93B8AB0)
#define SYSTEM_MONOCUSTOMATTRS_GETPSEUDOCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x93B8DC0)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESBASE_OFFSET UNITYSDK_OFFSET(0x93B8F50)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x93B9120)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x93BA160)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x93BA2E0)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x93BA2F0)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x93BA610)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESDATABASE_OFFSET UNITYSDK_OFFSET(0x93BA410)
#define SYSTEM_MONOCUSTOMATTRS_GETPSEUDOCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x93BBAF0)
#define SYSTEM_MONOCUSTOMATTRS_GETPSEUDOCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x93BBE00)
#define SYSTEM_MONOCUSTOMATTRS_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x93BC080)
#define SYSTEM_MONOCUSTOMATTRS_ISDEFINEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x93BC360)
#define SYSTEM_MONOCUSTOMATTRS_GETBASEPROPERTYDEFINITION_OFFSET UNITYSDK_OFFSET(0x93BC370)
#define SYSTEM_MONOCUSTOMATTRS_GETBASEEVENTDEFINITION_OFFSET UNITYSDK_OFFSET(0x93BC680)
#define SYSTEM_MONOCUSTOMATTRS_GETBASE_OFFSET UNITYSDK_OFFSET(0x93B9B80)
#define SYSTEM_MONOCUSTOMATTRS_RETRIEVEATTRIBUTEUSAGENOCACHE_OFFSET UNITYSDK_OFFSET(0x93BC8A0)
#define SYSTEM_MONOCUSTOMATTRS_RETRIEVEATTRIBUTEUSAGE_OFFSET UNITYSDK_OFFSET(0x93B9F40)
#define SYSTEM_MONOCUSTOMATTRS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93BCB00)

namespace System
{
	inline static constexpr unsigned int MonoCustomAttrs_TypeDefinitionIndex = 23980;

	class MonoCustomAttrs : public Il2CppObject
	{
	public:
		::System::Reflection::Assembly* corlib; // 0x0
		Il2CppObject* usage_cache;
		::System::AttributeUsageAttribute* DefaultAttributeUsage; // 0x8

		::System::Boolean IsUserCattrProvider(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_ISUSERCATTRPROVIDER_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributesInternal(::System::Reflection::ICustomAttributeProvider* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPseudoCustomAttributes(::System::Reflection::ICustomAttributeProvider* arg, ::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETPSEUDOCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPseudoCustomAttributes(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETPSEUDOCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributesBase(::System::Reflection::ICustomAttributeProvider* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESBASE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Reflection::ICustomAttributeProvider* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Reflection::ICustomAttributeProvider* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributesDataInternal(::System::Reflection::ICustomAttributeProvider* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESDATAINTERNAL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCustomAttributesData(::System::Reflection::ICustomAttributeProvider* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESDATA_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCustomAttributesData(::System::Reflection::ICustomAttributeProvider* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetCustomAttributesDataBase(::System::Reflection::ICustomAttributeProvider* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESDATABASE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPseudoCustomAttributesData(::System::Reflection::ICustomAttributeProvider* arg, ::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETPSEUDOCUSTOMATTRIBUTESDATA_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPseudoCustomAttributesData(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETPSEUDOCUSTOMATTRIBUTESDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDefined(::System::Reflection::ICustomAttributeProvider* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_ISDEFINED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsDefinedInternal(::System::Reflection::ICustomAttributeProvider* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_ISDEFINEDINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::PropertyInfo* GetBasePropertyDefinition(::System::Reflection::RuntimePropertyInfo* arg)
		{
			return (return (::System::Reflection::PropertyInfo*(*)(::System::Reflection::RuntimePropertyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETBASEPROPERTYDEFINITION_OFFSET))(arg, nullptr);
		}

		::System::Reflection::EventInfo* GetBaseEventDefinition(::System::Reflection::RuntimeEventInfo* arg)
		{
			return (return (::System::Reflection::EventInfo*(*)(::System::Reflection::RuntimeEventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETBASEEVENTDEFINITION_OFFSET))(arg, nullptr);
		}

		::System::Reflection::ICustomAttributeProvider* GetBase(::System::Reflection::ICustomAttributeProvider* arg)
		{
			return (return (::System::Reflection::ICustomAttributeProvider*(*)(::System::Reflection::ICustomAttributeProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETBASE_OFFSET))(arg, nullptr);
		}

		::System::AttributeUsageAttribute* RetrieveAttributeUsageNoCache(::System::Type* arg)
		{
			return (return (::System::AttributeUsageAttribute*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_RETRIEVEATTRIBUTEUSAGENOCACHE_OFFSET))(arg, nullptr);
		}

		::System::AttributeUsageAttribute* RetrieveAttributeUsage(::System::Type* arg)
		{
			return (return (::System::AttributeUsageAttribute*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_RETRIEVEATTRIBUTEUSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

