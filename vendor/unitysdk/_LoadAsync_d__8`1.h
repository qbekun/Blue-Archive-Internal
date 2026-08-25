#pragma once
#include "unitysdk.h"

#define <LOADASYNC>D__8`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <LOADASYNC>D__8`1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <LoadAsync>d__8`1_TypeDefinitionIndex = 3101;

	class <LoadAsync>d__8`1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		Il2CppObject* __t__builder; // 0x0
		::System::String* path; // 0x0
		Il2CppObject* __u__1; // 0x0

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADASYNC>D__8`1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <LOADASYNC>D__8`1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

