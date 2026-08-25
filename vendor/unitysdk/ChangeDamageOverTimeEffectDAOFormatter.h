#pragma once
#include "unitysdk.h"

#define CHANGEDAMAGEOVERTIMEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14BE470)
#define CHANGEDAMAGEOVERTIMEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14BE4C0)
#define CHANGEDAMAGEOVERTIMEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14B7FE0)

	inline static constexpr unsigned int ChangeDamageOverTimeEffectDAOFormatter_TypeDefinitionIndex = 15201;

	class ChangeDamageOverTimeEffectDAOFormatter : public Pattern
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ChangeDamageOverTimeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ChangeDamageOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGEDAMAGEOVERTIMEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ChangeDamageOverTimeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ChangeDamageOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGEDAMAGEOVERTIMEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGEDAMAGEOVERTIMEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

