#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class UITexture;
class UISprite;
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Collider; }
namespace MX::Logic::Skills { class SkillType; }
namespace MX::Data::Excel { class SkillAdditionalTooltipExcel; }

#define ADDITIONALSKILLTOOLTIPICON_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x273E5F0)
#define ADDITIONALSKILLTOOLTIPICON_GET_SKILLCOST_OFFSET UNITYSDK_OFFSET(0x273E600)
#define ADDITIONALSKILLTOOLTIPICON_.CTOR_OFFSET UNITYSDK_OFFSET(0x273E610)
#define ADDITIONALSKILLTOOLTIPICON_SETUI_OFFSET UNITYSDK_OFFSET(0x273E620)
#define ADDITIONALSKILLTOOLTIPICON_GET_SKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x273EA50)
#define ADDITIONALSKILLTOOLTIPICON_SET_SKILLCOST_OFFSET UNITYSDK_OFFSET(0x273EA60)
#define ADDITIONALSKILLTOOLTIPICON_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x273EA80)
#define ADDITIONALSKILLTOOLTIPICON_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x273EA90)
#define ADDITIONALSKILLTOOLTIPICON_SET_FROMMULTIFLOOR_OFFSET UNITYSDK_OFFSET(0x273EAA0)
#define ADDITIONALSKILLTOOLTIPICON_SETMULTIFLOORUI_OFFSET UNITYSDK_OFFSET(0x273EAB0)
#define ADDITIONALSKILLTOOLTIPICON_SET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x273EE20)
#define ADDITIONALSKILLTOOLTIPICON_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x273EE30)
#define ADDITIONALSKILLTOOLTIPICON_GET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x273EE40)
#define ADDITIONALSKILLTOOLTIPICON_GET_ISREINFORCED_OFFSET UNITYSDK_OFFSET(0x273EE50)
#define ADDITIONALSKILLTOOLTIPICON_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0x273EE60)
#define ADDITIONALSKILLTOOLTIPICON_SET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0x273EE70)
#define ADDITIONALSKILLTOOLTIPICON_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x273EE80)
#define ADDITIONALSKILLTOOLTIPICON_GET_FROMMULTIFLOOR_OFFSET UNITYSDK_OFFSET(0x273EE90)
#define ADDITIONALSKILLTOOLTIPICON_SET_SKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x273EEA0)
#define ADDITIONALSKILLTOOLTIPICON_ONCLICK_OFFSET UNITYSDK_OFFSET(0x273EEB0)
#define ADDITIONALSKILLTOOLTIPICON_SET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0x273F6E0)
#define ADDITIONALSKILLTOOLTIPICON_SET_ISREINFORCED_OFFSET UNITYSDK_OFFSET(0x273F6F0)
#define ADDITIONALSKILLTOOLTIPICON_SETDATA_OFFSET UNITYSDK_OFFSET(0x273F700)
#define ADDITIONALSKILLTOOLTIPICON_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x273F3F0)
#define ADDITIONALSKILLTOOLTIPICON_SET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x273F910)
#define ADDITIONALSKILLTOOLTIPICON_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0x273F920)

	inline static constexpr unsigned int AdditionalSkillTooltipIcon_TypeDefinitionIndex = 7220;

	class AdditionalSkillTooltipIcon : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* lockObject; // 0x18
		UILabel* lockStarNumber; // 0x20
		UILabel* skillTypeLabel; // 0x28
		UITexture* skillIcon; // 0x30
		UISprite* iconBg; // 0x38
		::UnityEngine::GameObject* iconBgDeco; // 0x40
		UISprite* reinforcedIcon; // 0x48
		::UnityEngine::Vector2* customizedExtent; // 0x50
		::UnityEngine::Collider* _collider; // 0x58
		::System::Int64 _GroupId_k__BackingField; // 0x60
		::System::String* _SkillGroupId_k__BackingField; // 0x68
		::System::Int32 _SkillLevel_k__BackingField; // 0x70
		::MX::Logic::Skills::SkillType* _SkillType_k__BackingField; // 0x74
		::System::String* _SkillName_k__BackingField; // 0x78
		::System::String* _SkillDesc_k__BackingField; // 0x80
		::System::String* _SkillCost_k__BackingField; // 0x88
		::System::Boolean _IsMaxLevel_k__BackingField; // 0x90
		::System::Boolean _IsReinforced_k__BackingField; // 0x91
		::System::Boolean _FromMultiFloor_k__BackingField; // 0x92

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::String* get_SkillCost()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_GET_SKILLCOST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_SETUI_OFFSET))(nullptr);
		}

		::System::String* get_SkillGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_GET_SKILLGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_SkillCost(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_SET_SKILLCOST_OFFSET))(str, nullptr);
		}

		::System::Void set_SkillType(::MX::Logic::Skills::SkillType* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillType*, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_SET_SKILLTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillType* get_SkillType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_GET_SKILLTYPE_OFFSET))(nullptr);
		}

		::System::Void set_FromMultiFloor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_SET_FROMMULTIFLOOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetMultiFloorUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_SETMULTIFLOORUI_OFFSET))(nullptr);
		}

		::System::Void set_SkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_SET_SKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_SkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_GET_SKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReinforced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_GET_ISREINFORCED_OFFSET))(nullptr);
		}

		::System::String* get_SkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_GET_SKILLDESC_OFFSET))(nullptr);
		}

		::System::Void set_SkillDesc(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_SET_SKILLDESC_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_GET_ISMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean get_FromMultiFloor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_GET_FROMMULTIFLOOR_OFFSET))(nullptr);
		}

		::System::Void set_SkillGroupId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_SET_SKILLGROUPID_OFFSET))(str, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void set_SkillName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_SET_SKILLNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_IsReinforced(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_SET_ISREINFORCED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::SkillAdditionalTooltipExcel* arg, ::System::Int32 arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::MX::Data::Excel::SkillAdditionalTooltipExcel*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_SETDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::UnityEngine::Collider* get_Collider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_GET_COLLIDER_OFFSET))(nullptr);
		}

		::System::Void set_IsMaxLevel(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_SET_ISMAXLEVEL_OFFSET))(arg, nullptr);
		}

		::System::String* get_SkillName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALSKILLTOOLTIPICON_GET_SKILLNAME_OFFSET))(nullptr);
		}

	};

