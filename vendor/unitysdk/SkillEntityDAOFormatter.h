#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define SKILLENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1703630)
#define SKILLENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1703530)
#define SKILLENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1703E70)
#define SKILLENTITYDAOFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1705770)

	inline static constexpr unsigned int SkillEntityDAOFormatter_TypeDefinitionIndex = 15479;

	class SkillEntityDAOFormatter : public ::System::IO::FileStreamAsyncResult
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLENTITYDAOFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

	};

