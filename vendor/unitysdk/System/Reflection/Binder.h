#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_BINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239AC0)
#define SYSTEM_REFLECTION_BINDER_BINDTOFIELD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_BINDER_BINDTOMETHOD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_BINDER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_BINDER_REORDERARGUMENTARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_BINDER_SELECTMETHOD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_BINDER_SELECTPROPERTY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Reflection
{
	inline static constexpr unsigned int Binder_TypeDefinitionIndex = 24844;

	class Binder : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_BINDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Reflection::FieldInfo* BindToField(::System::Reflection::BindingFlags* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Object* arg, ::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Reflection::FieldInfo*(*)(::System::Reflection::BindingFlags*, ::Il2CppArray<::System::Object*>*, ::System::Object*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_BINDER_BINDTOFIELD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Reflection::MethodBase* BindToMethod(::System::Reflection::BindingFlags* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Object[]&* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Object&* arg)
		{
			return (return (::System::Reflection::MethodBase*(*)(::System::Reflection::BindingFlags*, ::Il2CppArray<::System::Object*>*, ::System::Object[]&*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::Object*>*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_BINDER_BINDTOMETHOD_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Object* arg, ::System::Type* arg, ::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_BINDER_CHANGETYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReorderArgumentArray(::System::Object[]&* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_BINDER_REORDERARGUMENTARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::MethodBase* SelectMethod(::System::Reflection::BindingFlags* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::MethodBase*(*)(::System::Reflection::BindingFlags*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_BINDER_SELECTMETHOD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Reflection::PropertyInfo* SelectProperty(::System::Reflection::BindingFlags* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::PropertyInfo*(*)(::System::Reflection::BindingFlags*, ::Il2CppArray<::System::Object*>*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_BINDER_SELECTPROPERTY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

