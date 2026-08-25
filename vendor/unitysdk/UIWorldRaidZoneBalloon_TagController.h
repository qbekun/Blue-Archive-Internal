#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;

#define UIWORLDRAIDZONEBALLOON_TAGCONTROLLER_SETALLTAGOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0xC0D540)
#define UIWORLDRAIDZONEBALLOON_TAGCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC0EA50)
#define UIWORLDRAIDZONEBALLOON_TAGCONTROLLER_SETTIMETAGENABLE_OFFSET UNITYSDK_OFFSET(0xC0CE40)
#define UIWORLDRAIDZONEBALLOON_TAGCONTROLLER_SETUIONOFF_OFFSET UNITYSDK_OFFSET(0xC0D5C0)

	inline static constexpr unsigned int UIWorldRaidZoneBalloon_TagController_TypeDefinitionIndex = 8820;

	class UIWorldRaidZoneBalloon_TagController : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* AllTagObject; // 0x18
		::UnityEngine::GameObject* TimeTag; // 0x20
		UILabel* RemainTime; // 0x28
		::UnityEngine::GameObject* LastBossTag; // 0x30
		::UnityEngine::GameObject* ClearCoverObject; // 0x38
		::UnityEngine::GameObject* ClearCover; // 0x40

		::System::Void SetAllTagObjectEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_TAGCONTROLLER_SETALLTAGOBJECTENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_TAGCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetTimeTagEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_TAGCONTROLLER_SETTIMETAGENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetUIOnOff(::System::Boolean arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_TAGCONTROLLER_SETUIONOFF_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

