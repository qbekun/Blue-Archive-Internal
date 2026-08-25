#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextWriter; }

#define <DOWRITECOMMENTASYNC>D__115_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x947F3F0)
#define <DOWRITECOMMENTASYNC>D__115_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x947F9A0)

	inline static constexpr unsigned int <DoWriteCommentAsync>d__115_TypeDefinitionIndex = 31753;

	class <DoWriteCommentAsync>d__115 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextWriter* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::String* text; // 0x40
		ConfiguredTaskAwaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWRITECOMMENTASYNC>D__115_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DOWRITECOMMENTASYNC>D__115_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

