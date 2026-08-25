#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define SKILLINFOTOOLTIPINFO_SET_FROMMULTIFLOOR_OFFSET UNITYSDK_OFFSET(0x275E8E0)
#define SKILLINFOTOOLTIPINFO_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x275E8F0)
#define SKILLINFOTOOLTIPINFO_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0x275E900)
#define SKILLINFOTOOLTIPINFO_SET_SELECTEXSKILLTOOLTIPID_OFFSET UNITYSDK_OFFSET(0x275E910)
#define SKILLINFOTOOLTIPINFO_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x275E920)
#define SKILLINFOTOOLTIPINFO_GET_ADDITIONALSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x275E930)
#define SKILLINFOTOOLTIPINFO_GET_TOOLTIPWIDTH_OFFSET UNITYSDK_OFFSET(0x275E940)
#define SKILLINFOTOOLTIPINFO_SET_ADDITIONALSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x275E950)
#define SKILLINFOTOOLTIPINFO_SET_COST_OFFSET UNITYSDK_OFFSET(0x275E960)
#define SKILLINFOTOOLTIPINFO_GET_ISREINFORCED_OFFSET UNITYSDK_OFFSET(0x275E970)
#define SKILLINFOTOOLTIPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x275E980)
#define SKILLINFOTOOLTIPINFO_GET_SELECTEXSKILLTOOLTIPID_OFFSET UNITYSDK_OFFSET(0x275EA70)
#define SKILLINFOTOOLTIPINFO_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x275EA80)
#define SKILLINFOTOOLTIPINFO_SET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0x275EA90)
#define SKILLINFOTOOLTIPINFO_SET_TOOLTIPWIDTH_OFFSET UNITYSDK_OFFSET(0x275EAA0)
#define SKILLINFOTOOLTIPINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x275EAB0)
#define SKILLINFOTOOLTIPINFO_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x275EAC0)
#define SKILLINFOTOOLTIPINFO_GET_APPLYMAXLEVELCOLOR_OFFSET UNITYSDK_OFFSET(0x275EAD0)
#define SKILLINFOTOOLTIPINFO_SETTOOLTIPWIDTH_OFFSET UNITYSDK_OFFSET(0x275EAE0)
#define SKILLINFOTOOLTIPINFO_GET_COST_OFFSET UNITYSDK_OFFSET(0x275EAF0)
#define SKILLINFOTOOLTIPINFO_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x275EB00)
#define SKILLINFOTOOLTIPINFO_SET_APPLYMAXLEVELCOLOR_OFFSET UNITYSDK_OFFSET(0x275EB10)
#define SKILLINFOTOOLTIPINFO_SET_ISREINFORCED_OFFSET UNITYSDK_OFFSET(0x275EB20)
#define SKILLINFOTOOLTIPINFO_GET_TOOLTIPPOSITION_OFFSET UNITYSDK_OFFSET(0x275EB30)
#define SKILLINFOTOOLTIPINFO_SET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x275EB50)
#define SKILLINFOTOOLTIPINFO_GET_FROMMULTIFLOOR_OFFSET UNITYSDK_OFFSET(0x275EB60)
#define SKILLINFOTOOLTIPINFO_SET_TOOLTIPPOSITION_OFFSET UNITYSDK_OFFSET(0x275EB70)
#define SKILLINFOTOOLTIPINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x275EB80)

	inline static constexpr unsigned int SkillInfoTooltipInfo_TypeDefinitionIndex = 7290;

	class SkillInfoTooltipInfo : public Il2CppObject
	{
	public:
		::System::Int32 _Level_k__BackingField; // 0x10
		::System::Boolean _IsMaxLevel_k__BackingField; // 0x14
		::System::Boolean _ApplyMaxLevelColor_k__BackingField; // 0x15
		::System::String* _SkillName_k__BackingField; // 0x18
		::System::String* _SkillType_k__BackingField; // 0x20
		::System::String* _Description_k__BackingField; // 0x28
		::System::String* _Cost_k__BackingField; // 0x30
		::UnityEngine::Vector3* _TooltipPosition_k__BackingField; // 0x38
		::System::Boolean _IsReinforced_k__BackingField; // 0x44
		::System::Int64 _AdditionalSkillGroupId_k__BackingField; // 0x48
		::System::Int64 _SelectExSkillToolTipId_k__BackingField; // 0x50
		::System::Boolean _FromMultiFloor_k__BackingField; // 0x58
		::System::Int32 _TooltipWidth_k__BackingField; // 0x5C

		::System::Void set_FromMultiFloor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_SET_FROMMULTIFLOOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_GET_ISMAXLEVEL_OFFSET))(nullptr);
		}

		::System::String* get_SkillName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_GET_SKILLNAME_OFFSET))(nullptr);
		}

		::System::Void set_SelectExSkillToolTipId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_SET_SELECTEXSKILLTOOLTIPID_OFFSET))(arg, nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Int64 get_AdditionalSkillGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_GET_ADDITIONALSKILLGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_TooltipWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_GET_TOOLTIPWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_AdditionalSkillGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_SET_ADDITIONALSKILLGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Cost(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_SET_COST_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsReinforced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_GET_ISREINFORCED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg2, ::System::Boolean arg3, ::System::String* str, ::System::String* str2, ::System::String* str3, ::System::String* str4, ::UnityEngine::Vector3* arg4, ::System::Boolean arg5, ::System::Int64 arg6, ::System::Int64 arg7, ::System::Boolean arg8)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Vector3*, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_.CTOR_OFFSET))(arg, arg2, arg3, str, str2, str3, str4, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Int64 get_SelectExSkillToolTipId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_GET_SELECTEXSKILLTOOLTIPID_OFFSET))(nullptr);
		}

		::System::Void set_Description(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_SET_DESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void set_SkillName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_SET_SKILLNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_TooltipWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_SET_TOOLTIPWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_SkillType(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_SET_SKILLTYPE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_ApplyMaxLevelColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_GET_APPLYMAXLEVELCOLOR_OFFSET))(nullptr);
		}

		::System::Void SetTooltipWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_SETTOOLTIPWIDTH_OFFSET))(arg, nullptr);
		}

		::System::String* get_Cost()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_GET_COST_OFFSET))(nullptr);
		}

		::System::String* get_SkillType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_GET_SKILLTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ApplyMaxLevelColor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_SET_APPLYMAXLEVELCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsReinforced(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_SET_ISREINFORCED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_TooltipPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_GET_TOOLTIPPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_IsMaxLevel(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_SET_ISMAXLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_FromMultiFloor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_GET_FROMMULTIFLOOR_OFFSET))(nullptr);
		}

		::System::Void set_TooltipPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_SET_TOOLTIPPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOTOOLTIPINFO_SET_LEVEL_OFFSET))(arg, nullptr);
		}

	};

