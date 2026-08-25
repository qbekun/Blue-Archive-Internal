#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskVoidMethodBuilder; }
class CharacterVisual;
namespace MX::Logic::BattleEntities { class GaugeEffectInfo; }

#define <SETCHANGESTATLOGICAPPLICATIONGAUGEASYNC>D__211_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1205870)
#define <SETCHANGESTATLOGICAPPLICATIONGAUGEASYNC>D__211_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1206110)

	inline static constexpr unsigned int <SetChangeStatLogicApplicationGaugeAsync>d__211_TypeDefinitionIndex = 951;

	class <SetChangeStatLogicApplicationGaugeAsync>d__211 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder* __t__builder; // 0x18
		CharacterVisual* __4__this; // 0x20
		::System::String* uiPath; // 0x28
		::MX::Logic::BattleEntities::GaugeEffectInfo* effectInfo; // 0x30
		::System::Threading::CancellationToken* _tokenOnDestroyed_5__2; // 0x38
		Il2CppObject* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETCHANGESTATLOGICAPPLICATIONGAUGEASYNC>D__211_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SETCHANGESTATLOGICAPPLICATIONGAUGEASYNC>D__211_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

