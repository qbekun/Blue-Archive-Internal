#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_UIELEMENTS_UIRUTILITY_SHAPEWINDINGISCLOCKWISE_OFFSET UNITYSDK_OFFSET(0xA40DB00)
#define UNITYENGINE_UIELEMENTS_UIRUTILITY_ISROUNDRECT_OFFSET UNITYSDK_OFFSET(0xA40DB70)
#define UNITYENGINE_UIELEMENTS_UIRUTILITY_ISVECTORIMAGEBACKGROUND_OFFSET UNITYSDK_OFFSET(0xA40DD70)
#define UNITYENGINE_UIELEMENTS_UIRUTILITY_ISELEMENTSELFHIDDEN_OFFSET UNITYSDK_OFFSET(0xA40DE00)
#define UNITYENGINE_UIELEMENTS_UIRUTILITY_DESTROY_OFFSET UNITYSDK_OFFSET(0xA406810)
#define UNITYENGINE_UIELEMENTS_UIRUTILITY_GETPREVPOW2_OFFSET UNITYSDK_OFFSET(0xA40DEB0)
#define UNITYENGINE_UIELEMENTS_UIRUTILITY_GETNEXTPOW2_OFFSET UNITYSDK_OFFSET(0xA406D60)
#define UNITYENGINE_UIELEMENTS_UIRUTILITY_GETNEXTPOW2EXP_OFFSET UNITYSDK_OFFSET(0xA40DEE0)
#define UNITYENGINE_UIELEMENTS_UIRUTILITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA40DF00)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UIRUtility_TypeDefinitionIndex = 30588;

	class UIRUtility : public Il2CppObject
	{
	public:
		::System::String* k_DefaultShaderName; // 0x0
		::System::String* k_DefaultWorldSpaceShaderName; // 0x8

		::System::Boolean ShapeWindingIsClockwise(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRUTILITY_SHAPEWINDINGISCLOCKWISE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsRoundRect(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRUTILITY_ISROUNDRECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsVectorImageBackground(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRUTILITY_ISVECTORIMAGEBACKGROUND_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsElementSelfHidden(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRUTILITY_ISELEMENTSELFHIDDEN_OFFSET))(arg, nullptr);
		}

		::System::Void Destroy(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRUTILITY_DESTROY_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPrevPow2(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRUTILITY_GETPREVPOW2_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetNextPow2(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRUTILITY_GETNEXTPOW2_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetNextPow2Exp(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRUTILITY_GETNEXTPOW2EXP_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRUTILITY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

