#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextWriter; }
namespace Newtonsoft::Json { class StringEscapeHandling; }

#define <WRITEDEFINITELYESCAPEDJAVASCRIPTSTRINGWITHOUTDELIMITERSASYNC>D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x94AFEF0)
#define <WRITEDEFINITELYESCAPEDJAVASCRIPTSTRINGWITHOUTDELIMITERSASYNC>D__16_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x94B0A30)

	inline static constexpr unsigned int <WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync>d__16_TypeDefinitionIndex = 31867;

	class <WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync>d__16 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Il2CppArray<::System::Object*>* writeBuffer; // 0x30
		::System::Int32 lastWritePosition; // 0x38
		::Newtonsoft::Json::JsonTextWriter* client; // 0x40
		::System::String* s; // 0x48
		::System::IO::TextWriter* writer; // 0x50
		::System::Threading::CancellationToken* cancellationToken; // 0x58
		::Il2CppArray<::System::Object*>* charEscapeFlags; // 0x60
		::Newtonsoft::Json::StringEscapeHandling* stringEscapeHandling; // 0x68
		::System::Boolean _isEscapedUnicodeText_5__2; // 0x6C
		::System::String* _escapedValue_5__3; // 0x70
		ConfiguredTaskAwaiter* __u__1; // 0x78
		::System::Int32 _i_5__4; // 0x88

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITEDEFINITELYESCAPEDJAVASCRIPTSTRINGWITHOUTDELIMITERSASYNC>D__16_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITEDEFINITELYESCAPEDJAVASCRIPTSTRINGWITHOUTDELIMITERSASYNC>D__16_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

