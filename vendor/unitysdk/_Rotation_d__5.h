#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Quaternion; }
class Awaiter;

#define <ROTATION>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA56B60)
#define <ROTATION>D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xA570C0)

	inline static constexpr unsigned int <Rotation>d__5_TypeDefinitionIndex = 489;

	class <Rotation>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::UnityEngine::Transform* tr; // 0x28
		::System::Single duration; // 0x30
		::UnityEngine::Quaternion* endRotation; // 0x34
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		::UnityEngine::Quaternion* _startRotation_5__2; // 0x50
		::System::Single _elapsedTime_5__3; // 0x60
		::System::Single _inverseDuration_5__4; // 0x64
		Awaiter* __u__1; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ROTATION>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <ROTATION>D__5_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

