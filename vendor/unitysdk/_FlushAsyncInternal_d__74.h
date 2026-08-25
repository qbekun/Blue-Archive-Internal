#pragma once
#include "unitysdk.h"

#define <FLUSHASYNCINTERNAL>D__74_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x92FB3D0)
#define <FLUSHASYNCINTERNAL>D__74_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x92FBE90)

	inline static constexpr unsigned int <FlushAsyncInternal>d__74_TypeDefinitionIndex = 25245;

	class <FlushAsyncInternal>d__74 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Boolean haveWrittenPreamble; // 0x30
		::System::IO::StreamWriter* _this; // 0x38
		::System::Text::Encoding* encoding; // 0x40
		::System::IO::Stream* stream; // 0x48
		::System::Threading::CancellationToken* cancellationToken; // 0x50
		::System::Text::Encoder* encoder; // 0x58
		::Il2CppArray<::System::Object*>* charBuffer; // 0x60
		::System::Int32 charPos; // 0x68
		::Il2CppArray<::System::Object*>* byteBuffer; // 0x70
		::System::Boolean flushEncoder; // 0x78
		::System::Boolean flushStream; // 0x79
		ConfiguredValueTaskAwaiter* __u__1; // 0x80
		ConfiguredTaskAwaiter* __u__2; // 0x90

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FLUSHASYNCINTERNAL>D__74_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <FLUSHASYNCINTERNAL>D__74_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

