#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UIScenarioMode_ModeSelect;
class <>c__DisplayClass21_0;
namespace MX::SaveData { class ScenarioSeriesSaveData; }
class Awaiter;

#define <PLAYSERIES2UNLOCK>D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x280D9C0)
#define <PLAYSERIES2UNLOCK>D__21_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x280E0C0)

	inline static constexpr unsigned int <PlaySeries2Unlock>d__21_TypeDefinitionIndex = 7785;

	class <PlaySeries2Unlock>d__21 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		UIScenarioMode_ModeSelect* __4__this; // 0x28
		<>c__DisplayClass21_0* __8__1; // 0x30
		::MX::SaveData::ScenarioSeriesSaveData* _scenarioseriesSaveData_5__2; // 0x38
		Awaiter* __u__1; // 0x40
		Awaiter* __u__2; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSERIES2UNLOCK>D__21_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYSERIES2UNLOCK>D__21_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

