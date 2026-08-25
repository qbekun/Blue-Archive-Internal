#pragma once
#include "unitysdk.h"

class <>c__DisplayClass2_0;

#define <REGISTERCLUEASYNC>D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2491610)
#define <REGISTERCLUEASYNC>D__2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2491EA0)

	inline static constexpr unsigned int <RegisterClueAsync>d__2_TypeDefinitionIndex = 5730;

	class <RegisterClueAsync>d__2 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Int64 eventContentId; // 0x38
		::System::Int64 slotId; // 0x40
		<>c__DisplayClass2_0* __8__1; // 0x48
		Il2CppObject* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REGISTERCLUEASYNC>D__2_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <REGISTERCLUEASYNC>D__2_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

