#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine { class Bounds&; }

#define UNITYENGINE_COLLIDER2D_SET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0xA29D6A0)
#define UNITYENGINE_COLLIDER2D_SET_USEDBYEFFECTOR_OFFSET UNITYSDK_OFFSET(0xA29D6E0)
#define UNITYENGINE_COLLIDER2D_SET_USEDBYCOMPOSITE_OFFSET UNITYSDK_OFFSET(0xA29D720)
#define UNITYENGINE_COLLIDER2D_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xA29D760)
#define UNITYENGINE_COLLIDER2D_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0xA29D7F0)
#define UNITYENGINE_COLLIDER2D_GET_ATTACHEDRIGIDBODY_OFFSET UNITYSDK_OFFSET(0xA29D870)
#define UNITYENGINE_COLLIDER2D_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0xA29D8B0)
#define UNITYENGINE_COLLIDER2D_OVERLAPPOINT_OFFSET UNITYSDK_OFFSET(0xA29D960)
#define UNITYENGINE_COLLIDER2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA29D9E0)
#define UNITYENGINE_COLLIDER2D_GET_OFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0xA29D7B0)
#define UNITYENGINE_COLLIDER2D_SET_OFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0xA29D830)
#define UNITYENGINE_COLLIDER2D_GET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA29D920)
#define UNITYENGINE_COLLIDER2D_OVERLAPPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA29D9A0)

namespace UnityEngine
{
	inline static constexpr unsigned int Collider2D_TypeDefinitionIndex = 37711;

	class Collider2D : public Il2CppObject
	{
	public:
		::System::Void set_isTrigger(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_SET_ISTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void set_usedByEffector(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_SET_USEDBYEFFECTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_usedByComposite(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_SET_USEDBYCOMPOSITE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_offset()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_OFFSET_OFFSET))(nullptr);
		}

		::System::Void set_offset(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_SET_OFFSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rigidbody2D* get_attachedRigidbody()
		{
			return (return (::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_ATTACHEDRIGIDBODY_OFFSET))(nullptr);
		}

		::UnityEngine::Bounds* get_bounds()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_BOUNDS_OFFSET))(nullptr);
		}

		::System::Boolean OverlapPoint(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_OVERLAPPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_.CTOR_OFFSET))(nullptr);
		}

		::System::Void get_offset_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_OFFSET_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_offset_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_SET_OFFSET_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_bounds_Injected(::UnityEngine::Bounds&* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_BOUNDS_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean OverlapPoint_Injected(::UnityEngine::Vector2&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_OVERLAPPOINT_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

