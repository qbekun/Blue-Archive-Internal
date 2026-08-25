#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class AuraEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define AURAENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17773D0)
#define AURAENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1777410)
#define AURAENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1777830)
#define AURAENTITYDAOFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1777C70)

	inline static constexpr unsigned int AuraEntityDAOFormatter_TypeDefinitionIndex = 15534;

	class AuraEntityDAOFormatter : public ::System::Reflection::Emit::EventBuilder
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AURAENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AURAENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AURAENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AURAENTITYDAOFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

	};

