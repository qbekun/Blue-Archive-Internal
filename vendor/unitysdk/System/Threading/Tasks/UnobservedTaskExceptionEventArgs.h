#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_UNOBSERVEDTASKEXCEPTIONEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x93FDBA0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int UnobservedTaskExceptionEventArgs_TypeDefinitionIndex = 24207;

	class UnobservedTaskExceptionEventArgs : public Il2CppObject
	{
	public:
		::System::AggregateException* m_exception; // 0x10
		::System::Boolean m_observed; // 0x18

		::System::Void .ctor(::System::AggregateException* arg)
		{
			((::System::Void(*)(::System::AggregateException*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_UNOBSERVEDTASKEXCEPTIONEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

