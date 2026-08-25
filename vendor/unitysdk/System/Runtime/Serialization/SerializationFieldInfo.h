#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x92025B0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_METADATATOKEN_OFFSET UNITYSDK_OFFSET(0x92025E0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F9A90)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9202610)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x9202620)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x9202650)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9202680)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x92026B0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x92026E0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_FIELDTYPE_OFFSET UNITYSDK_OFFSET(0x9202710)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9202740)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_INTERNALGETVALUE_OFFSET UNITYSDK_OFFSET(0x91FAB20)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9202770)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_INTERNALSETVALUE_OFFSET UNITYSDK_OFFSET(0x91FA350)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_FIELDINFO_OFFSET UNITYSDK_OFFSET(0x92027C0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_FIELDHANDLE_OFFSET UNITYSDK_OFFSET(0x92027D0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9202800)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationFieldInfo_TypeDefinitionIndex = 24609;

	class SerializationFieldInfo : public Il2CppObject
	{
	public:
		::System::Reflection::RuntimeFieldInfo* m_field; // 0x10
		::System::String* m_serializationName; // 0x18

		::System::Reflection::Module* get_Module()
		{
			return (return (::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_MODULE_OFFSET))(nullptr);
		}

		::System::Int32 get_MetadataToken()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_METADATATOKEN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Reflection::RuntimeFieldInfo* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Reflection::RuntimeFieldInfo*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Type* get_DeclaringType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_DECLARINGTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_ReflectedType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_REFLECTEDTYPE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* get_FieldType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_FIELDTYPE_OFFSET))(nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* InternalGetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_INTERNALGETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_SETVALUE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InternalSetValue(::System::Object* arg, ::System::Object* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_INTERNALSETVALUE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Reflection::RuntimeFieldInfo* get_FieldInfo()
		{
			return (return (::System::Reflection::RuntimeFieldInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_FIELDINFO_OFFSET))(nullptr);
		}

		::System::RuntimeFieldHandle* get_FieldHandle()
		{
			return (return (::System::RuntimeFieldHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_FIELDHANDLE_OFFSET))(nullptr);
		}

		::System::Reflection::FieldAttributes* get_Attributes()
		{
			return (return (::System::Reflection::FieldAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

	};
}

