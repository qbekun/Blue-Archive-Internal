#pragma once
#include "unitysdk.h"

#define <POSTASYNC>D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9BB4BA0)
#define <POSTASYNC>D__1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9BB5350)

	inline static constexpr unsigned int <PostAsync>d__1_TypeDefinitionIndex = 25434;

	class <PostAsync>d__1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::String* jsonBody; // 0x30
		::System::String* url; // 0x38
		::System::Net::Http::HttpResponseMessage* _response_5__2; // 0x40
		Il2CppObject* __u__1; // 0x48
		Il2CppObject* __u__2; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <POSTASYNC>D__1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <POSTASYNC>D__1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

