#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskVoidMethodBuilder; }
class CharacterVisual;
namespace MX::Logic::Skills::LogicEffects { class UseExclusiveHPBarEffect; }

#define <SETEXCLUSIVEHPBARASYNC>D__213_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1206A10)
#define <SETEXCLUSIVEHPBARASYNC>D__213_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1207490)

	inline static constexpr unsigned int <SetExclusiveHPBarAsync>d__213_TypeDefinitionIndex = 953;

	class <SetExclusiveHPBarAsync>d__213 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder* __t__builder; // 0x18
		CharacterVisual* __4__this; // 0x20
		::System::String* uiPath; // 0x28
		::MX::Logic::Skills::LogicEffects::UseExclusiveHPBarEffect* effect; // 0x30
		::System::Threading::CancellationToken* _tokenOnDestroyed_5__2; // 0x38
		Il2CppObject* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETEXCLUSIVEHPBARASYNC>D__213_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SETEXCLUSIVEHPBARASYNC>D__213_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

