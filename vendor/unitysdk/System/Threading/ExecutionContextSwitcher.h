#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_EXECUTIONCONTEXTSWITCHER_UNDONOTHROW_OFFSET UNITYSDK_OFFSET(0x93E05D0)
#define SYSTEM_THREADING_EXECUTIONCONTEXTSWITCHER_UNDO_OFFSET UNITYSDK_OFFSET(0x93E0680)

namespace System::Threading
{
	inline static constexpr unsigned int ExecutionContextSwitcher_TypeDefinitionIndex = 24085;

	class ExecutionContextSwitcher : public Il2CppObject
	{
	public:
		Reader* outerEC; // 0x10
		::System::Boolean outerECBelongsToScope; // 0x18
		::System::Object* hecsw; // 0x20
		::System::Threading::Thread* thread; // 0x28

		::System::Boolean UndoNoThrow()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXTSWITCHER_UNDONOTHROW_OFFSET))(nullptr);
		}

		::System::Void Undo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXTSWITCHER_UNDO_OFFSET))(nullptr);
		}

	};
}

