#pragma once
#include "unitysdk.h"

#define <WRITEASYNCCORE>D__49_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9187FA0)
#define <WRITEASYNCCORE>D__49_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9189850)

	inline static constexpr unsigned int <WriteAsyncCore>d__49_TypeDefinitionIndex = 24303;

	class <WriteAsyncCore>d__49 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Int32 count; // 0x30
		::System::Int32 offset; // 0x34
		::System::Security::Cryptography::CryptoStream* __4__this; // 0x38
		::Il2CppArray<::System::Object*>* buffer; // 0x40
		::System::Boolean useAsync; // 0x48
		::System::Threading::CancellationToken* cancellationToken; // 0x50
		::System::Int32 _bytesToWrite_5__2; // 0x58
		::System::Int32 _currentInputIndex_5__3; // 0x5C
		::System::Int32 _numOutputBytes_5__4; // 0x60
		::System::Runtime::CompilerServices::ValueTaskAwaiter* __u__1; // 0x68
		::System::Int32 _numWholeBlocksInBytes_5__5; // 0x78
		::Il2CppArray<::System::Object*>* _tempOutputBuffer_5__6; // 0x80

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITEASYNCCORE>D__49_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITEASYNCCORE>D__49_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

