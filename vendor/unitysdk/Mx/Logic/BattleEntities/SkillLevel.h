#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLEENTITIES_SKILLLEVEL_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C9200)
#define MX_LOGIC_BATTLEENTITIES_SKILLLEVEL_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C95A0)
#define MX_LOGIC_BATTLEENTITIES_SKILLLEVEL_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11C9730)
#define MX_LOGIC_BATTLEENTITIES_SKILLLEVEL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11C99F0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SkillLevel_TypeDefinitionIndex = 13358;

	class SkillLevel : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ExSkill; // 0x10
		::Il2CppArray<::System::Object*>* PublicSkill; // 0x18
		::Il2CppArray<::System::Object*>* PassiveSkill; // 0x20
		::Il2CppArray<::System::Object*>* ExtraPassiveSkill; // 0x28

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::SkillLevel&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::SkillLevel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLLEVEL_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::SkillLevel&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::SkillLevel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLLEVEL_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLLEVEL_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLLEVEL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

