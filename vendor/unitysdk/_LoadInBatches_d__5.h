#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }

#define <LOADINBATCHES>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1804860)
#define <LOADINBATCHES>D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1805510)

	inline static constexpr unsigned int <LoadInBatches>d__5_TypeDefinitionIndex = 15681;

	class <LoadInBatches>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		Awaiter* __u__1; // 0x28

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADINBATCHES>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <LOADINBATCHES>D__5_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

