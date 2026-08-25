#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x969B200)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_GET_INTERPRETER_OFFSET UNITYSDK_OFFSET(0x969B250)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x969B260)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x969B270)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LightDelegateCreator_TypeDefinitionIndex = 33334;

	class LightDelegateCreator : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::LambdaExpression* _lambda; // 0x10
		::System::Linq::Expressions::Interpreter::Interpreter* _Interpreter_k__BackingField; // 0x18

		::System::Void .ctor(::System::Linq::Expressions::Interpreter::Interpreter* arg, ::System::Linq::Expressions::LambdaExpression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::Interpreter*, ::System::Linq::Expressions::LambdaExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::Interpreter* get_Interpreter()
		{
			return (return (::System::Linq::Expressions::Interpreter::Interpreter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_GET_INTERPRETER_OFFSET))(nullptr);
		}

		::System::Delegate* CreateDelegate()
		{
			return (return (::System::Delegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_CREATEDELEGATE_OFFSET))(nullptr);
		}

		::System::Delegate* CreateDelegate(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Delegate*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTDELEGATECREATOR_CREATEDELEGATE_OFFSET))(arg, nullptr);
		}

	};
}

