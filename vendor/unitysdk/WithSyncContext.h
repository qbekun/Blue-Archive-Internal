#pragma once
#include "unitysdk.h"

#define WITHSYNCCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x93DB5F0)

	inline static constexpr unsigned int WithSyncContext_TypeDefinitionIndex = 24065;

	class WithSyncContext : public Il2CppObject
	{
	public:
		::System::Threading::SynchronizationContext* TargetSyncContext; // 0x30

		::System::Void .ctor(Il2CppObject* arg, ::System::Object* arg, ::System::Threading::ExecutionContext* arg, ::System::Threading::CancellationTokenSource* arg, ::System::Threading::SynchronizationContext* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Threading::ExecutionContext*, ::System::Threading::CancellationTokenSource*, ::System::Threading::SynchronizationContext*, ::PVOID))((::PBYTE)hIl2Cpp + WITHSYNCCONTEXT_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};

