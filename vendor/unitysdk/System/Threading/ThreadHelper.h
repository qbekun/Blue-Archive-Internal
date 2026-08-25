#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_THREADHELPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93E3F00)
#define SYSTEM_THREADING_THREADHELPER_SETEXECUTIONCONTEXTHELPER_OFFSET UNITYSDK_OFFSET(0x93E3F30)
#define SYSTEM_THREADING_THREADHELPER_THREADSTART_CONTEXT_OFFSET UNITYSDK_OFFSET(0x93E3F40)
#define SYSTEM_THREADING_THREADHELPER_THREADSTART_OFFSET UNITYSDK_OFFSET(0x93E4020)
#define SYSTEM_THREADING_THREADHELPER_THREADSTART_OFFSET UNITYSDK_OFFSET(0x93E4110)
#define SYSTEM_THREADING_THREADHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93E41E0)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadHelper_TypeDefinitionIndex = 24098;

	class ThreadHelper : public Il2CppObject
	{
	public:
		::System::Delegate* _start; // 0x10
		::System::Object* _startArg; // 0x18
		::System::Threading::ExecutionContext* _executionContext; // 0x20
		::System::Threading::ContextCallback* _ccb; // 0x0

		::System::Void .ctor(::System::Delegate* arg)
		{
			((::System::Void(*)(::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADHELPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetExecutionContextHelper(::System::Threading::ExecutionContext* arg)
		{
			((::System::Void(*)(::System::Threading::ExecutionContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADHELPER_SETEXECUTIONCONTEXTHELPER_OFFSET))(arg, nullptr);
		}

		::System::Void ThreadStart_Context(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADHELPER_THREADSTART_CONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void ThreadStart(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADHELPER_THREADSTART_OFFSET))(arg, nullptr);
		}

		::System::Void ThreadStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADHELPER_THREADSTART_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADHELPER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

