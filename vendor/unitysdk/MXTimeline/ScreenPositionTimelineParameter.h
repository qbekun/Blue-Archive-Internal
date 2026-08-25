#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Camera; }

#define MXTIMELINE_SCREENPOSITIONTIMELINEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE02F80)
#define MXTIMELINE_SCREENPOSITIONTIMELINEPARAMETER_VALUE_OFFSET UNITYSDK_OFFSET(0xE03010)
#define MXTIMELINE_SCREENPOSITIONTIMELINEPARAMETER_VALUE_OFFSET UNITYSDK_OFFSET(0xE03220)
#define MXTIMELINE_SCREENPOSITIONTIMELINEPARAMETER_CALCULATESCREENPOSITION_OFFSET UNITYSDK_OFFSET(0xE03300)

namespace MXTimeline
{
	inline static constexpr unsigned int ScreenPositionTimelineParameter_TypeDefinitionIndex = 10235;

	class ScreenPositionTimelineParameter : public Il2CppObject
	{
	public:
		::System::Boolean overrideState; // 0x10
		::UnityEngine::Vector3* rawValue; // 0x14
		::UnityEngine::Vector2* screenPos; // 0x20
		::System::Boolean localSpace; // 0x28
		::System::Int32 forceupdate; // 0x2C
		::System::Boolean curve; // 0x30
		::UnityEngine::AnimationCurve* valueCurveX; // 0x38
		::UnityEngine::AnimationCurve* valueCurveY; // 0x40
		::System::Boolean screenCoordinate; // 0x48

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_SCREENPOSITIONTIMELINEPARAMETER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* Value(::UnityEngine::Transform* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Transform*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_SCREENPOSITIONTIMELINEPARAMETER_VALUE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* Value(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::System::Single arg3)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_SCREENPOSITIONTIMELINEPARAMETER_VALUE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* CalculateScreenPosition(::UnityEngine::Camera* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_SCREENPOSITIONTIMELINEPARAMETER_CALCULATESCREENPOSITION_OFFSET))(arg, arg2, nullptr);
		}

	};
}

