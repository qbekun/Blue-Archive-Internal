#pragma once
#include "unitysdk.h"

class ConfiguredTaskAwaiter;

#define <WRITEASYNC>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10344E0)
#define <WRITEASYNC>D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1034B00)

	inline static constexpr unsigned int <WriteAsync>d__3_TypeDefinitionIndex = 12831;

	class <WriteAsync>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::String* fileName; // 0x30
		::System::Text::Encoding* encoding; // 0x38
		::System::String* text; // 0x40
		::System::IO::FileStream* _fs_5__2; // 0x48
		::System::IO::TextWriter* _writer_5__3; // 0x50
		ConfiguredTaskAwaiter* __u__1; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITEASYNC>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITEASYNC>D__3_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

