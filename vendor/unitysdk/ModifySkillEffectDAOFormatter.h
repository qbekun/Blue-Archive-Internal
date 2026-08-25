#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ModifySkillEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MODIFYSKILLEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15D8510)
#define MODIFYSKILLEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D8550)
#define MODIFYSKILLEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D85A0)

	inline static constexpr unsigned int ModifySkillEffectDAOFormatter_TypeDefinitionIndex = 15291;

	class ModifySkillEffectDAOFormatter : public ::System::IO::IOException
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYSKILLEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ModifySkillEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ModifySkillEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MODIFYSKILLEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ModifySkillEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ModifySkillEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MODIFYSKILLEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

