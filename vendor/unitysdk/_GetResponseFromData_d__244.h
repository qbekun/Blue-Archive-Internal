#pragma once
#include "unitysdk.h"

#define <GETRESPONSEFROMDATA>D__244_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A74100)
#define <GETRESPONSEFROMDATA>D__244_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A75070)

	inline static constexpr unsigned int <GetResponseFromData>d__244_TypeDefinitionIndex = 29777;

	class <GetResponseFromData>d__244 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Net::HttpWebRequest* __4__this; // 0x30
		::System::Net::WebResponseStream* stream; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		::System::Net::HttpWebResponse* _response_5__2; // 0x48
		::System::Net::WebException* _throwMe_5__3; // 0x50
		::System::Boolean _redirect_5__4; // 0x58
		::System::Boolean _mustReadAll_5__5; // 0x59
		ConfiguredTaskAwaiter* __u__1; // 0x60
		Il2CppObject* __u__2; // 0x70

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETRESPONSEFROMDATA>D__244_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <GETRESPONSEFROMDATA>D__244_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

