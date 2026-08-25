#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskVoidMethodBuilder; }
class InteractiveWorldRaidDesignLevel;
class Awaiter;

#define <SENDCAMERACHANGEDSIGNAL>D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x25A3D80)
#define <SENDCAMERACHANGEDSIGNAL>D__43_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x25A4820)

	inline static constexpr unsigned int <SendCameraChangedSignal>d__43_TypeDefinitionIndex = 330;

	class <SendCameraChangedSignal>d__43 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder* __t__builder; // 0x18
		InteractiveWorldRaidDesignLevel* __4__this; // 0x20
		::System::Threading::CancellationTokenSource* _linkedTokenSource_5__2; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDCAMERACHANGEDSIGNAL>D__43_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SENDCAMERACHANGEDSIGNAL>D__43_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

