#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9251B70)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x9251BC0)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9251C10)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9251C60)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETMETHODIMPLEMENTATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x9251CB0)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_METHODHANDLE_OFFSET UNITYSDK_OFFSET(0x9251D00)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9251D50)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x9251DA0)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9251DF0)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9251E40)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x9251E90)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9251EE0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int ConstructorBuilder_TypeDefinitionIndex = 24928;

	class ConstructorBuilder : public Il2CppObject
	{
	public:
		::System::Reflection::MethodAttributes* get_Attributes()
		{
			return (return (::System::Reflection::MethodAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Type* get_DeclaringType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_DECLARINGTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_NAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetParameters()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETPARAMETERS_OFFSET))(nullptr);
		}

		::System::Reflection::MethodImplAttributes* GetMethodImplementationFlags()
		{
			return (return (::System::Reflection::MethodImplAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETMETHODIMPLEMENTATIONFLAGS_OFFSET))(nullptr);
		}

		::System::RuntimeMethodHandle* get_MethodHandle()
		{
			return (return (::System::RuntimeMethodHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_METHODHANDLE_OFFSET))(nullptr);
		}

		::System::Object* Invoke(::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* get_ReflectedType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_REFLECTEDTYPE_OFFSET))(nullptr);
		}

		::System::Object* Invoke(::System::Object* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_INVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

