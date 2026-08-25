#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }

#define UIINTERACTIVEWORLDRAIDCARRIERCOREELEMENT_SHOWTOUCHPOINTS_OFFSET UNITYSDK_OFFSET(0x26126F0)
#define UIINTERACTIVEWORLDRAIDCARRIERCOREELEMENT_SAVECURRENTROTATION_OFFSET UNITYSDK_OFFSET(0x2612CF0)
#define UIINTERACTIVEWORLDRAIDCARRIERCOREELEMENT_GET_TOUCHPOINT_OFFSET UNITYSDK_OFFSET(0x2612DA0)
#define UIINTERACTIVEWORLDRAIDCARRIERCOREELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2612DB0)
#define UIINTERACTIVEWORLDRAIDCARRIERCOREELEMENT_SHOWAPPEARFX_OFFSET UNITYSDK_OFFSET(0x2611C50)
#define UIINTERACTIVEWORLDRAIDCARRIERCOREELEMENT_GET_PREFERREDROTATIONONTOUCH_OFFSET UNITYSDK_OFFSET(0x2612DC0)
#define UIINTERACTIVEWORLDRAIDCARRIERCOREELEMENT_APPLYCURRENTROTATION_OFFSET UNITYSDK_OFFSET(0x2612DE0)
#define UIINTERACTIVEWORLDRAIDCARRIERCOREELEMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2612E70)

	inline static constexpr unsigned int UIInteractiveWorldRaidCarrierCoreElement_TypeDefinitionIndex = 6504;

	class UIInteractiveWorldRaidCarrierCoreElement : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* touchObjects; // 0x18
		::UnityEngine::Transform* touchPoint; // 0x20
		::UnityEngine::Vector3* positionOffsetOnTouch; // 0x28
		::UnityEngine::Vector3* preferredRotationOnTouch; // 0x34
		::Il2CppArray<::System::Object*>* appearFxObjects; // 0x40
		::Il2CppArray<::System::Object*>* touchFxObjects; // 0x48

		::System::Void ShowTouchPoints()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCOREELEMENT_SHOWTOUCHPOINTS_OFFSET))(nullptr);
		}

		::System::Void SaveCurrentRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCOREELEMENT_SAVECURRENTROTATION_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_TouchPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCOREELEMENT_GET_TOUCHPOINT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCOREELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ShowAppearFx()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCOREELEMENT_SHOWAPPEARFX_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_PreferredRotationOnTouch()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCOREELEMENT_GET_PREFERREDROTATIONONTOUCH_OFFSET))(nullptr);
		}

		::System::Void ApplyCurrentRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCOREELEMENT_APPLYCURRENTROTATION_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCOREELEMENT_ONENABLE_OFFSET))(nullptr);
		}

	};

