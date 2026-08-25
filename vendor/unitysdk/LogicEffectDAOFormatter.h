#pragma once
#include "unitysdk.h"

#define LOGICEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1480EC0)
#define LOGICEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1480E80)
#define LOGICEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1484270)
#define LOGICEFFECTDAOFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1484FB0)

	inline static constexpr unsigned int LogicEffectDAOFormatter_TypeDefinitionIndex = 15181;

	class LogicEffectDAOFormatter : public DecomposedGuid
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::LogicEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::LogicEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::LogicEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::LogicEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTDAOFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

	};

