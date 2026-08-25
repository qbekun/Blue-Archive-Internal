#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UIPopup_SNS;
class Awaiter;

#define <PLAYSNSDIRECTINGSEQUENCE>D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAE1DD0)
#define <PLAYSNSDIRECTINGSEQUENCE>D__27_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xAE2470)

	inline static constexpr unsigned int <PlaySNSDirectingSequence>d__27_TypeDefinitionIndex = 8078;

	class <PlaySNSDirectingSequence>d__27 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		UIPopup_SNS* __4__this; // 0x28
		Awaiter* __u__1; // 0x30
		::System::Int32 _i_5__2; // 0x34
		Awaiter* __u__2; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSNSDIRECTINGSEQUENCE>D__27_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYSNSDIRECTINGSEQUENCE>D__27_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

