#pragma once
#include "unitysdk.h"

#define <READASSTRINGASYNC>D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9814DF0)
#define <READASSTRINGASYNC>D__20_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x98154A0)

	inline static constexpr unsigned int <ReadAsStringAsync>d__20_TypeDefinitionIndex = 36657;

	class <ReadAsStringAsync>d__20 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Net::Http::HttpContent* __4__this; // 0x30
		ConfiguredTaskAwaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READASSTRINGASYNC>D__20_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READASSTRINGASYNC>D__20_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

