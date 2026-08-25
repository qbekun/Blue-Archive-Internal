#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine::UIElements { class Spacing; }

#define UNITYENGINE_UIELEMENTS_SPACING_GET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA3267F0)
#define UNITYENGINE_UIELEMENTS_SPACING_GET_VERTICAL_OFFSET UNITYSDK_OFFSET(0xA326800)
#define UNITYENGINE_UIELEMENTS_SPACING_.CTOR_OFFSET UNITYSDK_OFFSET(0xA326810)
#define UNITYENGINE_UIELEMENTS_SPACING_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0xA326830)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Spacing_TypeDefinitionIndex = 30152;

	class Spacing : public Il2CppObject
	{
	public:
		::System::Single left; // 0x10
		::System::Single top; // 0x14
		::System::Single right; // 0x18
		::System::Single bottom; // 0x1C

		::System::Single get_horizontal()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SPACING_GET_HORIZONTAL_OFFSET))(nullptr);
		}

		::System::Single get_vertical()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SPACING_GET_VERTICAL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SPACING_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Rect* op_Subtraction(::UnityEngine::Rect* arg, ::UnityEngine::UIElements::Spacing* arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::Rect*, ::UnityEngine::UIElements::Spacing*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SPACING_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

	};
}

