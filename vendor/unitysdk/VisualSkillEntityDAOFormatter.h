#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::AppData::DAO::Battle { class VisualSkillEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define VISUALSKILLENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CEEA40)
#define VISUALSKILLENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CEEA00)
#define VISUALSKILLENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CEEA90)

	inline static constexpr unsigned int VisualSkillEntityDAOFormatter_TypeDefinitionIndex = 19877;

	class VisualSkillEntityDAOFormatter : public __StaticArrayInitTypeSize=2382
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::VisualSkillEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::VisualSkillEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + VISUALSKILLENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VISUALSKILLENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::VisualSkillEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::VisualSkillEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + VISUALSKILLENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

