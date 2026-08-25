#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ManualSkillDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MANUALSKILLDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17E0A70)
#define MANUALSKILLDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17E0AC0)
#define MANUALSKILLDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17DE4C0)

	inline static constexpr unsigned int ManualSkillDAOFormatter_TypeDefinitionIndex = 15599;

	class ManualSkillDAOFormatter : public ::System::IO::FileSystem
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ManualSkillDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ManualSkillDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MANUALSKILLDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ManualSkillDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ManualSkillDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MANUALSKILLDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANUALSKILLDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

