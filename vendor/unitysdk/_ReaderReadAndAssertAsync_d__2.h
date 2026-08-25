#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonReader; }

#define <READERREADANDASSERTASYNC>D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x94573A0)
#define <READERREADANDASSERTASYNC>D__2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9457650)

	inline static constexpr unsigned int <ReaderReadAndAssertAsync>d__2_TypeDefinitionIndex = 31702;

	class <ReaderReadAndAssertAsync>d__2 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		Il2CppObject* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READERREADANDASSERTASYNC>D__2_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READERREADANDASSERTASYNC>D__2_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

