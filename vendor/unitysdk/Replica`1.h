#pragma once
#include "unitysdk.h"

#define REPLICA`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define REPLICA`1_CREATENEWREPLICA_OFFSET UNITYSDK_OFFSET(0x000000)
#define REPLICA`1_EXECUTEACTION_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Replica`1_TypeDefinitionIndex = 24164;

	class Replica`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _action; // 0x0
		Il2CppObject* _state; // 0x0

		::System::Void .ctor(::System::Threading::Tasks::TaskReplicator* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::TaskReplicator*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REPLICA`1_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CreateNewReplica()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLICA`1_CREATENEWREPLICA_OFFSET))(nullptr);
		}

		::System::Void ExecuteAction(bool&* arg)
		{
			((::System::Void(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + REPLICA`1_EXECUTEACTION_OFFSET))(arg, nullptr);
		}

	};

