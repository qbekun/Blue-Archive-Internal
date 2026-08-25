#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }

#define TOOLTIPTRANSFORMSETTER_ONSCREENRESOLUTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x274C250)
#define TOOLTIPTRANSFORMSETTER_SET_EXTENT_OFFSET UNITYSDK_OFFSET(0x274C360)
#define TOOLTIPTRANSFORMSETTER__ONSCREENRESOLUTIONCHANGED_G__COCHECKSCREENRESOLUTIONCHANGED|16_0_OFFSET UNITYSDK_OFFSET(0x274C2F0)
#define TOOLTIPTRANSFORMSETTER_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x274C390)
#define TOOLTIPTRANSFORMSETTER_SETTARGETPARENTBACK_OFFSET UNITYSDK_OFFSET(0x274C3E0)
#define TOOLTIPTRANSFORMSETTER_GET_WORLDCENTER_OFFSET UNITYSDK_OFFSET(0x274C630)
#define TOOLTIPTRANSFORMSETTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x274C650)
#define TOOLTIPTRANSFORMSETTER_CREATESWAPPINGOBJECT_OFFSET UNITYSDK_OFFSET(0x274C760)
#define TOOLTIPTRANSFORMSETTER_SET_WORLDCENTER_OFFSET UNITYSDK_OFFSET(0x274C8B0)
#define TOOLTIPTRANSFORMSETTER_SETTARGET_OFFSET UNITYSDK_OFFSET(0x274C8C0)
#define TOOLTIPTRANSFORMSETTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x274CA80)
#define TOOLTIPTRANSFORMSETTER_GET_EXTENT_OFFSET UNITYSDK_OFFSET(0x274CA90)
#define TOOLTIPTRANSFORMSETTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x274CAA0)
#define TOOLTIPTRANSFORMSETTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x274CAB0)

	inline static constexpr unsigned int TooltipTransformSetter_TypeDefinitionIndex = 7246;

	class TooltipTransformSetter : public Il2CppObject
	{
	public:
		::System::Action* OnScreenResolutionChangedCallback; // 0x18
		::System::Int32 siblingIndex; // 0x20
		::UnityEngine::GameObject* swappingObject; // 0x28
		::UnityEngine::Transform* target; // 0x30
		::UnityEngine::Transform* targetParent; // 0x38
		::UnityEngine::Vector3* _WorldCenter_k__BackingField; // 0x40
		::UnityEngine::Vector2* _Extent_k__BackingField; // 0x4C

		::System::Void OnScreenResolutionChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTRANSFORMSETTER_ONSCREENRESOLUTIONCHANGED_OFFSET))(nullptr);
		}

		::System::Void set_Extent(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTRANSFORMSETTER_SET_EXTENT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _OnScreenResolutionChanged_g__CoCheckScreenResolutionChanged|16_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTRANSFORMSETTER__ONSCREENRESOLUTIONCHANGED_G__COCHECKSCREENRESOLUTIONCHANGED|16_0_OFFSET))(nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTRANSFORMSETTER_ONCLOSE_OFFSET))(nullptr);
		}

		::System::Void SetTargetParentBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTRANSFORMSETTER_SETTARGETPARENTBACK_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_WorldCenter()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTRANSFORMSETTER_GET_WORLDCENTER_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTRANSFORMSETTER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void CreateSwappingObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTRANSFORMSETTER_CREATESWAPPINGOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_WorldCenter(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTRANSFORMSETTER_SET_WORLDCENTER_OFFSET))(arg, nullptr);
		}

		::System::Void SetTarget(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTRANSFORMSETTER_SETTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTRANSFORMSETTER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Extent()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTRANSFORMSETTER_GET_EXTENT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTRANSFORMSETTER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTRANSFORMSETTER_ONDISABLE_OFFSET))(nullptr);
		}

	};

