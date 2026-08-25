#pragma once
#include "unitysdk.h"

#define <WRITECHUNKTRAILER_INNER>D__39_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A8B390)
#define <WRITECHUNKTRAILER_INNER>D__39_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A8B680)

	inline static constexpr unsigned int <WriteChunkTrailer_inner>d__39_TypeDefinitionIndex = 29825;

	class <WriteChunkTrailer_inner>d__39 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Net::WebRequestStream* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		ConfiguredTaskAwaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITECHUNKTRAILER_INNER>D__39_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITECHUNKTRAILER_INNER>D__39_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

