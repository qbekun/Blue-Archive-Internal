#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class SelectExSkillActionDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define SELECTEXSKILLACTIONDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17EC810)
#define SELECTEXSKILLACTIONDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17EC850)
#define SELECTEXSKILLACTIONDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17EC8B0)

	inline static constexpr unsigned int SelectExSkillActionDAOFormatter_TypeDefinitionIndex = 15608;

	class SelectExSkillActionDAOFormatter : public SynchronousAsyncResult
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTEXSKILLACTIONDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SelectExSkillActionDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SelectExSkillActionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEXSKILLACTIONDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SelectExSkillActionDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SelectExSkillActionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTEXSKILLACTIONDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

