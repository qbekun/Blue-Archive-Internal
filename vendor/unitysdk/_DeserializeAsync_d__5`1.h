#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackSerializerOptions; }
namespace MemoryPack::Internal { class ReusableReadOnlySequenceBuilder; }

#define <DESERIALIZEASYNC>D__5`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <DESERIALIZEASYNC>D__5`1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <DeserializeAsync>d__5`1_TypeDefinitionIndex = 35431;

	class <DeserializeAsync>d__5`1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		Il2CppObject* __t__builder; // 0x0
		::System::IO::Stream* stream; // 0x0
		::System::Threading::CancellationToken* cancellationToken; // 0x0
		::MemoryPack::MemoryPackSerializerOptions* options; // 0x0
		::MemoryPack::Internal::ReusableReadOnlySequenceBuilder* _builder_5__2; // 0x0
		::Il2CppArray<::System::Object*>* _buffer_5__3; // 0x0
		::System::Int32 _offset_5__4; // 0x0
		Il2CppObject* __u__1; // 0x0

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DESERIALIZEASYNC>D__5`1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DESERIALIZEASYNC>D__5`1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

