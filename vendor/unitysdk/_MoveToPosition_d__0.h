#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
class Awaiter;

#define <MOVETOPOSITION>D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA54920)
#define <MOVETOPOSITION>D__0_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xA54EA0)

	inline static constexpr unsigned int <MoveToPosition>d__0_TypeDefinitionIndex = 484;

	class <MoveToPosition>d__0 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::System::Single duration; // 0x28
		::UnityEngine::Transform* from; // 0x30
		::UnityEngine::Vector3* to; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		::System::Single _elapsedTime_5__2; // 0x50
		::System::Single _inverseDuration_5__3; // 0x54
		Awaiter* __u__1; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVETOPOSITION>D__0_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <MOVETOPOSITION>D__0_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

