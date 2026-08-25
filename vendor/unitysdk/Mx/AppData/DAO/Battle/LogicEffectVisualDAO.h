#pragma once
#include "../../../../unitysdk.h"

namespace MX::AppData::DAO::Battle { class VisualEffectDAO; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::AppData::DAO::Battle { class LogicEffectVisualDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CE1750)
#define MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1CE2190)
#define MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE25C0)
#define MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CE25D0)
#define MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CE44F0)

namespace MX::AppData::DAO::Battle
{
	inline static constexpr unsigned int LogicEffectVisualDAO_TypeDefinitionIndex = 19867;

	class LogicEffectVisualDAO : public Il2CppObject
	{
	public:
		::System::String* LogicEffectName; // 0x10
		::MX::AppData::DAO::Battle::VisualEffectDAO* StartEffect; // 0x18
		::MX::AppData::DAO::Battle::VisualEffectDAO* LoopEffect; // 0x90
		::MX::AppData::DAO::Battle::VisualEffectDAO* EndEffect; // 0x108
		::MX::AppData::DAO::Battle::VisualEffectDAO* RemovedEffect; // 0x180
		::MX::AppData::DAO::Battle::VisualEffectDAO* ApplyEffect; // 0x1F8
		Il2CppObject* StackCountEffectList; // 0x270
		Il2CppObject* AccumulateEffectList; // 0x278
		Il2CppObject* AccumulateDamageFromTargetsEffectList; // 0x280

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::LogicEffectVisualDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::LogicEffectVisualDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::LogicEffectVisualDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::LogicEffectVisualDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_LOGICEFFECTVISUALDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

