#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDFADEOUTIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x216D1F0)
#define GROUNDCOMMANDFADEOUTIN_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x216D240)
#define GROUNDCOMMANDFADEOUTIN_.CCTOR_OFFSET UNITYSDK_OFFSET(0x216DB40)
#define GROUNDCOMMANDFADEOUTIN_COWAITFORFADEOUT_OFFSET UNITYSDK_OFFSET(0x216DD10)
#define GROUNDCOMMANDFADEOUTIN_REMOVE_ONFADEINSTART_OFFSET UNITYSDK_OFFSET(0x216DDA0)
#define GROUNDCOMMANDFADEOUTIN_ADD_ONFADEINSTART_OFFSET UNITYSDK_OFFSET(0x216DE40)
#define GROUNDCOMMANDFADEOUTIN_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x216DB50)
#define GROUNDCOMMANDFADEOUTIN_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x216DF20)
#define GROUNDCOMMANDFADEOUTIN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x216EC00)

	inline static constexpr unsigned int GroundCommandFadeOutIn_TypeDefinitionIndex = 4024;

	class GroundCommandFadeOutIn : public Il2CppObject
	{
	public:
		::System::Single DelayBeforeFadeOut; // 0x30
		::System::Single DelayBeforeFadeIn; // 0x34
		::System::Single VisualDelayFadeInStart; // 0x38
		::System::EventHandler* OnFadeInStart; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTIN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandFadeOutIn&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandFadeOutIn&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTIN_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTIN_.CCTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoWaitForFadeOut()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTIN_COWAITFORFADEOUT_OFFSET))(nullptr);
		}

		::System::Void remove_OnFadeInStart(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTIN_REMOVE_ONFADEINSTART_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnFadeInStart(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTIN_ADD_ONFADEINSTART_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTIN_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandFadeOutIn&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandFadeOutIn&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTIN_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTIN_EXECUTE_OFFSET))(arg, nullptr);
		}

	};

