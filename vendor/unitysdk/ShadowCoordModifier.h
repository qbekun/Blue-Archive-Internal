#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector3; }

#define SHADOWCOORDMODIFIER_UPDATELOOKTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xE4E980)
#define SHADOWCOORDMODIFIER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xE4EA20)
#define SHADOWCOORDMODIFIER_CHANGEACTIVATION_OFFSET UNITYSDK_OFFSET(0xE4EA90)
#define SHADOWCOORDMODIFIER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE4EBC0)
#define SHADOWCOORDMODIFIER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE4EC80)
#define SHADOWCOORDMODIFIER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE4F040)
#define SHADOWCOORDMODIFIER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE4F090)
#define SHADOWCOORDMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE4F1B0)

	inline static constexpr unsigned int ShadowCoordModifier_TypeDefinitionIndex = 757;

	class ShadowCoordModifier : public Il2CppObject
	{
	public:
		::System::Int32 ShadowCoordModifierId; // 0x0
		::System::Boolean isActivated; // 0x4
		::UnityEngine::Camera* camera; // 0x18
		::UnityEngine::GameObject* lookTarget; // 0x20
		::System::Single MaxScale; // 0x28
		::System::Single weight; // 0x2C

		::System::Void UpdateLookTargetPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + SHADOWCOORDMODIFIER_UPDATELOOKTARGETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADOWCOORDMODIFIER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void ChangeActivation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADOWCOORDMODIFIER_CHANGEACTIVATION_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADOWCOORDMODIFIER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADOWCOORDMODIFIER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADOWCOORDMODIFIER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADOWCOORDMODIFIER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADOWCOORDMODIFIER_.CTOR_OFFSET))(nullptr);
		}

	};

