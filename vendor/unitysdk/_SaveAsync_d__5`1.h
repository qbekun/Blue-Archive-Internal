#pragma once
#include "unitysdk.h"

#define <SAVEASYNC>D__5`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <SAVEASYNC>D__5`1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <SaveAsync>d__5`1_TypeDefinitionIndex = 10995;

	class <SaveAsync>d__5`1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x0
		Il2CppObject* obj; // 0x0
		::System::String* path; // 0x0
		::System::IO::MemoryStream* _stream_5__2; // 0x0
		::System::Runtime::CompilerServices::ValueTaskAwaiter* __u__1; // 0x0
		::System::Runtime::CompilerServices::TaskAwaiter* __u__2; // 0x0

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEASYNC>D__5`1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SAVEASYNC>D__5`1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

