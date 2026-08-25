#pragma once
#include "../../../../unitysdk.h"

namespace MX::AppData::DAO::Battle { class VisualEffectDAO; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::AppData::DAO::Battle { class StackCountVisualEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_APPDATA_DAO_BATTLE_STACKCOUNTVISUALEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CDEB70)
#define MX_APPDATA_DAO_BATTLE_STACKCOUNTVISUALEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CDECD0)
#define MX_APPDATA_DAO_BATTLE_STACKCOUNTVISUALEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1CDECE0)
#define MX_APPDATA_DAO_BATTLE_STACKCOUNTVISUALEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDEEE0)
#define MX_APPDATA_DAO_BATTLE_STACKCOUNTVISUALEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CDEEF0)

namespace MX::AppData::DAO::Battle
{
	inline static constexpr unsigned int StackCountVisualEffectDAO_TypeDefinitionIndex = 19861;

	class StackCountVisualEffectDAO : public Il2CppObject
	{
	public:
		::System::Int32 StackCount; // 0x10
		::MX::AppData::DAO::Battle::VisualEffectDAO* StackEffect; // 0x18

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::AppData::DAO::Battle::StackCountVisualEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::AppData::DAO::Battle::StackCountVisualEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_STACKCOUNTVISUALEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_STACKCOUNTVISUALEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_STACKCOUNTVISUALEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_STACKCOUNTVISUALEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::AppData::DAO::Battle::StackCountVisualEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::AppData::DAO::Battle::StackCountVisualEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_DAO_BATTLE_STACKCOUNTVISUALEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

