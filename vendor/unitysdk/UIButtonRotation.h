#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define UIBUTTONROTATION_ONPRESS_OFFSET UNITYSDK_OFFSET(0x9FAB70)
#define UIBUTTONROTATION_START_OFFSET UNITYSDK_OFFSET(0x9FAE50)
#define UIBUTTONROTATION_ONSELECT_OFFSET UNITYSDK_OFFSET(0x9FAF00)
#define UIBUTTONROTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB0E0)
#define UIBUTTONROTATION_ONHOVER_OFFSET UNITYSDK_OFFSET(0x9FAF80)
#define UIBUTTONROTATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9FB170)
#define UIBUTTONROTATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FB250)

	inline static constexpr unsigned int UIButtonRotation_TypeDefinitionIndex = 24;

	class UIButtonRotation : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* tweenTarget; // 0x18
		::UnityEngine::Vector3* hover; // 0x20
		::UnityEngine::Vector3* pressed; // 0x2C
		::System::Single duration; // 0x38
		::UnityEngine::Quaternion* mRot; // 0x3C
		::System::Boolean mStarted; // 0x4C

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONROTATION_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONROTATION_START_OFFSET))(nullptr);
		}

		::System::Void OnSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONROTATION_ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONROTATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnHover(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONROTATION_ONHOVER_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONROTATION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONROTATION_ONENABLE_OFFSET))(nullptr);
		}

	};

