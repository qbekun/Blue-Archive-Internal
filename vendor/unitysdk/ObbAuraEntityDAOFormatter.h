#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ObbAuraEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define OBBAURAENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1785120)
#define OBBAURAENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1785170)
#define OBBAURAENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17850E0)

	inline static constexpr unsigned int ObbAuraEntityDAOFormatter_TypeDefinitionIndex = 15540;

	class ObbAuraEntityDAOFormatter : public <FlushAsyncInternal>d__74
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ObbAuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ObbAuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + OBBAURAENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ObbAuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ObbAuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + OBBAURAENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBAURAENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

