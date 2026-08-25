#pragma once
#include "unitysdk.h"

#define <INITREADASYNC>D__52_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A8FE30)
#define <INITREADASYNC>D__52_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A90620)

	inline static constexpr unsigned int <InitReadAsync>d__52_TypeDefinitionIndex = 29832;

	class <InitReadAsync>d__52 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Net::WebResponseStream* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Net::BufferOffsetSize* _buffer_5__2; // 0x40
		::System::Net::ReadState* _state_5__3; // 0x48
		::System::Int32 _position_5__4; // 0x4C
		Il2CppObject* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITREADASYNC>D__52_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <INITREADASYNC>D__52_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

