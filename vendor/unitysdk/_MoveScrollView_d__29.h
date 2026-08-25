#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UIPopup_SNS;
class Awaiter;

#define <MOVESCROLLVIEW>D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAE48C0)
#define <MOVESCROLLVIEW>D__29_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xAE4D70)

	inline static constexpr unsigned int <MoveScrollView>d__29_TypeDefinitionIndex = 8082;

	class <MoveScrollView>d__29 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::System::Boolean moveDirectly; // 0x28
		UIPopup_SNS* __4__this; // 0x30
		::System::Single height; // 0x38
		::System::Single extendedDuration; // 0x3C
		::System::Single _totalDuration_5__2; // 0x40
		::System::Single _elapsed_5__3; // 0x44
		::System::Single _moved_5__4; // 0x48
		Awaiter* __u__1; // 0x4C

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVESCROLLVIEW>D__29_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <MOVESCROLLVIEW>D__29_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

