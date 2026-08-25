#pragma once
#include "unitysdk.h"

#define DAMAGEDLIMITEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14E96F0)
#define DAMAGEDLIMITEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14EEE10)
#define DAMAGEDLIMITEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14EEE60)

	inline static constexpr unsigned int DamagedLimitEffectDAOFormatter_TypeDefinitionIndex = 15219;

	class DamagedLimitEffectDAOFormatter : public ::System::Diagnostics::DebuggerHiddenAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEDLIMITEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DamagedLimitEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DamagedLimitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEDLIMITEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DamagedLimitEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DamagedLimitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEDLIMITEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

