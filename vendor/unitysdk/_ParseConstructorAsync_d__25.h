#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <PARSECONSTRUCTORASYNC>D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x946DD50)
#define <PARSECONSTRUCTORASYNC>D__25_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x946E7A0)

	inline static constexpr unsigned int <ParseConstructorAsync>d__25_TypeDefinitionIndex = 31726;

	class <ParseConstructorAsync>d__25 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		Il2CppObject* __u__1; // 0x40
		::System::Int32 _initialPosition_5__2; // 0x50
		::System::Int32 _endPosition_5__3; // 0x54
		::System::String* _constructorName_5__4; // 0x58
		ConfiguredTaskAwaiter* __u__2; // 0x60
		Il2CppObject* __u__3; // 0x70

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PARSECONSTRUCTORASYNC>D__25_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PARSECONSTRUCTORASYNC>D__25_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

