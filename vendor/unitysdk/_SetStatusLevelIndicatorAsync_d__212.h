#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskVoidMethodBuilder; }
class CharacterVisual;
namespace MX::Logic::BattleEntities { class StatusLevelEffectInfo; }

#define <SETSTATUSLEVELINDICATORASYNC>D__212_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1206120)
#define <SETSTATUSLEVELINDICATORASYNC>D__212_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1206A00)

	inline static constexpr unsigned int <SetStatusLevelIndicatorAsync>d__212_TypeDefinitionIndex = 952;

	class <SetStatusLevelIndicatorAsync>d__212 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder* __t__builder; // 0x18
		CharacterVisual* __4__this; // 0x20
		::System::String* uiPath; // 0x28
		::MX::Logic::BattleEntities::StatusLevelEffectInfo* effectInfo; // 0x30
		::System::Threading::CancellationToken* _tokenOnDestroyed_5__2; // 0x38
		Il2CppObject* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETSTATUSLEVELINDICATORASYNC>D__212_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SETSTATUSLEVELINDICATORASYNC>D__212_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

