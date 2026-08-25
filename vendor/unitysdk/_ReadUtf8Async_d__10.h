#pragma once
#include "unitysdk.h"

namespace Cysharp::Text { class Utf8ValueStringBuilder; }

#define <READUTF8ASYNC>D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1034B60)
#define <READUTF8ASYNC>D__10_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1035800)

	inline static constexpr unsigned int <ReadUtf8Async>d__10_TypeDefinitionIndex = 12832;

	class <ReadUtf8Async>d__10 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::String* filePath; // 0x30
		::System::Threading::CancellationToken* token; // 0x38
		::System::Int32 _bufferSize_5__2; // 0x40
		::Il2CppArray<::System::Object*>* _buffer_5__3; // 0x48
		::Cysharp::Text::Utf8ValueStringBuilder* _stringBuilder_5__4; // 0x50
		::System::IO::StreamReader* _streamReader_5__5; // 0x60
		Il2CppObject* __u__1; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READUTF8ASYNC>D__10_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READUTF8ASYNC>D__10_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

