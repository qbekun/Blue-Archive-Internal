#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
class Awaiter;

#define <MOVETOPOSITIONBEZIER>D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA54EB0)
#define <MOVETOPOSITIONBEZIER>D__1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xA55500)

	inline static constexpr unsigned int <MoveToPositionBezier>d__1_TypeDefinitionIndex = 485;

	class <MoveToPositionBezier>d__1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::UnityEngine::Transform* from; // 0x28
		::System::Single duration; // 0x30
		::UnityEngine::Vector3* controlPoint; // 0x34
		::UnityEngine::Vector3* to; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x50
		::UnityEngine::Vector3* _startPosition_5__2; // 0x58
		::System::Single _elapsedTime_5__3; // 0x64
		Awaiter* __u__1; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVETOPOSITIONBEZIER>D__1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <MOVETOPOSITIONBEZIER>D__1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

