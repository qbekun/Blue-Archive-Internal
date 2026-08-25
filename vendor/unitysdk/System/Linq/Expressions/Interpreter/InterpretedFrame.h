#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9682C10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x9682D20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9682E40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET UNITYSDK_OFFSET(0x96741A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET UNITYSDK_OFFSET(0x96734C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET UNITYSDK_OFFSET(0x9675850)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET UNITYSDK_OFFSET(0x9675B60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET UNITYSDK_OFFSET(0x96754E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET UNITYSDK_OFFSET(0x96756A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET UNITYSDK_OFFSET(0x9675D20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_POP_OFFSET UNITYSDK_OFFSET(0x9673480)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_SETSTACKDEPTH_OFFSET UNITYSDK_OFFSET(0x9682E60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PEEK_OFFSET UNITYSDK_OFFSET(0x9682E80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_DUP_OFFSET UNITYSDK_OFFSET(0x9682EB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x9682F40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GETSTACKTRACEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x9682F50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_SAVETRACETOEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9683000)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_ENTER_OFFSET UNITYSDK_OFFSET(0x9683280)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_LEAVE_OFFSET UNITYSDK_OFFSET(0x9683300)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_ISJUMPHAPPENED_OFFSET UNITYSDK_OFFSET(0x9683350)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_REMOVECONTINUATION_OFFSET UNITYSDK_OFFSET(0x9683360)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSHCONTINUATION_OFFSET UNITYSDK_OFFSET(0x9683370)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_YIELDTOCURRENTCONTINUATION_OFFSET UNITYSDK_OFFSET(0x96833B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_YIELDTOPENDINGCONTINUATION_OFFSET UNITYSDK_OFFSET(0x9683410)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSHPENDINGCONTINUATION_OFFSET UNITYSDK_OFFSET(0x96835E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_POPPENDINGCONTINUATION_OFFSET UNITYSDK_OFFSET(0x96836D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GOTO_OFFSET UNITYSDK_OFFSET(0x9683780)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InterpretedFrame_TypeDefinitionIndex = 33278;

	class InterpretedFrame : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::InterpretedFrame* s_currentFrame;
		::System::Linq::Expressions::Interpreter::Interpreter* Interpreter; // 0x10
		::System::Linq::Expressions::Interpreter::InterpretedFrame* _parent; // 0x18
		::Il2CppArray<::System::Object*>* _continuations; // 0x20
		::System::Int32 _continuationIndex; // 0x28
		::System::Int32 _pendingContinuation; // 0x2C
		::System::Object* _pendingValue; // 0x30
		::Il2CppArray<::System::Object*>* Data; // 0x38
		::Il2CppArray<::System::Object*>* Closure; // 0x40
		::System::Int32 StackIndex; // 0x48
		::System::Int32 InstructionIndex; // 0x4C

		::System::Void .ctor(::System::Linq::Expressions::Interpreter::Interpreter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::Interpreter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::DebugInfo* GetDebugInfo(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::DebugInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GETDEBUGINFO_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void Push(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET))(arg, nullptr);
		}

		::System::Void Push(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET))(arg, nullptr);
		}

		::System::Void Push(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET))(arg, nullptr);
		}

		::System::Void Push(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET))(arg, nullptr);
		}

		::System::Void Push(::System::SByte arg)
		{
			((::System::Void(*)(::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET))(arg, nullptr);
		}

		::System::Void Push(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET))(arg, nullptr);
		}

		::System::Void Push(::System::UInt16 arg)
		{
			((::System::Void(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSH_OFFSET))(arg, nullptr);
		}

		::System::Object* Pop()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_POP_OFFSET))(nullptr);
		}

		::System::Void SetStackDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_SETSTACKDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Object* Peek()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PEEK_OFFSET))(nullptr);
		}

		::System::Void Dup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_DUP_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::InterpretedFrame* get_Parent()
		{
			return (return (::System::Linq::Expressions::Interpreter::InterpretedFrame*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GET_PARENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetStackTraceDebugInfo()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GETSTACKTRACEDEBUGINFO_OFFSET))(nullptr);
		}

		::System::Void SaveTraceToException(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_SAVETRACETOEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::InterpretedFrame* Enter()
		{
			return (return (::System::Linq::Expressions::Interpreter::InterpretedFrame*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_ENTER_OFFSET))(nullptr);
		}

		::System::Void Leave(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_LEAVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsJumpHappened()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_ISJUMPHAPPENED_OFFSET))(nullptr);
		}

		::System::Void RemoveContinuation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_REMOVECONTINUATION_OFFSET))(nullptr);
		}

		::System::Void PushContinuation(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSHCONTINUATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 YieldToCurrentContinuation()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_YIELDTOCURRENTCONTINUATION_OFFSET))(nullptr);
		}

		::System::Int32 YieldToPendingContinuation()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_YIELDTOPENDINGCONTINUATION_OFFSET))(nullptr);
		}

		::System::Void PushPendingContinuation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_PUSHPENDINGCONTINUATION_OFFSET))(nullptr);
		}

		::System::Void PopPendingContinuation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_POPPENDINGCONTINUATION_OFFSET))(nullptr);
		}

		::System::Int32 Goto(::System::Int32 arg, ::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAME_GOTO_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

