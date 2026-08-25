#pragma once
#include "unitysdk.h"

#define <RUN>D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A860E0)
#define <RUN>D__58_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A86AB0)

	inline static constexpr unsigned int <Run>d__58_TypeDefinitionIndex = 29815;

	class <Run>d__58 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::System::Net::WebOperation* __4__this; // 0x38
		::System::Net::WebRequestStream* _requestStream_5__2; // 0x40
		::System::Net::WebResponseStream* _stream_5__3; // 0x48
		Il2CppObject* __u__1; // 0x50
		ConfiguredTaskAwaiter* __u__2; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RUN>D__58_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RUN>D__58_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

