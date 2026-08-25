#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class DispelLogicEffectTemplateEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define DISPELLOGICEFFECTTEMPLATEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x151D320)
#define DISPELLOGICEFFECTTEMPLATEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x151D370)
#define DISPELLOGICEFFECTTEMPLATEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1518D70)

	inline static constexpr unsigned int DispelLogicEffectTemplateEffectDAOFormatter_TypeDefinitionIndex = 15237;

	class DispelLogicEffectTemplateEffectDAOFormatter : public ::System::Diagnostics::DebuggerDisplayAttribute
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DispelLogicEffectTemplateEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DispelLogicEffectTemplateEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DISPELLOGICEFFECTTEMPLATEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DispelLogicEffectTemplateEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DispelLogicEffectTemplateEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DISPELLOGICEFFECTTEMPLATEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DISPELLOGICEFFECTTEMPLATEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

