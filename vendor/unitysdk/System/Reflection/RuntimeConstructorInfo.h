#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x924E4B0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETRUNTIMEMODULE_OFFSET UNITYSDK_OFFSET(0x924E540)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_BINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x924E5D0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET UNITYSDK_OFFSET(0x924E5E0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x924E670)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_SERIALIZATIONTOSTRING_OFFSET UNITYSDK_OFFSET(0x924E7C0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_SERIALIZATIONINVOKE_OFFSET UNITYSDK_OFFSET(0x924E7E0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETMETHODIMPLEMENTATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x924E910)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x924E940)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETPARAMETERSINTERNAL_OFFSET UNITYSDK_OFFSET(0x924E950)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETPARAMETERSCOUNT_OFFSET UNITYSDK_OFFSET(0x924E960)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0x924E990)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x924E9A0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_DOINVOKE_OFFSET UNITYSDK_OFFSET(0x924EAC0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0x924ECD0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x924EE90)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_METHODHANDLE_OFFSET UNITYSDK_OFFSET(0x924EEC0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x924EED0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_CALLINGCONVENTION_OFFSET UNITYSDK_OFFSET(0x924EEE0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_CONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x924EF10)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x924EF50)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x924EF60)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x924EF90)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x924EFA0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x924F000)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x924F050)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x924F0B0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x924F110)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_CORE_CLR_SECURITY_LEVEL_OFFSET UNITYSDK_OFFSET(0x924F160)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_HASSAMEMETADATADEFINITIONAS_OFFSET UNITYSDK_OFFSET(0x924F170)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_ISSECURITYCRITICAL_OFFSET UNITYSDK_OFFSET(0x924F1C0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_METADATATOKEN_OFFSET UNITYSDK_OFFSET(0x924F1D0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_METADATA_TOKEN_OFFSET UNITYSDK_OFFSET(0x924F1E0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x924F1F0)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeConstructorInfo_TypeDefinitionIndex = 24917;

	class RuntimeConstructorInfo : public Il2CppObject
	{
	public:
		::System::Int32 mhandle; // 0x10
		::System::String* name; // 0x18
		::System::Type* reftype; // 0x20

		::System::Reflection::Module* get_Module()
		{
			return (return (::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_MODULE_OFFSET))(nullptr);
		}

		::System::Reflection::RuntimeModule* GetRuntimeModule()
		{
			return (return (::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETRUNTIMEMODULE_OFFSET))(nullptr);
		}

		::System::Reflection::BindingFlags* get_BindingFlags()
		{
			return (return (::System::Reflection::BindingFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_BINDINGFLAGS_OFFSET))(nullptr);
		}

		::System::RuntimeType* get_ReflectedTypeInternal()
		{
			return (return (::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::String* SerializationToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_SERIALIZATIONTOSTRING_OFFSET))(nullptr);
		}

		::System::Void SerializationInvoke(::System::Object* arg, ::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_SERIALIZATIONINVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Reflection::MethodImplAttributes* GetMethodImplementationFlags()
		{
			return (return (::System::Reflection::MethodImplAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETMETHODIMPLEMENTATIONFLAGS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetParameters()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETPARAMETERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetParametersInternal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETPARAMETERSINTERNAL_OFFSET))(nullptr);
		}

		::System::Int32 GetParametersCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETPARAMETERSCOUNT_OFFSET))(nullptr);
		}

		::System::Object* InternalInvoke(::System::Object* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Exception&* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Exception&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_INTERNALINVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* Invoke(::System::Object* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_INVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Object* DoInvoke(::System::Object* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_DOINVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Object* InternalInvoke(::System::Object* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_INTERNALINVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* Invoke(::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::RuntimeMethodHandle* get_MethodHandle()
		{
			return (return (::System::RuntimeMethodHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_METHODHANDLE_OFFSET))(nullptr);
		}

		::System::Reflection::MethodAttributes* get_Attributes()
		{
			return (return (::System::Reflection::MethodAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Reflection::CallingConventions* get_CallingConvention()
		{
			return (return (::System::Reflection::CallingConventions*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_CALLINGCONVENTION_OFFSET))(nullptr);
		}

		::System::Boolean get_ContainsGenericParameters()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_CONTAINSGENERICPARAMETERS_OFFSET))(nullptr);
		}

		::System::Type* get_ReflectedType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_REFLECTEDTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_DeclaringType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_DECLARINGTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_TOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* GetCustomAttributesData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETCUSTOMATTRIBUTESDATA_OFFSET))(nullptr);
		}

		::System::Int32 get_core_clr_security_level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_CORE_CLR_SECURITY_LEVEL_OFFSET))(nullptr);
		}

		::System::Boolean HasSameMetadataDefinitionAs(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_HASSAMEMETADATADEFINITIONAS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSecurityCritical()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_ISSECURITYCRITICAL_OFFSET))(nullptr);
		}

		::System::Int32 get_MetadataToken()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_METADATATOKEN_OFFSET))(nullptr);
		}

		::System::Int32 get_metadata_token(::System::Reflection::RuntimeConstructorInfo* arg)
		{
			return (return (::System::Int32(*)(::System::Reflection::RuntimeConstructorInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_METADATA_TOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

