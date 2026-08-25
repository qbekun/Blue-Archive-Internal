#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class AreaTimelineDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define AREATIMELINEDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17DC5E0)
#define AREATIMELINEDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DCE60)
#define AREATIMELINEDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DCEB0)

	inline static constexpr unsigned int AreaTimelineDAOFormatter_TypeDefinitionIndex = 15595;

	class AreaTimelineDAOFormatter : public ::System::Reflection::Emit::AssemblyBuilder
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREATIMELINEDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AreaTimelineDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AreaTimelineDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AREATIMELINEDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AreaTimelineDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AreaTimelineDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AREATIMELINEDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

