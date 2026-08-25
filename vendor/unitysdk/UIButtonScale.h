#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }

#define UIBUTTONSCALE_ONSELECT_OFFSET UNITYSDK_OFFSET(0x9FB2C0)
#define UIBUTTONSCALE_START_OFFSET UNITYSDK_OFFSET(0x9FB3E0)
#define UIBUTTONSCALE_ONHOVER_OFFSET UNITYSDK_OFFSET(0x9FB340)
#define UIBUTTONSCALE_ONPRESS_OFFSET UNITYSDK_OFFSET(0x9FB490)
#define UIBUTTONSCALE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB5D0)
#define UIBUTTONSCALE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9FB600)
#define UIBUTTONSCALE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FB6F0)

	inline static constexpr unsigned int UIButtonScale_TypeDefinitionIndex = 25;

	class UIButtonScale : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* tweenTarget; // 0x18
		::UnityEngine::Vector3* hover; // 0x20
		::UnityEngine::Vector3* pressed; // 0x2C
		::System::Single duration; // 0x38
		::UnityEngine::Vector3* mScale; // 0x3C
		::System::Boolean mStarted; // 0x48

		::System::Void OnSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONSCALE_ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONSCALE_START_OFFSET))(nullptr);
		}

		::System::Void OnHover(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONSCALE_ONHOVER_OFFSET))(arg, nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONSCALE_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONSCALE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONSCALE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONSCALE_ONENABLE_OFFSET))(nullptr);
		}

	};

