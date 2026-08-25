#pragma once
#include "unitysdk.h"

#define ADDSKILLCOSTEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14AF4C0)
#define ADDSKILLCOSTEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14ADE00)
#define ADDSKILLCOSTEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14AF510)

	inline static constexpr unsigned int AddSkillCostEffectDAOFormatter_TypeDefinitionIndex = 15195;

	class AddSkillCostEffectDAOFormatter : public ::System::Reflection::MonoMethodInfo
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AddSkillCostEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AddSkillCostEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDSKILLCOSTEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDSKILLCOSTEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AddSkillCostEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AddSkillCostEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDSKILLCOSTEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

