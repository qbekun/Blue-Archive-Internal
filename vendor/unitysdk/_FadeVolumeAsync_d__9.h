#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskVoidMethodBuilder; }
namespace MXField::Core { class FieldSoundHandler; }
class Awaiter;

#define <FADEVOLUMEASYNC>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xEDA770)
#define <FADEVOLUMEASYNC>D__9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xEDAEF0)

	inline static constexpr unsigned int <FadeVolumeAsync>d__9_TypeDefinitionIndex = 10970;

	class <FadeVolumeAsync>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder* __t__builder; // 0x18
		::System::Boolean mute; // 0x20
		::MXField::Core::FieldSoundHandler* __4__this; // 0x28
		::System::Single fadeDuration; // 0x30
		::System::Threading::CancellationToken* ct; // 0x38
		::System::Single _start_5__2; // 0x40
		::System::Single _target_5__3; // 0x44
		::System::Single _elapsed_5__4; // 0x48
		Awaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FADEVOLUMEASYNC>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <FADEVOLUMEASYNC>D__9_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

