#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class NewSkillActionDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define NEWSKILLACTIONDAOFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17E0E10)
#define NEWSKILLACTIONDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17E0DC0)
#define NEWSKILLACTIONDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17E0F40)
#define NEWSKILLACTIONDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17E1360)

	inline static constexpr unsigned int NewSkillActionDAOFormatter_TypeDefinitionIndex = 15601;

	class NewSkillActionDAOFormatter : public ::System::IO::PathTooLongException
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWSKILLACTIONDAOFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWSKILLACTIONDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::NewSkillActionDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::NewSkillActionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWSKILLACTIONDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::NewSkillActionDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::NewSkillActionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWSKILLACTIONDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

