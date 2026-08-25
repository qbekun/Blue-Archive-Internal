#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <PARSEPROPERTYASYNC>D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9470370)
#define <PARSEPROPERTYASYNC>D__31_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9470A90)

	inline static constexpr unsigned int <ParsePropertyAsync>d__31_TypeDefinitionIndex = 31733;

	class <ParsePropertyAsync>d__31 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Char _quoteChar_5__2; // 0x40
		::System::String* _propertyName_5__3; // 0x48
		ConfiguredTaskAwaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PARSEPROPERTYASYNC>D__31_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PARSEPROPERTYASYNC>D__31_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

