#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <READSTRINGINTOBUFFERASYNC>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9475CB0)
#define <READSTRINGINTOBUFFERASYNC>D__9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9476A50)

	inline static constexpr unsigned int <ReadStringIntoBufferAsync>d__9_TypeDefinitionIndex = 31747;

	class <ReadStringIntoBufferAsync>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Char quote; // 0x40
		::System::Int32 _charPos_5__2; // 0x44
		::System::Int32 _initialPosition_5__3; // 0x48
		::System::Int32 _lastWritePosition_5__4; // 0x4C
		::System::Int32 _escapeStartPos_5__5; // 0x50
		::System::Char _writeChar_5__6; // 0x54
		Il2CppObject* __u__1; // 0x58
		Il2CppObject* __u__2; // 0x68
		Il2CppObject* __u__3; // 0x78
		::System::Boolean _anotherHighSurrogate_5__7; // 0x88
		::System::Char _highSurrogate_5__8; // 0x8A
		ConfiguredTaskAwaiter* __u__4; // 0x90

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READSTRINGINTOBUFFERASYNC>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READSTRINGINTOBUFFERASYNC>D__9_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

