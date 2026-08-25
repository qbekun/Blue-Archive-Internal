#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace FlatData { class SkillSlotHighLightType; }
class UIBossSkillViewInfo;

#define UIBOSSSKILLVIEWINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0xBDE8D0)
#define UIBOSSSKILLVIEWINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xBDE900)
#define UIBOSSSKILLVIEWINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xBDE940)
#define UIBOSSSKILLVIEWINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBDE990)

	inline static constexpr unsigned int UIBossSkillViewInfo_TypeDefinitionIndex = 8706;

	class UIBossSkillViewInfo : public Il2CppObject
	{
	public:
		::System::Int32 PhaseNoData; // 0x0
		::System::Int32 PhaseGlobal; // 0x0
		::System::String* SkillGroupId; // 0x10
		::System::Int32 PhaseIndex; // 0x18
		::MX::Logic::BattleEntities::SkillSlot* SkillSlot; // 0x1C
		::FlatData::SkillSlotHighLightType* HighLightType; // 0x20

		::System::Int32 CompareTo(UIBossSkillViewInfo* arg)
		{
			return ((::System::Int32(*)(UIBossSkillViewInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWINFO_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			((::System::Void(*)(::System::String*, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWINFO_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::MX::Logic::BattleEntities::SkillSlot* arg2, ::FlatData::SkillSlotHighLightType* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::MX::Logic::BattleEntities::SkillSlot*, ::FlatData::SkillSlotHighLightType*, ::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWINFO_.CTOR_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBOSSSKILLVIEWINFO_TOSTRING_OFFSET))(nullptr);
		}

	};

