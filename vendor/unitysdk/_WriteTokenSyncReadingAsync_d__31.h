#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonReader; }

#define <WRITETOKENSYNCREADINGASYNC>D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9499D00)
#define <WRITETOKENSYNCREADINGASYNC>D__31_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x949A1C0)

	inline static constexpr unsigned int <WriteTokenSyncReadingAsync>d__31_TypeDefinitionIndex = 31786;

	class <WriteTokenSyncReadingAsync>d__31 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonWriter* __4__this; // 0x30
		::Newtonsoft::Json::JsonReader* reader; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		::System::Int32 _initialDepth_5__2; // 0x48
		Il2CppObject* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITETOKENSYNCREADINGASYNC>D__31_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITETOKENSYNCREADINGASYNC>D__31_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

