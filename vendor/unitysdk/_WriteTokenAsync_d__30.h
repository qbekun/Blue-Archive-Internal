#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonReader; }

#define <WRITETOKENASYNC>D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x94995E0)
#define <WRITETOKENASYNC>D__30_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9499CA0)

	inline static constexpr unsigned int <WriteTokenAsync>d__30_TypeDefinitionIndex = 31785;

	class <WriteTokenAsync>d__30 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonWriter* __4__this; // 0x30
		::Newtonsoft::Json::JsonReader* reader; // 0x38
		::System::Boolean writeDateConstructorAsDate; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		::System::Boolean writeComments; // 0x50
		::System::Boolean writeChildren; // 0x51
		::System::Int32 _initialDepth_5__2; // 0x54
		ConfiguredTaskAwaiter* __u__1; // 0x58
		Il2CppObject* __u__2; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITETOKENASYNC>D__30_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITETOKENASYNC>D__30_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

