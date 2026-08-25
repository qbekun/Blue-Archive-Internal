#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_MEMBERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239DE0)
#define SYSTEM_REFLECTION_MEMBERINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_MEMBERINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_MEMBERINFO_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_MEMBERINFO_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_MEMBERINFO_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x923B840)
#define SYSTEM_REFLECTION_MEMBERINFO_HASSAMEMETADATADEFINITIONAS_OFFSET UNITYSDK_OFFSET(0x923B910)
#define SYSTEM_REFLECTION_MEMBERINFO_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_MEMBERINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_MEMBERINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_MEMBERINFO_GET_CUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x923B940)
#define SYSTEM_REFLECTION_MEMBERINFO_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x923B960)
#define SYSTEM_REFLECTION_MEMBERINFO_GET_METADATATOKEN_OFFSET UNITYSDK_OFFSET(0x923B990)
#define SYSTEM_REFLECTION_MEMBERINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x9239FB0)
#define SYSTEM_REFLECTION_MEMBERINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9239FD0)
#define SYSTEM_REFLECTION_MEMBERINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x923B9E0)
#define SYSTEM_REFLECTION_MEMBERINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x923C030)
#define SYSTEM_REFLECTION_MEMBERINFO_CACHEEQUALS_OFFSET UNITYSDK_OFFSET(0x923C040)
#define SYSTEM_REFLECTION_MEMBERINFO_HASSAMEMETADATADEFINITIONASCORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_MEMBERINFO_SYSTEM.RUNTIME.INTEROPSERVICES._MEMBERINFO.GETIDSOFNAMES_OFFSET UNITYSDK_OFFSET(0x923C090)
#define SYSTEM_REFLECTION_MEMBERINFO_SYSTEM.RUNTIME.INTEROPSERVICES._MEMBERINFO.GETTYPE_OFFSET UNITYSDK_OFFSET(0x923C0C0)
#define SYSTEM_REFLECTION_MEMBERINFO_SYSTEM.RUNTIME.INTEROPSERVICES._MEMBERINFO.GETTYPEINFO_OFFSET UNITYSDK_OFFSET(0x923C0F0)
#define SYSTEM_REFLECTION_MEMBERINFO_SYSTEM.RUNTIME.INTEROPSERVICES._MEMBERINFO.GETTYPEINFOCOUNT_OFFSET UNITYSDK_OFFSET(0x923C120)
#define SYSTEM_REFLECTION_MEMBERINFO_SYSTEM.RUNTIME.INTEROPSERVICES._MEMBERINFO.INVOKE_OFFSET UNITYSDK_OFFSET(0x923C150)

namespace System::Reflection
{
	inline static constexpr unsigned int MemberInfo_TypeDefinitionIndex = 24863;

	class MemberInfo : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Reflection::MemberTypes* get_MemberType()
		{
			return (return (::System::Reflection::MemberTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_GET_MEMBERTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Type* get_DeclaringType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_GET_DECLARINGTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_ReflectedType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_GET_REFLECTEDTYPE_OFFSET))(nullptr);
		}

		::System::Reflection::Module* get_Module()
		{
			return (return (::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_GET_MODULE_OFFSET))(nullptr);
		}

		::System::Boolean HasSameMetadataDefinitionAs(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_HASSAMEMETADATADEFINITIONAS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_CustomAttributes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_GET_CUSTOMATTRIBUTES_OFFSET))(nullptr);
		}

		Il2CppObject* GetCustomAttributesData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_GETCUSTOMATTRIBUTESDATA_OFFSET))(nullptr);
		}

		::System::Int32 get_MetadataToken()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_GET_METADATATOKEN_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Reflection::MemberInfo* arg, ::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Reflection::MemberInfo* arg, ::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CacheEquals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_CACHEEQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasSameMetadataDefinitionAsCore(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_HASSAMEMETADATADEFINITIONASCORE_OFFSET))(arg, nullptr);
		}

		::System::Void System.Runtime.InteropServices._MemberInfo.GetIDsOfNames(::System::Guid&* arg, ::System::Int32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Guid&*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_SYSTEM.RUNTIME.INTEROPSERVICES._MEMBERINFO.GETIDSOFNAMES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Type* System.Runtime.InteropServices._MemberInfo.GetType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_SYSTEM.RUNTIME.INTEROPSERVICES._MEMBERINFO.GETTYPE_OFFSET))(nullptr);
		}

		::System::Void System.Runtime.InteropServices._MemberInfo.GetTypeInfo(::System::UInt32 arg, ::System::UInt32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_SYSTEM.RUNTIME.INTEROPSERVICES._MEMBERINFO.GETTYPEINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void System.Runtime.InteropServices._MemberInfo.GetTypeInfoCount(uint32_t&* arg)
		{
			((::System::Void(*)(uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_SYSTEM.RUNTIME.INTEROPSERVICES._MEMBERINFO.GETTYPEINFOCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void System.Runtime.InteropServices._MemberInfo.Invoke(::System::UInt32 arg, ::System::Guid&* arg, ::System::UInt32 arg, ::System::Int16 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Guid&*, ::System::UInt32, ::System::Int16, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_SYSTEM.RUNTIME.INTEROPSERVICES._MEMBERINFO.INVOKE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

