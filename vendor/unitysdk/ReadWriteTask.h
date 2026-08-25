#pragma once
#include "unitysdk.h"

#define READWRITETASK_CLEARBEGINSTATE_OFFSET UNITYSDK_OFFSET(0x9316940)
#define READWRITETASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x93144B0)
#define READWRITETASK_INVOKEASYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x9316980)
#define READWRITETASK_SYSTEM.THREADING.TASKS.ITASKCOMPLETIONACTION.INVOKE_OFFSET UNITYSDK_OFFSET(0x9316A00)
#define READWRITETASK_SYSTEM.THREADING.TASKS.ITASKCOMPLETIONACTION.GET_INVOKEMAYRUNARBITRARYCODE_OFFSET UNITYSDK_OFFSET(0x9316B60)

	inline static constexpr unsigned int ReadWriteTask_TypeDefinitionIndex = 25280;

	class ReadWriteTask : public ::UnityEngine::InputSystem::InputActionProperty
	{
	public:
		::System::Boolean _isRead; // 0x58
		::System::Boolean _apm; // 0x59
		::System::IO::Stream* _stream; // 0x60
		::Il2CppArray<::System::Object*>* _buffer; // 0x68
		::System::Int32 _offset; // 0x70
		::System::Int32 _count; // 0x74
		::System::AsyncCallback* _callback; // 0x78
		::System::Threading::ExecutionContext* _context; // 0x80
		::System::Threading::ContextCallback* s_invokeAsyncCallback; // 0x0

		::System::Void ClearBeginState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + READWRITETASK_CLEARBEGINSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg, Il2CppObject* arg, ::System::Object* arg, ::System::IO::Stream* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, Il2CppObject*, ::System::Object*, ::System::IO::Stream*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::PVOID))((::PBYTE)hIl2Cpp + READWRITETASK_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InvokeAsyncCallback(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + READWRITETASK_INVOKEASYNCCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void System.Threading.Tasks.ITaskCompletionAction.Invoke(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + READWRITETASK_SYSTEM.THREADING.TASKS.ITASKCOMPLETIONACTION.INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Threading.Tasks.ITaskCompletionAction.get_InvokeMayRunArbitraryCode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + READWRITETASK_SYSTEM.THREADING.TASKS.ITASKCOMPLETIONACTION.GET_INVOKEMAYRUNARBITRARYCODE_OFFSET))(nullptr);
		}

	};

