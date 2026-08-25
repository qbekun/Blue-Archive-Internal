#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATEGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATEMETHODCALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATEPARAMETERIZEDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATEDEFAULTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATEGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATEGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94B1160)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ReflectionDelegateFactory_TypeDefinitionIndex = 31883;

	class ReflectionDelegateFactory : public Il2CppObject
	{
	public:
		Il2CppObject* CreateGet(::System::Reflection::MemberInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATEGET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateSet(::System::Reflection::MemberInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATESET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateMethodCall(::System::Reflection::MethodBase* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATEMETHODCALL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateParameterizedConstructor(::System::Reflection::MethodBase* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATEPARAMETERIZEDCONSTRUCTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateDefaultConstructor(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATEDEFAULTCONSTRUCTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateGet(::System::Reflection::PropertyInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::PropertyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATEGET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateGet(::System::Reflection::FieldInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::FieldInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATEGET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateSet(::System::Reflection::FieldInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::FieldInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATESET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateSet(::System::Reflection::PropertyInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::PropertyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_CREATESET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONDELEGATEFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

