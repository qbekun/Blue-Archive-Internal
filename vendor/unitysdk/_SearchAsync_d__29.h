#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskVoidMethodBuilder; }
class UISearchComponent;
class Awaiter;

#define <SEARCHASYNC>D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26B2240)
#define <SEARCHASYNC>D__29_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x26B2770)

	inline static constexpr unsigned int <SearchAsync>d__29_TypeDefinitionIndex = 6896;

	class <SearchAsync>d__29 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder* __t__builder; // 0x18
		UISearchComponent* __4__this; // 0x20
		::System::Threading::CancellationToken* token; // 0x28
		::System::String* text; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SEARCHASYNC>D__29_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SEARCHASYNC>D__29_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

