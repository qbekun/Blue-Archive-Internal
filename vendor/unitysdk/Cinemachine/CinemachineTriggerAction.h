#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LayerMask; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Collider; }

#define CINEMACHINE_CINEMACHINETRIGGERACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2866030)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x2866320)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x2866450)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x2866520)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_FILTER_OFFSET UNITYSDK_OFFSET(0x2866550)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x28665F0)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_INTERNALDOTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x2866480)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_INTERNALDOTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x28663C0)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x2866B70)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x2866BA0)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2866C40)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x2866C50)
#define CINEMACHINE_CINEMACHINETRIGGERACTION_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x2866CF0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTriggerAction_TypeDefinitionIndex = 34350;

	class CinemachineTriggerAction : public Il2CppObject
	{
	public:
		::UnityEngine::LayerMask* m_LayerMask; // 0x18
		::System::String* m_WithTag; // 0x20
		::System::String* m_WithoutTag; // 0x28
		::System::Int32 m_SkipFirst; // 0x30
		::System::Boolean m_Repeating; // 0x34
		ActionSettings* m_OnObjectEnter; // 0x38
		ActionSettings* m_OnObjectExit; // 0x60
		Il2CppObject* m_ActiveTriggerObjects; // 0x88

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnCollisionEnter2D(::UnityEngine::Collision2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Collision2D*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONCOLLISIONENTER2D_OFFSET))(arg, nullptr);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* arg)
		{
			((::System::Void(*)(::UnityEngine::Collision*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONCOLLISIONEXIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnTriggerExit2D(::UnityEngine::Collider2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider2D*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONTRIGGEREXIT2D_OFFSET))(arg, nullptr);
		}

		::System::Boolean Filter(::UnityEngine::GameObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_FILTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONTRIGGERENTER_OFFSET))(arg, nullptr);
		}

		::System::Void InternalDoTriggerExit(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_INTERNALDOTRIGGEREXIT_OFFSET))(arg, nullptr);
		}

		::System::Void InternalDoTriggerEnter(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_INTERNALDOTRIGGERENTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnCollisionExit2D(::UnityEngine::Collision2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Collision2D*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONCOLLISIONEXIT2D_OFFSET))(arg, nullptr);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* arg)
		{
			((::System::Void(*)(::UnityEngine::Collision*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONCOLLISIONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnTriggerEnter2D(::UnityEngine::Collider2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider2D*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONTRIGGERENTER2D_OFFSET))(arg, nullptr);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ONTRIGGEREXIT_OFFSET))(arg, nullptr);
		}

	};
}

