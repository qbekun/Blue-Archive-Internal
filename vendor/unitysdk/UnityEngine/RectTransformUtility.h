#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine { class Ray; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Rect&; }
namespace UnityEngine { class Vector4&; }

#define UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTPOINT_OFFSET UNITYSDK_OFFSET(0xA4542B0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTRECT_OFFSET UNITYSDK_OFFSET(0xA4543B0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_POINTINRECTANGLE_OFFSET UNITYSDK_OFFSET(0xA4544A0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_RECTANGLECONTAINSSCREENPOINT_OFFSET UNITYSDK_OFFSET(0xA454590)
#define UNITYENGINE_RECTTRANSFORMUTILITY_RECTANGLECONTAINSSCREENPOINT_OFFSET UNITYSDK_OFFSET(0xA454620)
#define UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTOWORLDPOINTINRECTANGLE_OFFSET UNITYSDK_OFFSET(0xA454710)
#define UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTOLOCALPOINTINRECTANGLE_OFFSET UNITYSDK_OFFSET(0xA454C10)
#define UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTORAY_OFFSET UNITYSDK_OFFSET(0xA454A90)
#define UNITYENGINE_RECTTRANSFORMUTILITY_WORLDTOSCREENPOINT_OFFSET UNITYSDK_OFFSET(0xA454D00)
#define UNITYENGINE_RECTTRANSFORMUTILITY_FLIPLAYOUTONAXIS_OFFSET UNITYSDK_OFFSET(0xA454D90)
#define UNITYENGINE_RECTTRANSFORMUTILITY_FLIPLAYOUTAXES_OFFSET UNITYSDK_OFFSET(0xA4550E0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_GETTRANSPOSED_OFFSET UNITYSDK_OFFSET(0xA455330)
#define UNITYENGINE_RECTTRANSFORMUTILITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA455340)
#define UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA454360)
#define UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA454450)
#define UNITYENGINE_RECTTRANSFORMUTILITY_POINTINRECTANGLE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA454540)

namespace UnityEngine
{
	inline static constexpr unsigned int RectTransformUtility_TypeDefinitionIndex = 37679;

	class RectTransformUtility : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_Corners; // 0x0

		::UnityEngine::Vector2* PixelAdjustPoint(::UnityEngine::Vector2* arg, ::UnityEngine::Transform* arg, ::UnityEngine::Canvas* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Transform*, ::UnityEngine::Canvas*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Rect* PixelAdjustRect(::UnityEngine::RectTransform* arg, ::UnityEngine::Canvas* arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::RectTransform*, ::UnityEngine::Canvas*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTRECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean PointInRectangle(::UnityEngine::Vector2* arg, ::UnityEngine::RectTransform* arg, ::UnityEngine::Camera* arg, ::UnityEngine::Vector4* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_POINTINRECTANGLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean RectangleContainsScreenPoint(::UnityEngine::RectTransform* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_RECTANGLECONTAINSSCREENPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean RectangleContainsScreenPoint(::UnityEngine::RectTransform* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Camera* arg, ::UnityEngine::Vector4* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2*, ::UnityEngine::Camera*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_RECTANGLECONTAINSSCREENPOINT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ScreenPointToWorldPointInRectangle(::UnityEngine::RectTransform* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Camera* arg, ::UnityEngine::Vector3&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2*, ::UnityEngine::Camera*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTOWORLDPOINTINRECTANGLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ScreenPointToLocalPointInRectangle(::UnityEngine::RectTransform* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Camera* arg, ::UnityEngine::Vector2&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2*, ::UnityEngine::Camera*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTOLOCALPOINTINRECTANGLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Ray* ScreenPointToRay(::UnityEngine::Camera* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Ray*(*)(::UnityEngine::Camera*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTORAY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* WorldToScreenPoint(::UnityEngine::Camera* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_WORLDTOSCREENPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FlipLayoutOnAxis(::UnityEngine::RectTransform* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_FLIPLAYOUTONAXIS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void FlipLayoutAxes(::UnityEngine::RectTransform* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_FLIPLAYOUTAXES_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* GetTransposed(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_GETTRANSPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void PixelAdjustPoint_Injected(::UnityEngine::Vector2&* arg, ::UnityEngine::Transform* arg, ::UnityEngine::Canvas* arg, ::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::UnityEngine::Transform*, ::UnityEngine::Canvas*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTPOINT_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void PixelAdjustRect_Injected(::UnityEngine::RectTransform* arg, ::UnityEngine::Canvas* arg, ::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Canvas*, ::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTRECT_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean PointInRectangle_Injected(::UnityEngine::Vector2&* arg, ::UnityEngine::RectTransform* arg, ::UnityEngine::Camera* arg, ::UnityEngine::Vector4&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2&*, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_POINTINRECTANGLE_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

