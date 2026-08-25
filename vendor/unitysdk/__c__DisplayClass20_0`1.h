#pragma once
#include "unitysdk.h"

#define <>C__DISPLAYCLASS20_0`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS20_0`1__FORWORKER64_B__0_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS20_0`1__FORWORKER64_B__1_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass20_0`1_TypeDefinitionIndex = 24148;

	class <>c__DisplayClass20_0`1 : public Il2CppObject
	{
	public:
		::System::OperationCanceledException* oce; // 0x0
		::System::Threading::Tasks::ParallelOptions* parallelOptions; // 0x0
		::System::Threading::Tasks::ParallelLoopStateFlags64* sharedPStateFlags; // 0x0
		::System::Threading::Tasks::RangeManager* rangeManager; // 0x0
		::System::Int32 forkJoinContextID; // 0x0
		Il2CppObject* bodyWithState; // 0x0
		Il2CppObject* bodyWithLocal; // 0x0
		Il2CppObject* localInit; // 0x0
		Il2CppObject* body; // 0x0
		Il2CppObject* localFinally; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS20_0`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ForWorker64_b__0(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS20_0`1__FORWORKER64_B__0_OFFSET))(arg, nullptr);
		}

		::System::Void _ForWorker64_b__1(::System::Threading::Tasks::RangeWorker&* arg, ::System::Int32 arg, bool&* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::RangeWorker&*, ::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS20_0`1__FORWORKER64_B__1_OFFSET))(arg, arg, arg, nullptr);
		}

	};

