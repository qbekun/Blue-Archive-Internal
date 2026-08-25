#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Linq { class JContainer; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace Newtonsoft::Json { class IJsonLineInfo; }

#define <READCONTENTFROMASYNC>D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9500690)
#define <READCONTENTFROMASYNC>D__1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x95010D0)

	inline static constexpr unsigned int <ReadContentFromAsync>d__1_TypeDefinitionIndex = 32018;

	class <ReadContentFromAsync>d__1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonReader* reader; // 0x30
		::Newtonsoft::Json::Linq::JContainer* __4__this; // 0x38
		::Newtonsoft::Json::Linq::JsonLoadSettings* settings; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		::Newtonsoft::Json::IJsonLineInfo* _lineInfo_5__2; // 0x50
		::Newtonsoft::Json::Linq::JContainer* _parent_5__3; // 0x58
		ConfiguredTaskAwaiter* __u__1; // 0x60
		Il2CppObject* __u__2; // 0x70

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READCONTENTFROMASYNC>D__1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READCONTENTFROMASYNC>D__1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

