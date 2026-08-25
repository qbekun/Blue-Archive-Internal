#pragma once
#include "../unitysdk.h"

#define SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x93915A0)
#define SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x93915D0)
#define SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x93921A0)
#define SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x93921D0)
#define SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9392200)
#define SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9392210)
#define SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9392220)
#define SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int Activator_TypeDefinitionIndex = 23917;

	class Activator : public Il2CppObject
	{
	public:
		::System::Object* CreateInstance(::System::Type* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Object* CreateInstance(::System::Type* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Object* CreateInstance(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* CreateInstance(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* CreateInstance(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Object* CreateInstance(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* CreateInstance(::System::Type* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* CreateInstance()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACTIVATOR_CREATEINSTANCE_OFFSET))(nullptr);
		}

	};
}

