#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class Transform; }
class UISprite;
class AdditionalSkillTooltipIconGrid;
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector3; }
class SkillInfoTooltipInfo;

#define UISKILLINFOTOOLTIP_GET_LABELWIDTH_OFFSET UNITYSDK_OFFSET(0x275D3F0)
#define UISKILLINFOTOOLTIP_FIXEDABOVE_OFFSET UNITYSDK_OFFSET(0x275D410)
#define UISKILLINFOTOOLTIP_SETLABELWIDTH_OFFSET UNITYSDK_OFFSET(0x275D7F0)
#define UISKILLINFOTOOLTIP_CHECKABOVE_OFFSET UNITYSDK_OFFSET(0x275D830)
#define UISKILLINFOTOOLTIP_SETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x275DB70)
#define UISKILLINFOTOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x275DF00)
#define UISKILLINFOTOOLTIP_COMPUTEPOSITION_OFFSET UNITYSDK_OFFSET(0x275DF50)

	inline static constexpr unsigned int UISkillInfoTooltip_TypeDefinitionIndex = 7281;

	class UISkillInfoTooltip : public ::UnityEngine::InputSystem::LowLevel::AttitudeState
	{
	public:
		::System::Int32 defaultLabelWidth; // 0x48
		UILabel* levelLabel; // 0x50
		UILabel* skillNameLabel; // 0x58
		UILabel* typeLabel; // 0x60
		UILabel* descLabel; // 0x68
		UILabel* costLabel; // 0x70
		::UnityEngine::Transform* costLabelRoot; // 0x78
		UISprite* maxIcon; // 0x80
		AdditionalSkillTooltipIconGrid* additionalTooltipIconGrid; // 0x88
		::UnityEngine::Vector2* defaultTooltipPosition; // 0x90
		::System::Int32 fixedBgSizeY; // 0x98
		::UnityEngine::GameObject* fixedObject; // 0xA0
		UILabel* fixedDescLabel; // 0xA8
		::System::Boolean onFixedTooltipMode; // 0xB0

		::System::Int32 get_LabelWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOTOOLTIP_GET_LABELWIDTH_OFFSET))(nullptr);
		}

		::System::Void FixedAbove(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector2* arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOTOOLTIP_FIXEDABOVE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetLabelWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOTOOLTIP_SETLABELWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckAbove(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector2* arg4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOTOOLTIP_CHECKABOVE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetDataInternal(SkillInfoTooltipInfo* arg)
		{
			((::System::Void(*)(SkillInfoTooltipInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOTOOLTIP_SETDATAINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOTOOLTIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ComputePosition(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLINFOTOOLTIP_COMPUTEPOSITION_OFFSET))(arg, arg2, nullptr);
		}

	};

