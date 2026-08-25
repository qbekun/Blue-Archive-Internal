#pragma once
#include "unitysdk.h"

#define <WRITEASYNCINTERNAL>D__57_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x92FA100)
#define <WRITEASYNCINTERNAL>D__57_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x92FA640)

	inline static constexpr unsigned int <WriteAsyncInternal>d__57_TypeDefinitionIndex = 25242;

	class <WriteAsyncInternal>d__57 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Int32 charPos; // 0x30
		::System::Int32 charLen; // 0x34
		::System::IO::StreamWriter* _this; // 0x38
		::Il2CppArray<::System::Object*>* charBuffer; // 0x40
		::System::Char value; // 0x48
		::System::Boolean appendNewLine; // 0x4A
		::Il2CppArray<::System::Object*>* coreNewLine; // 0x50
		::System::Boolean autoFlush; // 0x58
		ConfiguredTaskAwaiter* __u__1; // 0x60
		::System::Int32 _i_5__2; // 0x70

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITEASYNCINTERNAL>D__57_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITEASYNCINTERNAL>D__57_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

