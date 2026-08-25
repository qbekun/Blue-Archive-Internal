#pragma once
#include "unitysdk.h"

#define REPLICA_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F1250)
#define REPLICA_START_OFFSET UNITYSDK_OFFSET(0x93F1460)
#define REPLICA_WAIT_OFFSET UNITYSDK_OFFSET(0x93F1510)
#define REPLICA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x93F1570)
#define REPLICA_CREATENEWREPLICA_OFFSET UNITYSDK_OFFSET(0x000000)
#define REPLICA_EXECUTEACTION_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Replica_TypeDefinitionIndex = 24163;

	class Replica : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::TaskReplicator* _replicator; // 0x10
		::System::Int32 _timeout; // 0x18
		::System::Int32 _remainingConcurrency; // 0x1C
		::System::Threading::Tasks::Task* _pendingTask; // 0x20

		::System::Void .ctor(::System::Threading::Tasks::TaskReplicator* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::TaskReplicator*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + REPLICA_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLICA_START_OFFSET))(nullptr);
		}

		::System::Void Wait()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLICA_WAIT_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLICA_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void CreateNewReplica()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLICA_CREATENEWREPLICA_OFFSET))(nullptr);
		}

		::System::Void ExecuteAction(bool&* arg)
		{
			((::System::Void(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + REPLICA_EXECUTEACTION_OFFSET))(arg, nullptr);
		}

	};

