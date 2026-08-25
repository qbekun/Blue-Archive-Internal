#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector2; }

#define LEAN_COMMON_LEANHELPER_HERMITEINTERPOLATE_OFFSET UNITYSDK_OFFSET(0x1EB44B0)
#define LEAN_COMMON_LEANHELPER_DESTROY_OFFSET UNITYSDK_OFFSET(0x000000)
#define LEAN_COMMON_LEANHELPER_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define LEAN_COMMON_LEANHELPER_GETDAMPENFACTOR_OFFSET UNITYSDK_OFFSET(0x1EB45B0)
#define LEAN_COMMON_LEANHELPER_GETCAMERA_OFFSET UNITYSDK_OFFSET(0x1EA6490)
#define LEAN_COMMON_LEANHELPER_HERMITE_OFFSET UNITYSDK_OFFSET(0x1EA6090)

namespace Lean::Common
{
	inline static constexpr unsigned int LeanHelper_TypeDefinitionIndex = 21261;

	class LeanHelper : public Il2CppObject
	{
	public:
		::System::String* HelpUrlPrefix; // 0x0
		::System::String* PlusHelpUrlPrefix; // 0x0
		::System::String* ComponentPathPrefix; // 0x0

		::System::Single HermiteInterpolate(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANHELPER_HERMITEINTERPOLATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Destroy(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANHELPER_DESTROY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateElement(::UnityEngine::Transform* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANHELPER_CREATEELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Single GetDampenFactor(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANHELPER_GETDAMPENFACTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Camera* GetCamera(::UnityEngine::Camera* arg, ::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::Camera*(*)(::UnityEngine::Camera*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANHELPER_GETCAMERA_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* Hermite(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_COMMON_LEANHELPER_HERMITE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

