#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }

#define <RUN>D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E3CE90)
#define <RUN>D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E3D0F0)

	inline static constexpr unsigned int <Run>d__11_TypeDefinitionIndex = 21057;

	class <Run>d__11 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		Awaiter* __u__1; // 0x28

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RUN>D__11_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RUN>D__11_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

