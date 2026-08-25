#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ObbAreaEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define OBBAREAENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x170EA40)
#define OBBAREAENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1712030)
#define OBBAREAENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1712080)

	inline static constexpr unsigned int ObbAreaEntityDAOFormatter_TypeDefinitionIndex = 15486;

	class ObbAreaEntityDAOFormatter : public <WriteAsyncInternal>d__62
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBAREAENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ObbAreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ObbAreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + OBBAREAENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ObbAreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ObbAreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + OBBAREAENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

