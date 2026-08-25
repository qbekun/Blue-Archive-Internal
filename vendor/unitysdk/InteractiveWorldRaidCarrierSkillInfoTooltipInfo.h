#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace FlatData { class SkillSlotShowType; }
class SkillInfoTooltipInfo;

#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x2613700)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x2613710)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0x2613720)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0x2613730)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x2613740)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x2613750)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x2613760)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x2613770)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_ICONNAME_OFFSET UNITYSDK_OFFSET(0x2613780)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_ICONNAME_OFFSET UNITYSDK_OFFSET(0x2613790)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_ADDITIONALSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x26137A0)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_ADDITIONALSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x26137B0)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x26137C0)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x26137D0)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_ISREINFORCED_OFFSET UNITYSDK_OFFSET(0x26137E0)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_ISREINFORCED_OFFSET UNITYSDK_OFFSET(0x26137F0)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_FROMMULTIFLOOR_OFFSET UNITYSDK_OFFSET(0x2613800)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_FROMMULTIFLOOR_OFFSET UNITYSDK_OFFSET(0x2613810)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2613560)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2613820)
#define INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x26139D0)

	inline static constexpr unsigned int InteractiveWorldRaidCarrierSkillInfoTooltipInfo_TypeDefinitionIndex = 6506;

	class InteractiveWorldRaidCarrierSkillInfoTooltipInfo : public Il2CppObject
	{
	public:
		::System::Int32 _Level_k__BackingField; // 0x10
		::System::String* _SkillName_k__BackingField; // 0x18
		::System::String* _SkillType_k__BackingField; // 0x20
		::System::String* _Description_k__BackingField; // 0x28
		::System::String* _IconName_k__BackingField; // 0x30
		::System::Int64 _AdditionalSkillGroupId_k__BackingField; // 0x38
		::System::Boolean _IsMaxLevel_k__BackingField; // 0x40
		::System::Boolean _IsReinforced_k__BackingField; // 0x41
		::System::Boolean _FromMultiFloor_k__BackingField; // 0x42

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::String* get_SkillName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_SKILLNAME_OFFSET))(nullptr);
		}

		::System::Void set_SkillName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_SKILLNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_SkillType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_SKILLTYPE_OFFSET))(nullptr);
		}

		::System::Void set_SkillType(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_SKILLTYPE_OFFSET))(str, nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void set_Description(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_DESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::String* get_IconName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_ICONNAME_OFFSET))(nullptr);
		}

		::System::Void set_IconName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_ICONNAME_OFFSET))(str, nullptr);
		}

		::System::Int64 get_AdditionalSkillGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_ADDITIONALSKILLGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_AdditionalSkillGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_ADDITIONALSKILLGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_ISMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_IsMaxLevel(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_ISMAXLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReinforced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_ISREINFORCED_OFFSET))(nullptr);
		}

		::System::Void set_IsReinforced(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_ISREINFORCED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_FromMultiFloor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_GET_FROMMULTIFLOOR_OFFSET))(nullptr);
		}

		::System::Void set_FromMultiFloor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_SET_FROMMULTIFLOOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::SkillSlot* arg, ::System::String* str, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillSlot*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_.CTOR_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor(::FlatData::SkillSlotShowType* arg, ::System::String* str, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::FlatData::SkillSlotShowType*, ::System::String*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_.CTOR_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

		::System::Void .ctor(SkillInfoTooltipInfo* arg)
		{
			((::System::Void(*)(SkillInfoTooltipInfo*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCARRIERSKILLINFOTOOLTIPINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};

