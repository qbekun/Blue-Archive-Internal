#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LayerMask; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Vector3; }

#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2866F30)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GETMASSANDVELOCITY2D_OFFSET UNITYSDK_OFFSET(0x2866F40)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x2867180)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2867550)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x28675B0)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_START_OFFSET UNITYSDK_OFFSET(0x2867980)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x2867A00)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GENERATEIMPACTEVENT_OFFSET UNITYSDK_OFFSET(0x28671E0)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GETMASSANDVELOCITY_OFFSET UNITYSDK_OFFSET(0x2867A60)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GENERATEIMPACTEVENT2D_OFFSET UNITYSDK_OFFSET(0x2867610)
#define CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x2867CC0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCollisionImpulseSource_TypeDefinitionIndex = 34352;

	class CinemachineCollisionImpulseSource : public Il2CppObject
	{
	public:
		::UnityEngine::LayerMask* m_LayerMask; // 0x30
		::System::String* m_IgnoreTag; // 0x38
		::System::Boolean m_UseImpactDirection; // 0x40
		::System::Boolean m_ScaleImpactWithMass; // 0x41
		::System::Boolean m_ScaleImpactWithSpeed; // 0x42
		::UnityEngine::Rigidbody* mRigidBody; // 0x48
		::UnityEngine::Rigidbody2D* mRigidBody2D; // 0x50

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Single GetMassAndVelocity2D(::UnityEngine::Collider2D* arg, ::UnityEngine::Vector3&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Collider2D*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GETMASSANDVELOCITY2D_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* arg)
		{
			((::System::Void(*)(::UnityEngine::Collision*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONCOLLISIONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnCollisionEnter2D(::UnityEngine::Collision2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Collision2D*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONCOLLISIONENTER2D_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_START_OFFSET))(nullptr);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONTRIGGERENTER_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateImpactEvent(::UnityEngine::Collider* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GENERATEIMPACTEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetMassAndVelocity(::UnityEngine::Collider* arg, ::UnityEngine::Vector3&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GETMASSANDVELOCITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GenerateImpactEvent2D(::UnityEngine::Collider2D* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider2D*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_GENERATEIMPACTEVENT2D_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnTriggerEnter2D(::UnityEngine::Collider2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider2D*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLISIONIMPULSESOURCE_ONTRIGGERENTER2D_OFFSET))(arg, nullptr);
		}

	};
}

