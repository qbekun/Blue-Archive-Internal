#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_GET_ISFINALLYBLOCKEXIST_OFFSET UNITYSDK_OFFSET(0x9687C80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_GET_HANDLERS_OFFSET UNITYSDK_OFFSET(0x9687C90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_GET_ISCATCHBLOCKEXIST_OFFSET UNITYSDK_OFFSET(0x9687CA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9687CB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9687D10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_HASHANDLER_OFFSET UNITYSDK_OFFSET(0x9687D80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_FILTERPASSES_OFFSET UNITYSDK_OFFSET(0x9687EE0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int TryCatchFinallyHandler_TypeDefinitionIndex = 33319;

	class TryCatchFinallyHandler : public Il2CppObject
	{
	public:
		::System::Int32 TryStartIndex; // 0x10
		::System::Int32 TryEndIndex; // 0x14
		::System::Int32 FinallyStartIndex; // 0x18
		::System::Int32 FinallyEndIndex; // 0x1C
		::System::Int32 GotoEndTargetIndex; // 0x20
		::Il2CppArray<::System::Object*>* _handlers; // 0x28

		::System::Boolean get_IsFinallyBlockExist()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_GET_ISFINALLYBLOCKEXIST_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Handlers()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_GET_HANDLERS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCatchBlockExist()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_GET_ISCATCHBLOCKEXIST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean HasHandler(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg, ::System::Exception* arg, ::System::Linq::Expressions::Interpreter::ExceptionHandler&* arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Exception*, ::System::Linq::Expressions::Interpreter::ExceptionHandler&*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_HASHANDLER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean FilterPasses(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg, ::System::Object&* arg, ::System::Linq::Expressions::Interpreter::ExceptionFilter* arg)
		{
			return (return (::System::Boolean(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object&*, ::System::Linq::Expressions::Interpreter::ExceptionFilter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYCATCHFINALLYHANDLER_FILTERPASSES_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

