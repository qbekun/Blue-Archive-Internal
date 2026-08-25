#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElementFocusChangeDirection; }
namespace UnityEngine::UIElements { class FocusChangeDirection; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_LEFT_OFFSET UNITYSDK_OFFSET(0xA386AA0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0xA386AF0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA386B40)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA386B90)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementFocusChangeDirection_TypeDefinitionIndex = 30251;

	class VisualElementFocusChangeDirection : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::VisualElementFocusChangeDirection* s_Left; // 0x0
		::UnityEngine::UIElements::VisualElementFocusChangeDirection* s_Right; // 0x8

		::UnityEngine::UIElements::FocusChangeDirection* get_left()
		{
			return (return (::UnityEngine::UIElements::FocusChangeDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_LEFT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::FocusChangeDirection* get_right()
		{
			return (return (::UnityEngine::UIElements::FocusChangeDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_RIGHT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

