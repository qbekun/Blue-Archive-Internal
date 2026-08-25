#pragma once
#include "unitysdk.h"

#define <GETSTACKTRACEDEBUGINFO>D__29_.CTOR_OFFSET UNITYSDK_OFFSET(0x9682FD0)
#define <GETSTACKTRACEDEBUGINFO>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9683910)
#define <GETSTACKTRACEDEBUGINFO>D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9683920)
#define <GETSTACKTRACEDEBUGINFO>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.LINQ.EXPRESSIONS.INTERPRETER.INTERPRETEDFRAMEINFO_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9683A90)
#define <GETSTACKTRACEDEBUGINFO>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9683AA0)
#define <GETSTACKTRACEDEBUGINFO>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9683AF0)
#define <GETSTACKTRACEDEBUGINFO>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.LINQ.EXPRESSIONS.INTERPRETER.INTERPRETEDFRAMEINFO_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9683B40)
#define <GETSTACKTRACEDEBUGINFO>D__29_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9683BE0)

	inline static constexpr unsigned int <GetStackTraceDebugInfo>d__29_TypeDefinitionIndex = 33277;

	class <GetStackTraceDebugInfo>d__29 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Linq::Expressions::Interpreter::InterpretedFrameInfo* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x28
		::System::Linq::Expressions::Interpreter::InterpretedFrame* __4__this; // 0x30
		::System::Linq::Expressions::Interpreter::InterpretedFrame* _frame_5__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETSTACKTRACEDEBUGINFO>D__29_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTACKTRACEDEBUGINFO>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTACKTRACEDEBUGINFO>D__29_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::InterpretedFrameInfo* System.Collections.Generic.IEnumerator_System.Linq.Expressions.Interpreter.InterpretedFrameInfo_.get_Current()
		{
			return (return (::System::Linq::Expressions::Interpreter::InterpretedFrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTACKTRACEDEBUGINFO>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.LINQ.EXPRESSIONS.INTERPRETER.INTERPRETEDFRAMEINFO_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTACKTRACEDEBUGINFO>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTACKTRACEDEBUGINFO>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.Linq.Expressions.Interpreter.InterpretedFrameInfo_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTACKTRACEDEBUGINFO>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.LINQ.EXPRESSIONS.INTERPRETER.INTERPRETEDFRAMEINFO_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTACKTRACEDEBUGINFO>D__29_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

