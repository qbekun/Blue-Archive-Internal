#pragma once
#include "../unitysdk.h"

#define SYSTEM_SECURITYUTILS_DEMANDREFLECTIONACCESS_OFFSET UNITYSDK_OFFSET(0x9AD06B0)
#define SYSTEM_SECURITYUTILS_DEMANDGRANTSET_OFFSET UNITYSDK_OFFSET(0x9AD06C0)
#define SYSTEM_SECURITYUTILS_HASREFLECTIONPERMISSION_OFFSET UNITYSDK_OFFSET(0x9AD06D0)
#define SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9AD06E0)
#define SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9AD06F0)
#define SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9AD07E0)
#define SYSTEM_SECURITYUTILS_SECURECONSTRUCTORINVOKE_OFFSET UNITYSDK_OFFSET(0x9AD07F0)
#define SYSTEM_SECURITYUTILS_SECURECONSTRUCTORINVOKE_OFFSET UNITYSDK_OFFSET(0x9AD0810)
#define SYSTEM_SECURITYUTILS_GENERICARGUMENTSAREVISIBLE_OFFSET UNITYSDK_OFFSET(0x9AD0970)
#define SYSTEM_SECURITYUTILS_METHODINFOINVOKE_OFFSET UNITYSDK_OFFSET(0x9AD0A00)

namespace System
{
	inline static constexpr unsigned int SecurityUtils_TypeDefinitionIndex = 29166;

	class SecurityUtils : public Il2CppObject
	{
	public:
		::System::Void DemandReflectionAccess(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_DEMANDREFLECTIONACCESS_OFFSET))(arg, nullptr);
		}

		::System::Void DemandGrantSet(::System::Reflection::Assembly* arg)
		{
			((::System::Void(*)(::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_DEMANDGRANTSET_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasReflectionPermission(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_HASREFLECTIONPERMISSION_OFFSET))(arg, nullptr);
		}

		::System::Object* SecureCreateInstance(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Object* SecureCreateInstance(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* SecureCreateInstance(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_SECURECREATEINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* SecureConstructorInvoke(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_SECURECONSTRUCTORINVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* SecureConstructorInvoke(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg, ::System::Reflection::BindingFlags* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_SECURECONSTRUCTORINVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean GenericArgumentsAreVisible(::System::Reflection::MethodInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_GENERICARGUMENTSAREVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Object* MethodInfoInvoke(::System::Reflection::MethodInfo* arg, ::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Reflection::MethodInfo*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITYUTILS_METHODINFOINVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

