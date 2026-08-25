#pragma once
#include "unitysdk.h"

#define <READASYNCCORE>D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x91864C0)
#define <READASYNCCORE>D__42_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x91879E0)

	inline static constexpr unsigned int <ReadAsyncCore>d__42_TypeDefinitionIndex = 24301;

	class <ReadAsyncCore>d__42 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Int32 count; // 0x30
		::System::Int32 offset; // 0x34
		::System::Security::Cryptography::CryptoStream* __4__this; // 0x38
		::Il2CppArray<::System::Object*>* buffer; // 0x40
		::System::Boolean useAsync; // 0x48
		::System::Threading::CancellationToken* cancellationToken; // 0x50
		::System::Int32 _bytesToDeliver_5__2; // 0x58
		::System::Int32 _currentOutputIndex_5__3; // 0x5C
		::System::Int32 _numWholeBlocksInBytes_5__4; // 0x60
		::Il2CppArray<::System::Object*>* _tempInputBuffer_5__5; // 0x68
		::Il2CppArray<::System::Object*>* _tempOutputBuffer_5__6; // 0x70
		Il2CppObject* __u__1; // 0x78

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READASYNCCORE>D__42_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READASYNCCORE>D__42_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

