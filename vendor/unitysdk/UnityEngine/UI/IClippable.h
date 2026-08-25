#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Rect; }

#define UNITYENGINE_UI_ICLIPPABLE_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ICLIPPABLE_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ICLIPPABLE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ICLIPPABLE_SETCLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ICLIPPABLE_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_ICLIPPABLE_CULL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int IClippable_TypeDefinitionIndex = 34752;

	class IClippable : public Il2CppObject
	{
	public:
		::UnityEngine::RectTransform* get_rectTransform()
		{
			return (return (::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ICLIPPABLE_GET_RECTTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void RecalculateClipping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ICLIPPABLE_RECALCULATECLIPPING_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ICLIPPABLE_GET_GAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void SetClipSoftness(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ICLIPPABLE_SETCLIPSOFTNESS_OFFSET))(arg, nullptr);
		}

		::System::Void SetClipRect(::UnityEngine::Rect* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ICLIPPABLE_SETCLIPRECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cull(::UnityEngine::Rect* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ICLIPPABLE_CULL_OFFSET))(arg, arg, nullptr);
		}

	};
}

