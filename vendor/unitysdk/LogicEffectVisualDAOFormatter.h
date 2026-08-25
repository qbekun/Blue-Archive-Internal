#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::AppData::DAO::Battle { class LogicEffectVisualDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define LOGICEFFECTVISUALDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CE4500)
#define LOGICEFFECTVISUALDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CE4550)
#define LOGICEFFECTVISUALDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CE2580)

	inline static constexpr unsigned int LogicEffectVisualDAOFormatter_TypeDefinitionIndex = 19866;

	class LogicEffectVisualDAOFormatter : public ::System::IO::DisableMediaInsertionPrompt
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::LogicEffectVisualDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::LogicEffectVisualDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTVISUALDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::LogicEffectVisualDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::LogicEffectVisualDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTVISUALDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTVISUALDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

