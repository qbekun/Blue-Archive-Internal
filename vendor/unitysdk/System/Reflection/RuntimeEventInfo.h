#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_EVENT_INFO_OFFSET UNITYSDK_OFFSET(0x9249FE0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETEVENTINFO_OFFSET UNITYSDK_OFFSET(0x9249FF0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x924A050)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_BINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x924A170)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETDECLARINGTYPEINTERNAL_OFFSET UNITYSDK_OFFSET(0x924A3A0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET UNITYSDK_OFFSET(0x924A430)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETRUNTIMEMODULE_OFFSET UNITYSDK_OFFSET(0x924A0E0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x924A4C0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETBINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x924A180)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETADDMETHOD_OFFSET UNITYSDK_OFFSET(0x924A5D0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETRAISEMETHOD_OFFSET UNITYSDK_OFFSET(0x924A650)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETREMOVEMETHOD_OFFSET UNITYSDK_OFFSET(0x924A6D0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x924A750)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x924A780)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x924A7B0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x924A7E0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x924A870)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x924A8D0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x924A920)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x924A980)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_METADATATOKEN_OFFSET UNITYSDK_OFFSET(0x924A9D0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_HASSAMEMETADATADEFINITIONAS_OFFSET UNITYSDK_OFFSET(0x924A9F0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_METADATA_TOKEN_OFFSET UNITYSDK_OFFSET(0x924A9E0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x924AA40)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeEventInfo_TypeDefinitionIndex = 24912;

	class RuntimeEventInfo : public Il2CppObject
	{
	public:
		::System::Int32 klass; // 0x18
		::System::Int32 handle; // 0x20

		::System::Void get_event_info(::System::Reflection::RuntimeEventInfo* arg, ::System::Reflection::MonoEventInfo&* arg)
		{
			((::System::Void(*)(::System::Reflection::RuntimeEventInfo*, ::System::Reflection::MonoEventInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_EVENT_INFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::MonoEventInfo* GetEventInfo(::System::Reflection::RuntimeEventInfo* arg)
		{
			return (return (::System::Reflection::MonoEventInfo*(*)(::System::Reflection::RuntimeEventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETEVENTINFO_OFFSET))(arg, nullptr);
		}

		::System::Reflection::Module* get_Module()
		{
			return (return (::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_MODULE_OFFSET))(nullptr);
		}

		::System::Reflection::BindingFlags* get_BindingFlags()
		{
			return (return (::System::Reflection::BindingFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_BINDINGFLAGS_OFFSET))(nullptr);
		}

		::System::RuntimeType* GetDeclaringTypeInternal()
		{
			return (return (::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETDECLARINGTYPEINTERNAL_OFFSET))(nullptr);
		}

		::System::RuntimeType* get_ReflectedTypeInternal()
		{
			return (return (::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET))(nullptr);
		}

		::System::Reflection::RuntimeModule* GetRuntimeModule()
		{
			return (return (::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETRUNTIMEMODULE_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::BindingFlags* GetBindingFlags()
		{
			return (return (::System::Reflection::BindingFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETBINDINGFLAGS_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* GetAddMethod(::System::Boolean arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETADDMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetRaiseMethod(::System::Boolean arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETRAISEMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetRemoveMethod(::System::Boolean arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETREMOVEMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Type* get_DeclaringType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_DECLARINGTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_ReflectedType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_REFLECTEDTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCustomAttributesData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETCUSTOMATTRIBUTESDATA_OFFSET))(nullptr);
		}

		::System::Int32 get_MetadataToken()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_METADATATOKEN_OFFSET))(nullptr);
		}

		::System::Boolean HasSameMetadataDefinitionAs(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_HASSAMEMETADATADEFINITIONAS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_metadata_token(::System::Reflection::RuntimeEventInfo* arg)
		{
			return (return (::System::Int32(*)(::System::Reflection::RuntimeEventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_METADATA_TOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

