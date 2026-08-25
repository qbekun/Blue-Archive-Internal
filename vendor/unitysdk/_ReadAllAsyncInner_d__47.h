#pragma once
#include "unitysdk.h"

#define <READALLASYNCINNER>D__47_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A8EA10)
#define <READALLASYNCINNER>D__47_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A8F0C0)

	inline static constexpr unsigned int <ReadAllAsyncInner>d__47_TypeDefinitionIndex = 29830;

	class <ReadAllAsyncInner>d__47 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Threading::CancellationToken* cancellationToken; // 0x30
		::System::Net::WebResponseStream* __4__this; // 0x38
		::System::Int64 _maximumSize_5__2; // 0x40
		::System::IO::MemoryStream* _ms_5__3; // 0x48
		::Il2CppArray<::System::Object*>* _buffer_5__4; // 0x50
		Il2CppObject* __u__1; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READALLASYNCINNER>D__47_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READALLASYNCINNER>D__47_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

