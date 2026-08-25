#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }

#define <LOADTABLEDATA>D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1803EB0)
#define <LOADTABLEDATA>D__2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x18042A0)

	inline static constexpr unsigned int <LoadTableData>d__2_TypeDefinitionIndex = 15678;

	class <LoadTableData>d__2 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		Awaiter* __u__1; // 0x28

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADTABLEDATA>D__2_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <LOADTABLEDATA>D__2_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

