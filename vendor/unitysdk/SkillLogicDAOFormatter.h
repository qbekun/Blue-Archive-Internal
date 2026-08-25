#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class SkillLogicDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define SKILLLOGICDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DD560)
#define SKILLLOGICDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DDAB0)
#define SKILLLOGICDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17DD510)
#define SKILLLOGICDAOFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17DDF40)

	inline static constexpr unsigned int SkillLogicDAOFormatter_TypeDefinitionIndex = 15597;

	class SkillLogicDAOFormatter : public ::System::IO::UnexceptionalStreamReader
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillLogicDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillLogicDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLLOGICDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillLogicDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillLogicDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLLOGICDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLLOGICDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLLOGICDAOFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

	};

