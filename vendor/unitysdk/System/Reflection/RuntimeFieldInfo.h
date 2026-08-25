#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_BINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x924AA60)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x924AA70)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETDECLARINGTYPEINTERNAL_OFFSET UNITYSDK_OFFSET(0x924AB90)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET UNITYSDK_OFFSET(0x924AC20)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETRUNTIMEMODULE_OFFSET UNITYSDK_OFFSET(0x924AB00)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x924ACB0)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_UNSAFEGETVALUE_OFFSET UNITYSDK_OFFSET(0x924ADE0)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_CHECKCONSISTENCY_OFFSET UNITYSDK_OFFSET(0x924ADF0)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_UNSAFESETVALUE_OFFSET UNITYSDK_OFFSET(0x924AF90)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_SETVALUEDIRECT_OFFSET UNITYSDK_OFFSET(0x924AFF0)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x924B160)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_FIELDHANDLE_OFFSET UNITYSDK_OFFSET(0x924B170)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_RESOLVETYPE_OFFSET UNITYSDK_OFFSET(0x924B180)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_FIELDTYPE_OFFSET UNITYSDK_OFFSET(0x924B190)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETPARENTTYPE_OFFSET UNITYSDK_OFFSET(0x924B210)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x924B220)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x924B230)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x924B240)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x924B250)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x924B2B0)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x924B300)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETFIELDOFFSET_OFFSET UNITYSDK_OFFSET(0x924B360)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x924B370)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x924B380)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x924B5B0)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_SETVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x924B610)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x924B620)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETRAWCONSTANTVALUE_OFFSET UNITYSDK_OFFSET(0x924B910)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x924B920)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_CHECKGENERIC_OFFSET UNITYSDK_OFFSET(0x924B520)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_HASSAMEMETADATADEFINITIONAS_OFFSET UNITYSDK_OFFSET(0x924B970)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_METADATATOKEN_OFFSET UNITYSDK_OFFSET(0x924B9C0)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_METADATA_TOKEN_OFFSET UNITYSDK_OFFSET(0x924B9D0)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x924B9E0)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeFieldInfo_TypeDefinitionIndex = 24914;

	class RuntimeFieldInfo : public Il2CppObject
	{
	public:
		::System::Int32 klass; // 0x10
		::System::RuntimeFieldHandle* fhandle; // 0x18
		::System::String* name; // 0x20
		::System::Type* type; // 0x28
		::System::Reflection::FieldAttributes* attrs; // 0x30

		::System::Reflection::BindingFlags* get_BindingFlags()
		{
			return (return (::System::Reflection::BindingFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_BINDINGFLAGS_OFFSET))(nullptr);
		}

		::System::Reflection::Module* get_Module()
		{
			return (return (::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_MODULE_OFFSET))(nullptr);
		}

		::System::RuntimeType* GetDeclaringTypeInternal()
		{
			return (return (::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETDECLARINGTYPEINTERNAL_OFFSET))(nullptr);
		}

		::System::RuntimeType* get_ReflectedTypeInternal()
		{
			return (return (::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET))(nullptr);
		}

		::System::Reflection::RuntimeModule* GetRuntimeModule()
		{
			return (return (::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETRUNTIMEMODULE_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* UnsafeGetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_UNSAFEGETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckConsistency(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_CHECKCONSISTENCY_OFFSET))(arg, nullptr);
		}

		::System::Void UnsafeSetValue(::System::Object* arg, ::System::Object* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_UNSAFESETVALUE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetValueDirect(::System::TypedReference* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::TypedReference*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_SETVALUEDIRECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::FieldAttributes* get_Attributes()
		{
			return (return (::System::Reflection::FieldAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::RuntimeFieldHandle* get_FieldHandle()
		{
			return (return (::System::RuntimeFieldHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_FIELDHANDLE_OFFSET))(nullptr);
		}

		::System::Type* ResolveType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_RESOLVETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_FieldType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_FIELDTYPE_OFFSET))(nullptr);
		}

		::System::Type* GetParentType(::System::Boolean arg)
		{
			return (return (::System::Type*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETPARENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* get_ReflectedType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_REFLECTEDTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_DeclaringType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_DECLARINGTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetFieldOffset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETFIELDOFFSET_OFFSET))(nullptr);
		}

		::System::Object* GetValueInternal(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETVALUEINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetValueInternal(::System::Reflection::FieldInfo* arg, ::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_SETVALUEINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_SETVALUE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Object* GetRawConstantValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETRAWCONSTANTVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* GetCustomAttributesData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETCUSTOMATTRIBUTESDATA_OFFSET))(nullptr);
		}

		::System::Void CheckGeneric()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_CHECKGENERIC_OFFSET))(nullptr);
		}

		::System::Boolean HasSameMetadataDefinitionAs(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_HASSAMEMETADATADEFINITIONAS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MetadataToken()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_METADATATOKEN_OFFSET))(nullptr);
		}

		::System::Int32 get_metadata_token(::System::Reflection::RuntimeFieldInfo* arg)
		{
			return (return (::System::Int32(*)(::System::Reflection::RuntimeFieldInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_METADATA_TOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

