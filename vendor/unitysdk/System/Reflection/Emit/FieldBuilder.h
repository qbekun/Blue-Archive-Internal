#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9252D90)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x9252DA0)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_FIELDHANDLE_OFFSET UNITYSDK_OFFSET(0x9252DB0)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_FIELDTYPE_OFFSET UNITYSDK_OFFSET(0x9252DC0)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9252DD0)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x9252DE0)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9252DF0)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9252E00)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9252E10)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x9252E20)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9252E30)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int FieldBuilder_TypeDefinitionIndex = 24932;

	class FieldBuilder : public Il2CppObject
	{
	public:
		::System::Reflection::FieldAttributes* get_Attributes()
		{
			return (return (::System::Reflection::FieldAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Type* get_DeclaringType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_DECLARINGTYPE_OFFSET))(nullptr);
		}

		::System::RuntimeFieldHandle* get_FieldHandle()
		{
			return (return (::System::RuntimeFieldHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_FIELDHANDLE_OFFSET))(nullptr);
		}

		::System::Type* get_FieldType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_FIELDTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Type* get_ReflectedType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_REFLECTEDTYPE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_SETVALUE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

