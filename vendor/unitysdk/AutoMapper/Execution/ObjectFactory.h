#pragma once
#include "../../unitysdk.h"

namespace AutoMapper::Internal { class IGlobalConfiguration; }

#define AUTOMAPPER_EXECUTION_OBJECTFACTORY_GENERATECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x4D3680)
#define AUTOMAPPER_EXECUTION_OBJECTFACTORY_GENERATECONSTRUCTOREXPRESSION_OFFSET UNITYSDK_OFFSET(0x4D37E0)
#define AUTOMAPPER_EXECUTION_OBJECTFACTORY_CALLCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x4D3DE0)
#define AUTOMAPPER_EXECUTION_OBJECTFACTORY_CREATEINTERFACEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x4D3980)
#define AUTOMAPPER_EXECUTION_OBJECTFACTORY_GETIENUMERABLEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x4D4300)
#define AUTOMAPPER_EXECUTION_OBJECTFACTORY_CREATECOLLECTION_OFFSET UNITYSDK_OFFSET(0x4D44A0)
#define AUTOMAPPER_EXECUTION_OBJECTFACTORY_CREATEREADONLYDICTIONARY_OFFSET UNITYSDK_OFFSET(0x4D4570)
#define AUTOMAPPER_EXECUTION_OBJECTFACTORY_INVALIDTYPE_OFFSET UNITYSDK_OFFSET(0x4D3D30)
#define AUTOMAPPER_EXECUTION_OBJECTFACTORY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4D4710)

namespace AutoMapper::Execution
{
	inline static constexpr unsigned int ObjectFactory_TypeDefinitionIndex = 37648;

	class ObjectFactory : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Expression* EmptyString; // 0x0
		Il2CppObject* CtorCache; // 0x8

		Il2CppObject* GenerateConstructor(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_EXECUTION_OBJECTFACTORY_GENERATECONSTRUCTOR_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GenerateConstructorExpression(::System::Type* arg, ::AutoMapper::Internal::IGlobalConfiguration* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Type*, ::AutoMapper::Internal::IGlobalConfiguration*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_EXECUTION_OBJECTFACTORY_GENERATECONSTRUCTOREXPRESSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* CallConstructor(::System::Type* arg, ::AutoMapper::Internal::IGlobalConfiguration* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Type*, ::AutoMapper::Internal::IGlobalConfiguration*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_EXECUTION_OBJECTFACTORY_CALLCONSTRUCTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* CreateInterfaceExpression(::System::Type* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_EXECUTION_OBJECTFACTORY_CREATEINTERFACEEXPRESSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetIEnumerableArguments(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_EXECUTION_OBJECTFACTORY_GETIENUMERABLEARGUMENTS_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* CreateCollection(::System::Type* arg, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Type*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_EXECUTION_OBJECTFACTORY_CREATECOLLECTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* CreateReadOnlyDictionary(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_EXECUTION_OBJECTFACTORY_CREATEREADONLYDICTIONARY_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* InvalidType(::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_EXECUTION_OBJECTFACTORY_INVALIDTYPE_OFFSET))(arg, str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_EXECUTION_OBJECTFACTORY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

