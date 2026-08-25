#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_CONTINUATIONTASKFROMRESULTTASK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_CONTINUATIONTASKFROMRESULTTASK`1_INNERINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ContinuationTaskFromResultTask`1_TypeDefinitionIndex = 24191;

	class ContinuationTaskFromResultTask`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_antecedent; // 0x0

		::System::Void .ctor(Il2CppObject* arg, ::System::Delegate* arg, ::System::Object* arg, ::System::Threading::Tasks::TaskCreationOptions* arg, ::System::Threading::Tasks::InternalTaskOptions* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions*, ::System::Threading::Tasks::InternalTaskOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_CONTINUATIONTASKFROMRESULTTASK`1_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InnerInvoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_CONTINUATIONTASKFROMRESULTTASK`1_INNERINVOKE_OFFSET))(nullptr);
		}

	};
}

