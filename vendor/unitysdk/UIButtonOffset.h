#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }

#define UIBUTTONOFFSET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FA5D0)
#define UIBUTTONOFFSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA6E0)
#define UIBUTTONOFFSET_ONDRAGOVER_OFFSET UNITYSDK_OFFSET(0x9FA740)
#define UIBUTTONOFFSET_ONSELECT_OFFSET UNITYSDK_OFFSET(0x9FA7B0)
#define UIBUTTONOFFSET_START_OFFSET UNITYSDK_OFFSET(0x9FA830)
#define UIBUTTONOFFSET_ONDRAGOUT_OFFSET UNITYSDK_OFFSET(0x9FA8E0)
#define UIBUTTONOFFSET_ONPRESS_OFFSET UNITYSDK_OFFSET(0x9FA940)
#define UIBUTTONOFFSET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9FAA80)
#define UIBUTTONOFFSET_ONHOVER_OFFSET UNITYSDK_OFFSET(0x9FA640)

	inline static constexpr unsigned int UIButtonOffset_TypeDefinitionIndex = 23;

	class UIButtonOffset : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* tweenTarget; // 0x18
		::UnityEngine::Vector3* hover; // 0x20
		::UnityEngine::Vector3* pressed; // 0x2C
		::System::Single duration; // 0x38
		::UnityEngine::Vector3* mPos; // 0x3C
		::System::Boolean mStarted; // 0x48
		::System::Boolean mPressed; // 0x49

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONOFFSET_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONOFFSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDragOver()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONOFFSET_ONDRAGOVER_OFFSET))(nullptr);
		}

		::System::Void OnSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONOFFSET_ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONOFFSET_START_OFFSET))(nullptr);
		}

		::System::Void OnDragOut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONOFFSET_ONDRAGOUT_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONOFFSET_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONOFFSET_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnHover(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONOFFSET_ONHOVER_OFFSET))(arg, nullptr);
		}

	};

