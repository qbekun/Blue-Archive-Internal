#pragma once
#include "unitysdk.h"

class UISelectExSkillInfo;
namespace UnityEngine { class Vector2; }
class UIWidget;
namespace UnityEngine { class Transform; }
class SkillInfoTooltipInfo;
namespace UnityEngine { class Vector3; }

#define UISELECTEXSKILLINFOTOOLTIP_SETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x275BD50)
#define UISELECTEXSKILLINFOTOOLTIP_SET_LABELWIDTH_OFFSET UNITYSDK_OFFSET(0x275BE90)
#define UISELECTEXSKILLINFOTOOLTIP_CHECKABOVE_OFFSET UNITYSDK_OFFSET(0x275BEA0)
#define UISELECTEXSKILLINFOTOOLTIP_GET_LABELWIDTH_OFFSET UNITYSDK_OFFSET(0x275C250)
#define UISELECTEXSKILLINFOTOOLTIP_CHECKBELOW_OFFSET UNITYSDK_OFFSET(0x275C260)
#define UISELECTEXSKILLINFOTOOLTIP_SETLABELWIDTH_OFFSET UNITYSDK_OFFSET(0x275BE70)
#define UISELECTEXSKILLINFOTOOLTIP_CHECKRIGHT_OFFSET UNITYSDK_OFFSET(0x275C550)
#define UISELECTEXSKILLINFOTOOLTIP_GET_ISSCROLLABLE_OFFSET UNITYSDK_OFFSET(0x275C220)
#define UISELECTEXSKILLINFOTOOLTIP_SETARROWPOSITION_OFFSET UNITYSDK_OFFSET(0x275C830)
#define UISELECTEXSKILLINFOTOOLTIP_COMPUTEPOSITION_OFFSET UNITYSDK_OFFSET(0x275CB20)
#define UISELECTEXSKILLINFOTOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x275CE00)
#define UISELECTEXSKILLINFOTOOLTIP_CHECKLEFT_OFFSET UNITYSDK_OFFSET(0x275CE40)

	inline static constexpr unsigned int UISelectExSkillInfoTooltip_TypeDefinitionIndex = 7279;

	class UISelectExSkillInfoTooltip : public ::UnityEngine::InputSystem::LowLevel::AttitudeState
	{
	public:
		::System::Int32 defaultLabelWidth; // 0x48
		UISelectExSkillInfo* selectExSkillInfo; // 0x50
		::UnityEngine::Vector2* defaultTooltipPosition; // 0x58
		::System::Int32 scrollableHeight; // 0x60
		UIWidget* BG; // 0x68
		UIWidget* scrollBG; // 0x70
		::System::Int32 _LabelWidth_k__BackingField; // 0x78
		::UnityEngine::Transform* scrollDownArrow; // 0x80
		::UnityEngine::Transform* scrollRightArrow; // 0x88
		::UnityEngine::Transform* scrollLeftArrow; // 0x90
		::UnityEngine::Transform* scrollUpArrow; // 0x98

		::System::Void SetDataInternal(SkillInfoTooltipInfo* arg)
		{
			((::System::Void(*)(SkillInfoTooltipInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOTOOLTIP_SETDATAINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_LabelWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOTOOLTIP_SET_LABELWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckAbove(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector2* arg4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOTOOLTIP_CHECKABOVE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 get_LabelWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOTOOLTIP_GET_LABELWIDTH_OFFSET))(nullptr);
		}

		::System::Boolean CheckBelow(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector2* arg4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOTOOLTIP_CHECKBELOW_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetLabelWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOTOOLTIP_SETLABELWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckRight(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector2* arg4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOTOOLTIP_CHECKRIGHT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean get_isScrollable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOTOOLTIP_GET_ISSCROLLABLE_OFFSET))(nullptr);
		}

		::System::Void SetArrowPosition(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOTOOLTIP_SETARROWPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ComputePosition(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOTOOLTIP_COMPUTEPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOTOOLTIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CheckLeft(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector2* arg4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UISELECTEXSKILLINFOTOOLTIP_CHECKLEFT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

