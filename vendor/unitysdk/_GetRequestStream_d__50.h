#pragma once
#include "unitysdk.h"

#define <GETREQUESTSTREAM>D__50_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A85DC0)
#define <GETREQUESTSTREAM>D__50_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A86070)

	inline static constexpr unsigned int <GetRequestStream>d__50_TypeDefinitionIndex = 29814;

	class <GetRequestStream>d__50 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Net::WebOperation* __4__this; // 0x30
		Il2CppObject* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREQUESTSTREAM>D__50_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <GETREQUESTSTREAM>D__50_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

