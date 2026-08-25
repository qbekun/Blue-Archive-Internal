#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_ASYNCFLOWCONTROL_SETUP_OFFSET UNITYSDK_OFFSET(0x93E0D20)
#define SYSTEM_THREADING_ASYNCFLOWCONTROL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93E0DB0)
#define SYSTEM_THREADING_ASYNCFLOWCONTROL_UNDO_OFFSET UNITYSDK_OFFSET(0x93E0DC0)
#define SYSTEM_THREADING_ASYNCFLOWCONTROL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93E0F70)
#define SYSTEM_THREADING_ASYNCFLOWCONTROL_EQUALS_OFFSET UNITYSDK_OFFSET(0x93E1030)
#define SYSTEM_THREADING_ASYNCFLOWCONTROL_EQUALS_OFFSET UNITYSDK_OFFSET(0x93E10C0)

namespace System::Threading
{
	inline static constexpr unsigned int AsyncFlowControl_TypeDefinitionIndex = 24086;

	class AsyncFlowControl : public Il2CppObject
	{
	public:
		::System::Boolean useEC; // 0x10
		::System::Threading::ExecutionContext* _ec; // 0x18
		::System::Threading::Thread* _thread; // 0x20

		::System::Void Setup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCFLOWCONTROL_SETUP_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCFLOWCONTROL_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Undo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCFLOWCONTROL_UNDO_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCFLOWCONTROL_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCFLOWCONTROL_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Threading::AsyncFlowControl* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::AsyncFlowControl*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCFLOWCONTROL_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

