#pragma once
#include "unitysdk.h"

#define <INTERNALREADALLBYTESASYNC>D__71_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9308CE0)
#define <INTERNALREADALLBYTESASYNC>D__71_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x93093C0)

	inline static constexpr unsigned int <InternalReadAllBytesAsync>d__71_TypeDefinitionIndex = 25261;

	class <InternalReadAllBytesAsync>d__71 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::IO::FileStream* fs; // 0x30
		::System::Int32 count; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		::System::IO::FileStream* __7__wrap1; // 0x48
		::System::Int32 _index_5__3; // 0x50
		::Il2CppArray<::System::Object*>* _bytes_5__4; // 0x58
		Il2CppObject* __u__1; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INTERNALREADALLBYTESASYNC>D__71_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <INTERNALREADALLBYTESASYNC>D__71_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

