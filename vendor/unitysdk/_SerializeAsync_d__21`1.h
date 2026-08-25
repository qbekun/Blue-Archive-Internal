#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackSerializerOptions; }
namespace MemoryPack::Internal { class ReusableLinkedArrayBufferWriter; }

#define <SERIALIZEASYNC>D__21`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <SERIALIZEASYNC>D__21`1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <SerializeAsync>d__21`1_TypeDefinitionIndex = 35434;

	class <SerializeAsync>d__21`1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder* __t__builder; // 0x0
		Il2CppObject* value; // 0x0
		::MemoryPack::MemoryPackSerializerOptions* options; // 0x0
		::System::IO::Stream* stream; // 0x0
		::System::Threading::CancellationToken* cancellationToken; // 0x0
		::MemoryPack::Internal::ReusableLinkedArrayBufferWriter* _tempWriter_5__2; // 0x0
		ConfiguredValueTaskAwaiter* __u__1; // 0x0
		ConfiguredTaskAwaiter* __u__2; // 0x0

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SERIALIZEASYNC>D__21`1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SERIALIZEASYNC>D__21`1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

