#pragma once
#include "unitysdk.h"

#define FIXEDNORMALATTACKSPEEDFRAMEDATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F63D0)
#define FIXEDNORMALATTACKSPEEDFRAMEDATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F6390)
#define FIXEDNORMALATTACKSPEEDFRAMEDATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F6420)

	inline static constexpr unsigned int FixedNormalAttackSpeedFrameDataFormatter_TypeDefinitionIndex = 13651;

	class FixedNormalAttackSpeedFrameDataFormatter : public ::System::Collections::ListDictionaryInternal
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::FixedNormalAttackSpeedFrameData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::FixedNormalAttackSpeedFrameData&*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDNORMALATTACKSPEEDFRAMEDATAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXEDNORMALATTACKSPEEDFRAMEDATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::FixedNormalAttackSpeedFrameData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::FixedNormalAttackSpeedFrameData&*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDNORMALATTACKSPEEDFRAMEDATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

