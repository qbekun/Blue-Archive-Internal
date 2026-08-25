#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x9253CE0)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x9253D30)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x9253D80)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9253DD0)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9253E20)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x9253E70)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9253EC0)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9253F10)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETGETMETHOD_OFFSET UNITYSDK_OFFSET(0x9253F60)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETINDEXPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9253FB0)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETSETMETHOD_OFFSET UNITYSDK_OFFSET(0x9254000)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9254050)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x92540A0)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_SETVALUE_OFFSET UNITYSDK_OFFSET(0x92540F0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int PropertyBuilder_TypeDefinitionIndex = 24939;

	class PropertyBuilder : public Il2CppObject
	{
	public:
		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Type* get_DeclaringType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_DECLARINGTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Type* get_PropertyType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_PROPERTYTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_ReflectedType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_REFLECTEDTYPE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetGetMethod(::System::Boolean arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETGETMETHOD_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetIndexParameters()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETINDEXPARAMETERS_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* GetSetMethod(::System::Boolean arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETSETMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETVALUE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_SETVALUE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

