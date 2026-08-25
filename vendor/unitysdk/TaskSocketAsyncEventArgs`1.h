#pragma once
#include "unitysdk.h"

#define TASKSOCKETASYNCEVENTARGS`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TASKSOCKETASYNCEVENTARGS`1_GETCOMPLETIONRESPONSIBILITY_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int TaskSocketAsyncEventArgs`1_TypeDefinitionIndex = 29892;

	class TaskSocketAsyncEventArgs`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _builder; // 0x0
		::System::Boolean _accessed; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKSOCKETASYNCEVENTARGS`1_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetCompletionResponsibility(bool&* arg)
		{
			return (return (Il2CppObject*(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + TASKSOCKETASYNCEVENTARGS`1_GETCOMPLETIONRESPONSIBILITY_OFFSET))(arg, nullptr);
		}

	};

