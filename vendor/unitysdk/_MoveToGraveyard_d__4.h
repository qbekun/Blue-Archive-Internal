#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace UnityEngine { class Transform; }
class Awaiter;

#define <MOVETOGRAVEYARD>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA56040)
#define <MOVETOGRAVEYARD>D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xA56B50)

	inline static constexpr unsigned int <MoveToGraveyard>d__4_TypeDefinitionIndex = 488;

	class <MoveToGraveyard>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::UnityEngine::Transform* tr; // 0x28
		::System::Threading::CancellationToken* cancellationToken; // 0x30
		::Il2CppArray<::System::Object*>* _graveyard_5__2; // 0x38
		Awaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVETOGRAVEYARD>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <MOVETOGRAVEYARD>D__4_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

