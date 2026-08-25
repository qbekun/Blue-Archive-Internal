#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x966C8A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x966C8D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x966C930)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GETARRAYACCESSOR_OFFSET UNITYSDK_OFFSET(0x966CAC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER1_OFFSET UNITYSDK_OFFSET(0x966D030)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER2_OFFSET UNITYSDK_OFFSET(0x966D060)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER3_OFFSET UNITYSDK_OFFSET(0x966D090)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x966D0D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_TRYGETLIGHTLAMBDATARGET_OFFSET UNITYSDK_OFFSET(0x966D0F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_INTERPRETLAMBDAINVOKE_OFFSET UNITYSDK_OFFSET(0x966D240)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x966D2A0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int CallInstruction_TypeDefinitionIndex = 33155;

	class CallInstruction : public Il2CppObject
	{
	public:
		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::CallInstruction* Create(::System::Reflection::MethodInfo* arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::CallInstruction*(*)(::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::CallInstruction* Create(::System::Reflection::MethodInfo* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::CallInstruction*(*)(::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::CallInstruction* GetArrayAccessor(::System::Reflection::MethodInfo* arg, ::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::CallInstruction*(*)(::System::Reflection::MethodInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GETARRAYACCESSOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ArrayItemSetter1(::System::Array* arg, ::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER1_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ArrayItemSetter2(::System::Array* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER2_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ArrayItemSetter3(::System::Array* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_ARRAYITEMSETTER3_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_ConsumedStack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(nullptr);
		}

		::System::Boolean TryGetLightLambdaTarget(::System::Object* arg, ::System::Linq::Expressions::Interpreter::LightLambda&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Linq::Expressions::Interpreter::LightLambda&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_TRYGETLIGHTLAMBDATARGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* InterpretLambdaInvoke(::System::Linq::Expressions::Interpreter::LightLambda* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Linq::Expressions::Interpreter::LightLambda*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_INTERPRETLAMBDAINVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CALLINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

