#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Utilities { class LateBoundReflectionDelegateFactory; }
namespace Newtonsoft::Json::Utilities { class ReflectionDelegateFactory; }

#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x94B0F60)
#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATEPARAMETERIZEDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x94B0FB0)
#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATEMETHODCALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATEDEFAULTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATEGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATEGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94B1150)
#define NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94B1170)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int LateBoundReflectionDelegateFactory_TypeDefinitionIndex = 31878;

	class LateBoundReflectionDelegateFactory : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory* _instance; // 0x0

		::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* get_Instance()
		{
			return (return (::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_GET_INSTANCE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateParameterizedConstructor(::System::Reflection::MethodBase* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATEPARAMETERIZEDCONSTRUCTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateMethodCall(::System::Reflection::MethodBase* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATEMETHODCALL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateDefaultConstructor(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATEDEFAULTCONSTRUCTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateGet(::System::Reflection::PropertyInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::PropertyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATEGET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateGet(::System::Reflection::FieldInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::FieldInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATEGET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateSet(::System::Reflection::FieldInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::FieldInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATESET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateSet(::System::Reflection::PropertyInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::PropertyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_CREATESET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_LATEBOUNDREFLECTIONDELEGATEFACTORY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

