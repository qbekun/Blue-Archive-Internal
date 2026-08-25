#pragma once
#include "unitysdk.h"

#define MOVENEXTRUNNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9229E30)
#define MOVENEXTRUNNER_RUN_OFFSET UNITYSDK_OFFSET(0x922A650)
#define MOVENEXTRUNNER_INVOKEMOVENEXT_OFFSET UNITYSDK_OFFSET(0x922A8C0)

	inline static constexpr unsigned int MoveNextRunner_TypeDefinitionIndex = 24783;

	class MoveNextRunner : public Il2CppObject
	{
	public:
		::System::Threading::ExecutionContext* m_context; // 0x10
		::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine; // 0x18
		::System::Threading::ContextCallback* s_invokeMoveNext; // 0x0

		::System::Void .ctor(::System::Threading::ExecutionContext* arg, ::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Threading::ExecutionContext*, ::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MOVENEXTRUNNER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Run()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVENEXTRUNNER_RUN_OFFSET))(nullptr);
		}

		::System::Void InvokeMoveNext(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MOVENEXTRUNNER_INVOKEMOVENEXT_OFFSET))(arg, nullptr);
		}

	};

