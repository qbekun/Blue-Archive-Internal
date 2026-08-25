#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Actions { class NormalAttackAnimationFrameKey; }

#define MX_LOGIC_DATA_FIXEDNORMALATTACKSPEEDFRAMEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F5C70)
#define MX_LOGIC_DATA_FIXEDNORMALATTACKSPEEDFRAMEDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F5C80)
#define MX_LOGIC_DATA_FIXEDNORMALATTACKSPEEDFRAMEDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F5DB0)
#define MX_LOGIC_DATA_FIXEDNORMALATTACKSPEEDFRAMEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11F6100)
#define MX_LOGIC_DATA_FIXEDNORMALATTACKSPEEDFRAMEDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11F6110)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int FixedNormalAttackSpeedFrameData_TypeDefinitionIndex = 13652;

	class FixedNormalAttackSpeedFrameData : public Il2CppObject
	{
	public:
		::MX::Logic::Actions::NormalAttackAnimationFrameKey* Key; // 0x10
		::System::Int64 Value; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FIXEDNORMALATTACKSPEEDFRAMEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::FixedNormalAttackSpeedFrameData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::FixedNormalAttackSpeedFrameData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FIXEDNORMALATTACKSPEEDFRAMEDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::FixedNormalAttackSpeedFrameData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::FixedNormalAttackSpeedFrameData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FIXEDNORMALATTACKSPEEDFRAMEDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FIXEDNORMALATTACKSPEEDFRAMEDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FIXEDNORMALATTACKSPEEDFRAMEDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

