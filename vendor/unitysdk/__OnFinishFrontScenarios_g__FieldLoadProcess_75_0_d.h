#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class ScenarioModeTask;
namespace MXField { class FieldBridge; }
class Awaiter;

#define <<ONFINISHFRONTSCENARIOS>G__FIELDLOADPROCESS|75_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x202F9A0)
#define <<ONFINISHFRONTSCENARIOS>G__FIELDLOADPROCESS|75_0>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2030170)

	inline static constexpr unsigned int <<OnFinishFrontScenarios>g__FieldLoadProcess|75_0>d_TypeDefinitionIndex = 3209;

	class <<OnFinishFrontScenarios>g__FieldLoadProcess|75_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		ScenarioModeTask* __4__this; // 0x28
		::System::String* _scenePath_5__2; // 0x30
		::MXField::FieldBridge* _bridge_5__3; // 0x38
		Awaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONFINISHFRONTSCENARIOS>G__FIELDLOADPROCESS|75_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<ONFINISHFRONTSCENARIOS>G__FIELDLOADPROCESS|75_0>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

