#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Visual::Data { class PositionSetting&; }
namespace MemoryPack { class MemoryPackReader&; }

#define POSITIONSETTINGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D5B990)
#define POSITIONSETTINGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D5B9E0)
#define POSITIONSETTINGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A530)

	inline static constexpr unsigned int PositionSettingFormatter_TypeDefinitionIndex = 20219;

	class PositionSettingFormatter : public ::System::IO::EnumerationOptions
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Visual::Data::PositionSetting&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Visual::Data::PositionSetting&*, ::PVOID))((::PBYTE)hIl2Cpp + POSITIONSETTINGFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Visual::Data::PositionSetting&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Visual::Data::PositionSetting&*, ::PVOID))((::PBYTE)hIl2Cpp + POSITIONSETTINGFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSITIONSETTINGFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

