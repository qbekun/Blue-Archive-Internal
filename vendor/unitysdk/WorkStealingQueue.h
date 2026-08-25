#pragma once
#include "unitysdk.h"

#define WORKSTEALINGQUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define WORKSTEALINGQUEUE_LOCALPUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define WORKSTEALINGQUEUE_LOCALCLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define WORKSTEALINGQUEUE_TRYSTEAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define WORKSTEALINGQUEUE_DANGEROUSCOPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define WORKSTEALINGQUEUE_GET_DANGEROUSCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int WorkStealingQueue_TypeDefinitionIndex = 29582;

	class WorkStealingQueue : public Il2CppObject
	{
	public:
		::System::Int32 _headIndex; // 0x0
		::System::Int32 _tailIndex; // 0x0
		::Il2CppArray<::System::Object*>* _array; // 0x0
		::System::Int32 _mask; // 0x0
		::System::Int32 _addTakeCount; // 0x0
		::System::Int32 _stealCount; // 0x0
		::System::Int32 _currentOp; // 0x0
		::System::Boolean _frozen; // 0x0
		Il2CppObject* _nextQueue; // 0x0
		::System::Int32 _ownerThreadId; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WORKSTEALINGQUEUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void LocalPush(Il2CppObject* arg, int64_t&* arg)
		{
			((::System::Void(*)(Il2CppObject*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + WORKSTEALINGQUEUE_LOCALPUSH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LocalClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORKSTEALINGQUEUE_LOCALCLEAR_OFFSET))(nullptr);
		}

		::System::Boolean TrySteal(Il2CppObject&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WORKSTEALINGQUEUE_TRYSTEAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 DangerousCopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WORKSTEALINGQUEUE_DANGEROUSCOPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_DangerousCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WORKSTEALINGQUEUE_GET_DANGEROUSCOUNT_OFFSET))(nullptr);
		}

	};

