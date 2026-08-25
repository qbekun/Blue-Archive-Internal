#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTUTILS_GETUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA3898A0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTUTILS_GETFOLDOUTDEPTH_OFFSET UNITYSDK_OFFSET(0xA3899B0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTUTILS_GETLISTANDFOLDOUTDEPTH_OFFSET UNITYSDK_OFFSET(0xA389A90)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA389BB0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementUtils_TypeDefinitionIndex = 30261;

	class VisualElementUtils : public Il2CppObject
	{
	public:
		Il2CppObject* s_usedNames; // 0x0
		::System::Type* s_FoldoutType; // 0x8

		::System::String* GetUniqueName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTUTILS_GETUNIQUENAME_OFFSET))(str, nullptr);
		}

		::System::Int32 GetFoldoutDepth(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTUTILS_GETFOLDOUTDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetListAndFoldoutDepth(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTUTILS_GETLISTANDFOLDOUTDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTUTILS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

