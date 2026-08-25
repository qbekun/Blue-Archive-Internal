#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDFADEOUTINV2_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x216EF90)
#define GROUNDCOMMANDFADEOUTINV2_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x216F8C0)
#define GROUNDCOMMANDFADEOUTINV2_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x216FAC0)
#define GROUNDCOMMANDFADEOUTINV2_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2170940)
#define GROUNDCOMMANDFADEOUTINV2_.CTOR_OFFSET UNITYSDK_OFFSET(0x21708F0)

	inline static constexpr unsigned int GroundCommandFadeOutInV2_TypeDefinitionIndex = 4026;

	class GroundCommandFadeOutInV2 : public Il2CppObject
	{
	public:
		::System::Int32 FadeOutOngoingDurationMs; // 0x30
		::System::Int32 FadeOutKeepDurationMs; // 0x34
		::System::Int32 FadeInOngoingDurationMs; // 0x38
		::System::Int32 FadeColorR; // 0x3C
		::System::Int32 FadeColorG; // 0x40
		::System::Int32 FadeColorB; // 0x44

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandFadeOutInV2&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandFadeOutInV2&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINV2_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINV2_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandFadeOutInV2&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandFadeOutInV2&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINV2_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINV2_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINV2_.CTOR_OFFSET))(nullptr);
		}

	};

