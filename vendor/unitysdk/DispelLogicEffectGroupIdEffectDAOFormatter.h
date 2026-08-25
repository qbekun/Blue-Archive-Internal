#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class DispelLogicEffectGroupIdEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define DISPELLOGICEFFECTGROUPIDEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1518A40)
#define DISPELLOGICEFFECTGROUPIDEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1516220)
#define DISPELLOGICEFFECTGROUPIDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1518A90)

	inline static constexpr unsigned int DispelLogicEffectGroupIdEffectDAOFormatter_TypeDefinitionIndex = 15235;

	class DispelLogicEffectGroupIdEffectDAOFormatter : public ::System::Diagnostics::DebuggerTypeProxyAttribute
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DispelLogicEffectGroupIdEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DispelLogicEffectGroupIdEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DISPELLOGICEFFECTGROUPIDEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DISPELLOGICEFFECTGROUPIDEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DispelLogicEffectGroupIdEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DispelLogicEffectGroupIdEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DISPELLOGICEFFECTGROUPIDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

