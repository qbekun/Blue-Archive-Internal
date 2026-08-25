#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_STACKGUARD_TRYBEGININLININGSCOPE_OFFSET UNITYSDK_OFFSET(0x93FC0D0)
#define SYSTEM_THREADING_TASKS_STACKGUARD_ENDINLININGSCOPE_OFFSET UNITYSDK_OFFSET(0x93FC110)
#define SYSTEM_THREADING_TASKS_STACKGUARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F4CD0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int StackGuard_TypeDefinitionIndex = 24185;

	class StackGuard : public Il2CppObject
	{
	public:
		::System::Int32 m_inliningDepth; // 0x10
		::System::Int32 MAX_UNCHECKED_INLINING_DEPTH; // 0x0

		::System::Boolean TryBeginInliningScope()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_STACKGUARD_TRYBEGININLININGSCOPE_OFFSET))(nullptr);
		}

		::System::Void EndInliningScope()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_STACKGUARD_ENDINLININGSCOPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_STACKGUARD_.CTOR_OFFSET))(nullptr);
		}

	};
}

