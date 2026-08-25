#pragma once
#include "unitysdk.h"

namespace MemoryPack::Internal { class ReusableLinkedArrayBufferWriter; }
namespace MemoryPack::Internal { class BufferSegment; }

#define <WRITETOANDRESETASYNC>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9070450)
#define <WRITETOANDRESETASYNC>D__19_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x90716E0)

	inline static constexpr unsigned int <WriteToAndResetAsync>d__19_TypeDefinitionIndex = 35452;

	class <WriteToAndResetAsync>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder* __t__builder; // 0x18
		::MemoryPack::Internal::ReusableLinkedArrayBufferWriter* __4__this; // 0x38
		::System::IO::Stream* stream; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		ConfiguredValueTaskAwaiter* __u__1; // 0x50
		Il2CppObject* __7__wrap1; // 0x60
		::MemoryPack::Internal::BufferSegment* _item_5__3; // 0x80

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITETOANDRESETASYNC>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITETOANDRESETASYNC>D__19_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

