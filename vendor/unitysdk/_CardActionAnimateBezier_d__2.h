#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Quaternion; }
class Awaiter;

#define <CARDACTIONANIMATEBEZIER>D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA55510)
#define <CARDACTIONANIMATEBEZIER>D__2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xA55A40)

	inline static constexpr unsigned int <CardActionAnimateBezier>d__2_TypeDefinitionIndex = 486;

	class <CardActionAnimateBezier>d__2 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::UnityEngine::Vector3* targetPosition; // 0x28
		::UnityEngine::Transform* source; // 0x38
		::System::Single duration; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		::UnityEngine::Quaternion* targetRotation; // 0x50
		Awaiter* __u__1; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CARDACTIONANIMATEBEZIER>D__2_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <CARDACTIONANIMATEBEZIER>D__2_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

