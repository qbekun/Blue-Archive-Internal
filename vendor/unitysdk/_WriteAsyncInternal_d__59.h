#pragma once
#include "unitysdk.h"

#define <WRITEASYNCINTERNAL>D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x92FA6A0)
#define <WRITEASYNCINTERNAL>D__59_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x92FAC30)

	inline static constexpr unsigned int <WriteAsyncInternal>d__59_TypeDefinitionIndex = 25243;

	class <WriteAsyncInternal>d__59 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::String* value; // 0x30
		::System::Int32 charPos; // 0x38
		::System::Int32 charLen; // 0x3C
		::System::IO::StreamWriter* _this; // 0x40
		::Il2CppArray<::System::Object*>* charBuffer; // 0x48
		::System::Boolean appendNewLine; // 0x50
		::Il2CppArray<::System::Object*>* coreNewLine; // 0x58
		::System::Boolean autoFlush; // 0x60
		::System::Int32 _count_5__2; // 0x64
		::System::Int32 _index_5__3; // 0x68
		ConfiguredTaskAwaiter* __u__1; // 0x70
		::System::Int32 _i_5__4; // 0x80

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITEASYNCINTERNAL>D__59_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITEASYNCINTERNAL>D__59_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

