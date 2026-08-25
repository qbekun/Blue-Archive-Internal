#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
class Awaiter;

#define <MOVEANDROTATE>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA570D0)
#define <MOVEANDROTATE>D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xA57780)

	inline static constexpr unsigned int <MoveAndRotate>d__6_TypeDefinitionIndex = 490;

	class <MoveAndRotate>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::UnityEngine::Transform* tr; // 0x28
		::System::Single duration; // 0x30
		::UnityEngine::Vector3* targetPos; // 0x34
		::UnityEngine::Quaternion* targetRot; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x50
		::System::Single _time_5__2; // 0x58
		::UnityEngine::Vector3* _startPos_5__3; // 0x5C
		::UnityEngine::Quaternion* _startRot_5__4; // 0x68
		Awaiter* __u__1; // 0x78

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVEANDROTATE>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <MOVEANDROTATE>D__6_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

