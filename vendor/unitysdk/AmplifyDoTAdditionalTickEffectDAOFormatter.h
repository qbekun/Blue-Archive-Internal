#pragma once
#include "unitysdk.h"

#define AMPLIFYDOTADDITIONALTICKEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14D5120)
#define AMPLIFYDOTADDITIONALTICKEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14CF8F0)
#define AMPLIFYDOTADDITIONALTICKEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14D5170)

	inline static constexpr unsigned int AmplifyDoTAdditionalTickEffectDAOFormatter_TypeDefinitionIndex = 15211;

	class AmplifyDoTAdditionalTickEffectDAOFormatter : public ::System::Reflection::RuntimeParameterInfo
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AmplifyDoTAdditionalTickEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AmplifyDoTAdditionalTickEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AMPLIFYDOTADDITIONALTICKEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPLIFYDOTADDITIONALTICKEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AmplifyDoTAdditionalTickEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AmplifyDoTAdditionalTickEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AMPLIFYDOTADDITIONALTICKEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

