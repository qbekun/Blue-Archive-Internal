#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <PARSECOMMENTASYNC>D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x946D400)
#define <PARSECOMMENTASYNC>D__16_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x946DCF0)

	inline static constexpr unsigned int <ParseCommentAsync>d__16_TypeDefinitionIndex = 31725;

	class <ParseCommentAsync>d__16 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Boolean setToken; // 0x40
		::System::Boolean _singlelineComment_5__2; // 0x41
		::System::Int32 _initialPosition_5__3; // 0x44
		Il2CppObject* __u__1; // 0x48
		Il2CppObject* __u__2; // 0x58
		ConfiguredTaskAwaiter* __u__3; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PARSECOMMENTASYNC>D__16_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PARSECOMMENTASYNC>D__16_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

