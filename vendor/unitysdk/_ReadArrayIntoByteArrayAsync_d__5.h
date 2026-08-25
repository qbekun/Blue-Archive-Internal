#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonReader; }

#define <READARRAYINTOBYTEARRAYASYNC>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9456F20)
#define <READARRAYINTOBYTEARRAYASYNC>D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9457330)

	inline static constexpr unsigned int <ReadArrayIntoByteArrayAsync>d__5_TypeDefinitionIndex = 31701;

	class <ReadArrayIntoByteArrayAsync>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		Il2CppObject* _buffer_5__2; // 0x40
		Il2CppObject* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READARRAYINTOBYTEARRAYASYNC>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READARRAYINTOBYTEARRAYASYNC>D__5_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

