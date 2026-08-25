#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace Lean::Touch { class LeanSnapshot; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector2&; }

#define LEAN_TOUCH_LEANSNAPSHOT_POP_OFFSET UNITYSDK_OFFSET(0x1EA7DD0)
#define LEAN_TOUCH_LEANSNAPSHOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EAED40)
#define LEAN_TOUCH_LEANSNAPSHOT_GETLOWERINDEX_OFFSET UNITYSDK_OFFSET(0x1EAED50)
#define LEAN_TOUCH_LEANSNAPSHOT_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1EAEE00)
#define LEAN_TOUCH_LEANSNAPSHOT_TRYGETSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x1EA6920)
#define LEAN_TOUCH_LEANSNAPSHOT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAEEF0)
#define LEAN_TOUCH_LEANSNAPSHOT_TRYGETSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1EAEF90)

namespace Lean::Touch
{
	inline static constexpr unsigned int LeanSnapshot_TypeDefinitionIndex = 21257;

	class LeanSnapshot : public Il2CppObject
	{
	public:
		::System::Single Age; // 0x10
		::UnityEngine::Vector2* ScreenPosition; // 0x14
		Il2CppObject* InactiveSnapshots; // 0x0

		::Lean::Touch::LeanSnapshot* Pop()
		{
			return (return (::Lean::Touch::LeanSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSNAPSHOT_POP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSNAPSHOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetLowerIndex(Il2CppObject* arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSNAPSHOT_GETLOWERINDEX_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetWorldPosition(::System::Single arg, ::UnityEngine::Camera* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSNAPSHOT_GETWORLDPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetScreenPosition(Il2CppObject* arg, ::System::Single arg, ::UnityEngine::Vector2&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Single, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSNAPSHOT_TRYGETSCREENPOSITION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSNAPSHOT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSnapshot(Il2CppObject* arg, ::System::Int32 arg, float&* arg, ::UnityEngine::Vector2&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int32, float&*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSNAPSHOT_TRYGETSNAPSHOT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

