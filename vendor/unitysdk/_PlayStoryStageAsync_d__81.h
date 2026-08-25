#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::Data { class EventContentStageInfo; }
class <>c__DisplayClass81_0;
class Awaiter;

#define <PLAYSTORYSTAGEASYNC>D__81_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26DE440)
#define <PLAYSTORYSTAGEASYNC>D__81_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x26E01A0)

	inline static constexpr unsigned int <PlayStoryStageAsync>d__81_TypeDefinitionIndex = 374;

	class <PlayStoryStageAsync>d__81 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::Data::EventContentStageInfo* stageInfo; // 0x28
		<>c__DisplayClass81_0* __8__1; // 0x30
		::System::Action* onFinish; // 0x38
		Il2CppObject* __u__1; // 0x40
		Il2CppObject* __7__wrap1; // 0x58
		Awaiter* __u__2; // 0x70
		Il2CppObject* __u__3; // 0x80

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSTORYSTAGEASYNC>D__81_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYSTORYSTAGEASYNC>D__81_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

