#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class StringEscapeHandling; }
namespace Newtonsoft::Json { class JsonTextWriter; }

#define <WRITEESCAPEDJAVASCRIPTSTRINGWITHDELIMITERSASYNC>D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x94B0A90)
#define <WRITEESCAPEDJAVASCRIPTSTRINGWITHDELIMITERSASYNC>D__13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x94B0ED0)

	inline static constexpr unsigned int <WriteEscapedJavaScriptStringWithDelimitersAsync>d__13_TypeDefinitionIndex = 31868;

	class <WriteEscapedJavaScriptStringWithDelimitersAsync>d__13 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::Tasks::Task* task; // 0x30
		::System::String* s; // 0x38
		::System::IO::TextWriter* writer; // 0x40
		::Il2CppArray<::System::Object*>* charEscapeFlags; // 0x48
		::Newtonsoft::Json::StringEscapeHandling* stringEscapeHandling; // 0x50
		::Newtonsoft::Json::JsonTextWriter* client; // 0x58
		::Il2CppArray<::System::Object*>* writeBuffer; // 0x60
		::System::Threading::CancellationToken* cancellationToken; // 0x68
		::System::Char delimiter; // 0x70
		ConfiguredTaskAwaiter* __u__1; // 0x78

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITEESCAPEDJAVASCRIPTSTRINGWITHDELIMITERSASYNC>D__13_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITEESCAPEDJAVASCRIPTSTRINGWITHDELIMITERSASYNC>D__13_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

