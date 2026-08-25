#pragma once
#include "unitysdk.h"

#define <<GETREWRITEHANDLER>B__271_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A750E0)
#define <<GETREWRITEHANDLER>B__271_0>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A75600)

	inline static constexpr unsigned int <<GetRewriteHandler>b__271_0>d_TypeDefinitionIndex = 29778;

	class <<GetRewriteHandler>b__271_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Net::HttpWebRequest* __4__this; // 0x30
		::System::IO::MemoryStream* _ms_5__2; // 0x38
		ConfiguredTaskAwaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<GETREWRITEHANDLER>B__271_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<GETREWRITEHANDLER>B__271_0>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

