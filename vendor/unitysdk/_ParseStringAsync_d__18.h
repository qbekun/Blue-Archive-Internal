#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }
namespace Newtonsoft::Json { class ReadType; }

#define <PARSESTRINGASYNC>D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9470B00)
#define <PARSESTRINGASYNC>D__18_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9470DA0)

	inline static constexpr unsigned int <ParseStringAsync>d__18_TypeDefinitionIndex = 31734;

	class <ParseStringAsync>d__18 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::CancellationToken* cancellationToken; // 0x30
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x38
		::System::Char quote; // 0x40
		::Newtonsoft::Json::ReadType* readType; // 0x44
		ConfiguredTaskAwaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PARSESTRINGASYNC>D__18_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PARSESTRINGASYNC>D__18_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

