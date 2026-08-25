#pragma once
#include "../../unitysdk.h"

namespace Mono { class RuntimePropertyHandle; }

#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_PROPERTY_INFO_OFFSET UNITYSDK_OFFSET(0x9250550)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_BINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x9250560)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x9250570)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETDECLARINGTYPEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9250690)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9250720)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETRUNTIMEMODULE_OFFSET UNITYSDK_OFFSET(0x9250600)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x92507B0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_FORMATNAMEANDSIG_OFFSET UNITYSDK_OFFSET(0x92507C0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9250920)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_SERIALIZATIONTOSTRING_OFFSET UNITYSDK_OFFSET(0x9250A60)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_CACHEPROPERTYINFO_OFFSET UNITYSDK_OFFSET(0x9250A70)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x9250AA0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x9250AE0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9250B20)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x9250BD0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x9250C00)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9250C30)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETGETMETHOD_OFFSET UNITYSDK_OFFSET(0x9250C60)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETINDEXPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9250CD0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETSETMETHOD_OFFSET UNITYSDK_OFFSET(0x9250F10)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x9250F80)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9250FE0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9251030)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETTERADAPTERFRAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_STATICGETTERADAPTERFRAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9251090)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x92510D0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9251310)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x9251540)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_HASSAMEMETADATADEFINITIONAS_OFFSET UNITYSDK_OFFSET(0x9251590)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_METADATATOKEN_OFFSET UNITYSDK_OFFSET(0x92515E0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_METADATA_TOKEN_OFFSET UNITYSDK_OFFSET(0x92515F0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_INTERNAL_FROM_HANDLE_TYPE_OFFSET UNITYSDK_OFFSET(0x9251600)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETPROPERTYFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x9251610)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9251700)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimePropertyInfo_TypeDefinitionIndex = 24925;

	class RuntimePropertyInfo : public Il2CppObject
	{
	public:
		::System::Int32 klass; // 0x10
		::System::Int32 prop; // 0x18
		::System::Reflection::MonoPropertyInfo* info; // 0x20
		::System::Reflection::PInfo* cached; // 0x50
		GetterAdapter* cached_getter; // 0x58

		::System::Void get_property_info(::System::Reflection::RuntimePropertyInfo* arg, ::System::Reflection::MonoPropertyInfo&* arg, ::System::Reflection::PInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::RuntimePropertyInfo*, ::System::Reflection::MonoPropertyInfo&*, ::System::Reflection::PInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_PROPERTY_INFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Reflection::BindingFlags* get_BindingFlags()
		{
			return (return (::System::Reflection::BindingFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_BINDINGFLAGS_OFFSET))(nullptr);
		}

		::System::Reflection::Module* get_Module()
		{
			return (return (::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_MODULE_OFFSET))(nullptr);
		}

		::System::RuntimeType* GetDeclaringTypeInternal()
		{
			return (return (::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETDECLARINGTYPEINTERNAL_OFFSET))(nullptr);
		}

		::System::RuntimeType* get_ReflectedTypeInternal()
		{
			return (return (::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET))(nullptr);
		}

		::System::Reflection::RuntimeModule* GetRuntimeModule()
		{
			return (return (::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETRUNTIMEMODULE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* FormatNameAndSig(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_FORMATNAMEANDSIG_OFFSET))(arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::String* SerializationToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_SERIALIZATIONTOSTRING_OFFSET))(nullptr);
		}

		::System::Void CachePropertyInfo(::System::Reflection::PInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::PInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_CACHEPROPERTYINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Type* get_PropertyType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_PROPERTYTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_ReflectedType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_REFLECTEDTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_DeclaringType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_DECLARINGTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* GetGetMethod(::System::Boolean arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETGETMETHOD_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetIndexParameters()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETINDEXPARAMETERS_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* GetSetMethod(::System::Boolean arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETSETMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetterAdapterFrame(Il2CppObject* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETTERADAPTERFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* StaticGetterAdapterFrame(Il2CppObject* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_STATICGETTERADAPTERFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETVALUE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_SETVALUE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetCustomAttributesData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETCUSTOMATTRIBUTESDATA_OFFSET))(nullptr);
		}

		::System::Boolean HasSameMetadataDefinitionAs(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_HASSAMEMETADATADEFINITIONAS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MetadataToken()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_METADATATOKEN_OFFSET))(nullptr);
		}

		::System::Int32 get_metadata_token(::System::Reflection::RuntimePropertyInfo* arg)
		{
			return (return (::System::Int32(*)(::System::Reflection::RuntimePropertyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_METADATA_TOKEN_OFFSET))(arg, nullptr);
		}

		::System::Reflection::PropertyInfo* internal_from_handle_type(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Reflection::PropertyInfo*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_INTERNAL_FROM_HANDLE_TYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::PropertyInfo* GetPropertyFromHandle(::Mono::RuntimePropertyHandle* arg, ::System::RuntimeTypeHandle* arg)
		{
			return (return (::System::Reflection::PropertyInfo*(*)(::Mono::RuntimePropertyHandle*, ::System::RuntimeTypeHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETPROPERTYFROMHANDLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

