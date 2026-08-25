#pragma once
#include "unitysdk.h"

#define AMPLIFYDOTREDUCEPERIODEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14CC140)
#define AMPLIFYDOTREDUCEPERIODEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14CF4C0)
#define AMPLIFYDOTREDUCEPERIODEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14CF510)

	inline static constexpr unsigned int AmplifyDoTReducePeriodEffectDAOFormatter_TypeDefinitionIndex = 15209;

	class AmplifyDoTReducePeriodEffectDAOFormatter : public ::System::Reflection::MonoPropertyInfo
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPLIFYDOTREDUCEPERIODEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AmplifyDoTReducePeriodEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AmplifyDoTReducePeriodEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AMPLIFYDOTREDUCEPERIODEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AmplifyDoTReducePeriodEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AmplifyDoTReducePeriodEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AMPLIFYDOTREDUCEPERIODEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

