#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_CARRIERDATAINFO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12FC4F0)
#define MX_LOGIC_BATTLES_CARRIERDATAINFO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12FC6F0)
#define MX_LOGIC_BATTLES_CARRIERDATAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x12FDB70)
#define MX_LOGIC_BATTLES_CARRIERDATAINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12FDB80)
#define MX_LOGIC_BATTLES_CARRIERDATAINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12FDB90)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CarrierDataInfo_TypeDefinitionIndex = 14209;

	class CarrierDataInfo : public Il2CppObject
	{
	public:
		::System::String* skillGroupId; // 0x10
		::System::Int32 skillLevel; // 0x18
		::System::String* skillCardTexture; // 0x20
		::System::Int32 skillUseCount; // 0x28
		::System::Boolean forceCoolTimeComplete; // 0x2C

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERDATAINFO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::CarrierDataInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::CarrierDataInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERDATAINFO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERDATAINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERDATAINFO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::CarrierDataInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::CarrierDataInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERDATAINFO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

