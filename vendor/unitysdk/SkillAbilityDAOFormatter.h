#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class SkillAbilityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define SKILLABILITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16DC250)
#define SKILLABILITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16DC640)
#define SKILLABILITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16DC210)
#define SKILLABILITYDAOFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16DC970)

	inline static constexpr unsigned int SkillAbilityDAOFormatter_TypeDefinitionIndex = 15391;

	class SkillAbilityDAOFormatter : public ::System::IO::StringReader
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillAbilityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillAbilityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLABILITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillAbilityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillAbilityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLABILITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLABILITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLABILITYDAOFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

	};

