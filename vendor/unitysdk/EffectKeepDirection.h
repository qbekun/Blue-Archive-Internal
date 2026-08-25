#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Transform; }

#define EFFECTKEEPDIRECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x120AF10)
#define EFFECTKEEPDIRECTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x120AF20)
#define EFFECTKEEPDIRECTION_INITIALIZEPARENT_OFFSET UNITYSDK_OFFSET(0x120AFE0)
#define EFFECTKEEPDIRECTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x120B410)
#define EFFECTKEEPDIRECTION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x120B030)

	inline static constexpr unsigned int EffectKeepDirection_TypeDefinitionIndex = 973;

	class EffectKeepDirection : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* direction; // 0x18
		::UnityEngine::Vector3* positionOffset; // 0x24
		::UnityEngine::Transform* parentTransform; // 0x30
		::System::Single distanceMaxSqr; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTKEEPDIRECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTKEEPDIRECTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void InitializeParent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTKEEPDIRECTION_INITIALIZEPARENT_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTKEEPDIRECTION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTKEEPDIRECTION_LATEUPDATE_OFFSET))(nullptr);
		}

	};

