#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonSlot; }

#define MX_LOGIC_DATA_ECHELONSLOTINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11ECF40)
#define MX_LOGIC_DATA_ECHELONSLOTINFO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11ECF90)
#define MX_LOGIC_DATA_ECHELONSLOTINFO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11ECFE0)
#define MX_LOGIC_DATA_ECHELONSLOTINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11ED2A0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int EchelonSlotInfo_TypeDefinitionIndex = 13477;

	class EchelonSlotInfo : public Il2CppObject
	{
	public:
		::FlatData::EchelonSlot* EchelonSlotType; // 0x10
		::System::Int32 EchelonSlotNumber; // 0x14

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::EchelonSlotInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::EchelonSlotInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTINFO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::EchelonSlotInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::EchelonSlotInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTINFO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTINFO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTINFO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

