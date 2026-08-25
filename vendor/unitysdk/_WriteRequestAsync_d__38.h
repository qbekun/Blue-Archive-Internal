#pragma once
#include "unitysdk.h"

#define <WRITEREQUESTASYNC>D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A8AD50)
#define <WRITEREQUESTASYNC>D__38_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A8B330)

	inline static constexpr unsigned int <WriteRequestAsync>d__38_TypeDefinitionIndex = 29824;

	class <WriteRequestAsync>d__38 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Net::WebRequestStream* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Net::BufferOffsetSize* _buffer_5__2; // 0x40
		ConfiguredTaskAwaiter* __u__1; // 0x48
		::System::Runtime::CompilerServices::TaskAwaiter* __u__2; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITEREQUESTASYNC>D__38_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITEREQUESTASYNC>D__38_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

