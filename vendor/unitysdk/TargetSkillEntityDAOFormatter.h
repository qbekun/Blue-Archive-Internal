#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class TargetSkillEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define TARGETSKILLENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17678A0)
#define TARGETSKILLENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x176ADC0)
#define TARGETSKILLENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x176AE10)

	inline static constexpr unsigned int TargetSkillEntityDAOFormatter_TypeDefinitionIndex = 15524;

	class TargetSkillEntityDAOFormatter : public __StaticArrayInitTypeSize=152
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TARGETSKILLENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TargetSkillEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TargetSkillEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TARGETSKILLENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TargetSkillEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TargetSkillEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TARGETSKILLENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

