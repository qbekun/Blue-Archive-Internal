#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDPLAYTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2176120)
#define GROUNDCOMMANDPLAYTIMELINE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x2176170)
#define GROUNDCOMMANDPLAYTIMELINE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2176370)
#define GROUNDCOMMANDPLAYTIMELINE_ENABLEFORCEEXCUTEEND_OFFSET UNITYSDK_OFFSET(0x2177A70)
#define GROUNDCOMMANDPLAYTIMELINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2177C40)
#define GROUNDCOMMANDPLAYTIMELINE_COFORCEEXECUTEEND_OFFSET UNITYSDK_OFFSET(0x2177BA0)
#define GROUNDCOMMANDPLAYTIMELINE_SHOULDSERIALIZEFORCEEXECUTEENDTIMEONPLAYING_OFFSET UNITYSDK_OFFSET(0x2177C70)
#define GROUNDCOMMANDPLAYTIMELINE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2177C80)
#define GROUNDCOMMANDPLAYTIMELINE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2177CA0)

	inline static constexpr unsigned int GroundCommandPlayTimeline_TypeDefinitionIndex = 4037;

	class GroundCommandPlayTimeline : public Il2CppObject
	{
	public:
		::System::String* TimelinePath; // 0x30
		::System::Boolean UseGameTime; // 0x38
		::System::Boolean CanSkip; // 0x39
		::System::Boolean FadeInImmediately; // 0x3A
		::System::Boolean FadeInWhenStart; // 0x3B
		::System::Boolean FadeOutInWhenEnd; // 0x3C
		::System::Boolean FadeInWhenEnd; // 0x3D
		::System::Int64 ForceExecuteEndTimeOnPlaying; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandPlayTimeline&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandPlayTimeline&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EnableForceExcuteEnd(::System::Action* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Action*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINE_ENABLEFORCEEXCUTEEND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoForceExecuteEnd(::System::Action* arg, ::System::Single arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINE_COFORCEEXECUTEEND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ShouldSerializeForceExecuteEndTimeOnPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINE_SHOULDSERIALIZEFORCEEXECUTEENDTIMEONPLAYING_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandPlayTimeline&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandPlayTimeline&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

