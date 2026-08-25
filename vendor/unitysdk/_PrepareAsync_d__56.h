#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskVoidMethodBuilder; }
class InteractiveWorldRaidTask;
namespace MX::Data { class WorldRaidSeasonInfo; }
class Awaiter;

#define <PREPAREASYNC>D__56_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x25B1600)
#define <PREPAREASYNC>D__56_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x25B4450)

	inline static constexpr unsigned int <PrepareAsync>d__56_TypeDefinitionIndex = 359;

	class <PrepareAsync>d__56 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder* __t__builder; // 0x18
		InteractiveWorldRaidTask* __4__this; // 0x20
		::System::Boolean useManualFadeOutIn; // 0x28
		::System::Action* afterPreparedCallback; // 0x30
		::MX::Data::WorldRaidSeasonInfo* _seasonInfo_5__2; // 0x38
		Awaiter* __u__1; // 0x40
		::System::Int32 _dayAfter_5__3; // 0x50
		Il2CppObject* __7__wrap3; // 0x58
		Il2CppObject* __7__wrap4; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PREPAREASYNC>D__56_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PREPAREASYNC>D__56_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

