#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::AppData::DAO::Battle { class SkillVisualDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define SKILLVISUALDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CEAB40)
#define SKILLVISUALDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CEAB90)
#define SKILLVISUALDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CE74A0)

	inline static constexpr unsigned int SkillVisualDAOFormatter_TypeDefinitionIndex = 19873;

	class SkillVisualDAOFormatter : public ::System::IO::CStreamReader
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::SkillVisualDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::SkillVisualDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLVISUALDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::SkillVisualDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::SkillVisualDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLVISUALDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLVISUALDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

