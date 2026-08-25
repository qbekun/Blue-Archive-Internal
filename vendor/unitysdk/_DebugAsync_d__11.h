#pragma once
#include "unitysdk.h"

#define <DEBUGASYNC>D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9BB3D40)
#define <DEBUGASYNC>D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9BB4130)

	inline static constexpr unsigned int <DebugAsync>d__11_TypeDefinitionIndex = 25429;

	class <DebugAsync>d__11 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		Payload* payload; // 0x30
		GameThreadPayload* gameThreadPayload; // 0x98
		Il2CppObject* __u__1; // 0xA8

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DEBUGASYNC>D__11_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DEBUGASYNC>D__11_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

