#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UITexture;
class UISlider;
class BossAppearState;
class EventDelegate;
namespace MX::GameLogic::DBModel { class WorldRaidBossListInfoDB; }

#define INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSBUTTON_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x2608C70)
#define INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSBUTTON_REGISTERONCLICK_OFFSET UNITYSDK_OFFSET(0x2608D10)
#define INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSBUTTON_REFRESHBOSSSTATE_OFFSET UNITYSDK_OFFSET(0x2608E00)
#define INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSBUTTON_SETMOSTPARTICIPATED_OFFSET UNITYSDK_OFFSET(0x2609440)
#define INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSBUTTON__REFRESHBOSSSTATE_B__13_0_OFFSET UNITYSDK_OFFSET(0x26094C0)
#define INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x26094E0)
#define INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSBUTTON_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x26094F0)
#define INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSBUTTON_SETBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x26095C0)

	inline static constexpr unsigned int InteractiveWorldRaidZoomInBottomBossButton_TypeDefinitionIndex = 6484;

	class InteractiveWorldRaidZoomInBottomBossButton : public Il2CppObject
	{
	public:
		MXButton* bossButton; // 0x18
		::UnityEngine::GameObject* bossButtonSelected; // 0x20
		::UnityEngine::GameObject* mostParticipatedMark; // 0x28
		UITexture* bossIconTexture; // 0x30
		UISlider* bossHpSlider; // 0x38
		UISlider* bossHpSliderSelected; // 0x40
		::UnityEngine::GameObject* finalLabel; // 0x48
		::UnityEngine::GameObject* clearLabel; // 0x50
		::System::Int64 _bossGroupId; // 0x58
		BossAppearState* _bossAppearState; // 0x60

		::System::Void SetTexture(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSBUTTON_SETTEXTURE_OFFSET))(str, nullptr);
		}

		::System::Void RegisterOnClick(EventDelegate* arg)
		{
			((::System::Void(*)(EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSBUTTON_REGISTERONCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshBossState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSBUTTON_REFRESHBOSSSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetMostParticipated(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSBUTTON_SETMOSTPARTICIPATED_OFFSET))(arg, nullptr);
		}

		::System::Boolean _RefreshBossState_b__13_0(::MX::GameLogic::DBModel::WorldRaidBossListInfoDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::WorldRaidBossListInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSBUTTON__REFRESHBOSSSTATE_B__13_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSelected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSBUTTON_SETSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetBossGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOTTOMBOSSBUTTON_SETBOSSGROUPID_OFFSET))(arg, nullptr);
		}

	};

