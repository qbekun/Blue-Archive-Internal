#pragma once
#include "unitysdk.h"

#define <WRITEASYNCINTERNAL>D__62_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x92FAC90)
#define <WRITEASYNCINTERNAL>D__62_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x92FB370)

	inline static constexpr unsigned int <WriteAsyncInternal>d__62_TypeDefinitionIndex = 25244;

	class <WriteAsyncInternal>d__62 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Int32 charPos; // 0x30
		::System::Int32 charLen; // 0x34
		::System::IO::StreamWriter* _this; // 0x38
		::Il2CppArray<::System::Object*>* charBuffer; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		Il2CppObject* source; // 0x50
		::System::Boolean appendNewLine; // 0x60
		::Il2CppArray<::System::Object*>* coreNewLine; // 0x68
		::System::Boolean autoFlush; // 0x70
		::System::Int32 _copied_5__2; // 0x74
		ConfiguredTaskAwaiter* __u__1; // 0x78
		::System::Int32 _i_5__3; // 0x88

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITEASYNCINTERNAL>D__62_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITEASYNCINTERNAL>D__62_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

