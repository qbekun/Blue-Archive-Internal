#pragma once
#include "unitysdk.h"

#define ADDCURRENTATGEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14A38C0)
#define ADDCURRENTATGEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14A6F60)
#define ADDCURRENTATGEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14A6FB0)

	inline static constexpr unsigned int AddCurrentATGEffectDAOFormatter_TypeDefinitionIndex = 15191;

	class AddCurrentATGEffectDAOFormatter : public ::System::Reflection::MonoEventInfo
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDCURRENTATGEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AddCurrentATGEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AddCurrentATGEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDCURRENTATGEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AddCurrentATGEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AddCurrentATGEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ADDCURRENTATGEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

