#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_GAUGEMAGNIFICATIONSETTING_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12A91A0)
#define MX_LOGIC_BATTLES_GAUGEMAGNIFICATIONSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A92D0)
#define MX_LOGIC_BATTLES_GAUGEMAGNIFICATIONSETTING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12A92E0)
#define MX_LOGIC_BATTLES_GAUGEMAGNIFICATIONSETTING_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12A92F0)
#define MX_LOGIC_BATTLES_GAUGEMAGNIFICATIONSETTING_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12A94F0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GaugeMagnificationSetting_TypeDefinitionIndex = 14117;

	class GaugeMagnificationSetting : public Il2CppObject
	{
	public:
		::System::Int64 GaugeBottom; // 0x10
		::System::Int64 MagnificationValue; // 0x18

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GaugeMagnificationSetting&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GaugeMagnificationSetting&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GAUGEMAGNIFICATIONSETTING_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GAUGEMAGNIFICATIONSETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GAUGEMAGNIFICATIONSETTING_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GAUGEMAGNIFICATIONSETTING_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GaugeMagnificationSetting&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GaugeMagnificationSetting&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GAUGEMAGNIFICATIONSETTING_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

