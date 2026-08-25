#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json::Utilities { class Base64Encoder; }

#define <ENCODEASYNC>D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x949B630)
#define <ENCODEASYNC>D__13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x949BB20)

	inline static constexpr unsigned int <EncodeAsync>d__13_TypeDefinitionIndex = 31808;

	class <EncodeAsync>d__13 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::Utilities::Base64Encoder* __4__this; // 0x30
		::Il2CppArray<::System::Object*>* buffer; // 0x38
		::System::Int32 index; // 0x40
		::System::Int32 count; // 0x44
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		::System::Int32 _num4_5__2; // 0x50
		::System::Int32 _length_5__3; // 0x54
		ConfiguredTaskAwaiter* __u__1; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENCODEASYNC>D__13_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <ENCODEASYNC>D__13_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

