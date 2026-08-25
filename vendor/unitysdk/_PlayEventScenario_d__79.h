#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::Data::Excel { class EventContentScenarioExcel; }
class InteractiveWorldRaidTask;
class <>c__DisplayClass79_1;
class Awaiter;

#define <PLAYEVENTSCENARIO>D__79_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26DD4A0)
#define <PLAYEVENTSCENARIO>D__79_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x26DE220)

	inline static constexpr unsigned int <PlayEventScenario>d__79_TypeDefinitionIndex = 371;

	class <PlayEventScenario>d__79 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::Data::Excel::EventContentScenarioExcel* scenarioExcel; // 0x28
		InteractiveWorldRaidTask* __4__this; // 0x38
		<>c__DisplayClass79_1* __8__1; // 0x40
		::Il2CppArray<::System::Object*>* _scenarioGroupIds_5__2; // 0x48
		Awaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYEVENTSCENARIO>D__79_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYEVENTSCENARIO>D__79_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

