#pragma once
#include "unitysdk.h"

#define <INTERNALREADALLBYTESUNKNOWNLENGTHASYNC>D__72_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9309430)
#define <INTERNALREADALLBYTESUNKNOWNLENGTHASYNC>D__72_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9309CD0)

	inline static constexpr unsigned int <InternalReadAllBytesUnknownLengthAsync>d__72_TypeDefinitionIndex = 25262;

	class <InternalReadAllBytesUnknownLengthAsync>d__72 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::IO::FileStream* fs; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::Il2CppArray<::System::Object*>* _rentedArray_5__2; // 0x40
		::System::Int32 _bytesRead_5__3; // 0x48
		Il2CppObject* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INTERNALREADALLBYTESUNKNOWNLENGTHASYNC>D__72_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <INTERNALREADALLBYTESUNKNOWNLENGTHASYNC>D__72_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

