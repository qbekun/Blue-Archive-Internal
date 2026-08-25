#pragma once
#include "unitysdk.h"

#define <COMPUTEFROMFILEASYNC>D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1031470)
#define <COMPUTEFROMFILEASYNC>D__1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10317D0)

	inline static constexpr unsigned int <ComputeFromFileAsync>d__1_TypeDefinitionIndex = 12823;

	class <ComputeFromFileAsync>d__1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::String* path; // 0x30
		Il2CppObject* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMPUTEFROMFILEASYNC>D__1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <COMPUTEFROMFILEASYNC>D__1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

