#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class BreathAreaEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define BREATHAREAENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x171E670)
#define BREATHAREAENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x171E6C0)
#define BREATHAREAENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x171A430)

	inline static constexpr unsigned int BreathAreaEntityDAOFormatter_TypeDefinitionIndex = 15490;

	class BreathAreaEntityDAOFormatter : public ::System::Globalization::DaylightTime
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BreathAreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BreathAreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BREATHAREAENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BreathAreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BreathAreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BREATHAREAENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BREATHAREAENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

