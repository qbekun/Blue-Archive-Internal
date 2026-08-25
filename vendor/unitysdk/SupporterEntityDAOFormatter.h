#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class SupporterEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define SUPPORTERENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17B4930)
#define SUPPORTERENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17AF8E0)
#define SUPPORTERENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17B4980)

	inline static constexpr unsigned int SupporterEntityDAOFormatter_TypeDefinitionIndex = 15560;

	class SupporterEntityDAOFormatter : public __StaticArrayInitTypeSize=32
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SupporterEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SupporterEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTERENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTERENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SupporterEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SupporterEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTERENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

