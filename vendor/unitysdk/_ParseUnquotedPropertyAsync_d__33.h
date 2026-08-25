#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <PARSEUNQUOTEDPROPERTYASYNC>D__33_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9471120)
#define <PARSEUNQUOTEDPROPERTYASYNC>D__33_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9471490)

	inline static constexpr unsigned int <ParseUnquotedPropertyAsync>d__33_TypeDefinitionIndex = 31736;

	class <ParseUnquotedPropertyAsync>d__33 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Int32 _initialPosition_5__2; // 0x40
		Il2CppObject* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PARSEUNQUOTEDPROPERTYASYNC>D__33_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PARSEUNQUOTEDPROPERTYASYNC>D__33_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

