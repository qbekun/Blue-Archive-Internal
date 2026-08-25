#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
class Awaiter;

#define <FLIPCARD>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA55A50)
#define <FLIPCARD>D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xA56030)

	inline static constexpr unsigned int <FlipCard>d__3_TypeDefinitionIndex = 487;

	class <FlipCard>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::UnityEngine::Transform* card; // 0x28
		::UnityEngine::Vector3* dir; // 0x30
		::System::Boolean isPlaySound; // 0x3C
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		Awaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FLIPCARD>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <FLIPCARD>D__3_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

