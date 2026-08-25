#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class StyleSheet; }
namespace UnityEngine::UIElements { class VisualElementStyleSheetSet; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTSTYLESHEETSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3894B0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTSTYLESHEETSET_ADD_OFFSET UNITYSDK_OFFSET(0xA3894C0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTSTYLESHEETSET_REMOVE_OFFSET UNITYSDK_OFFSET(0xA3896B0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTSTYLESHEETSET_EQUALS_OFFSET UNITYSDK_OFFSET(0xA3897F0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTSTYLESHEETSET_EQUALS_OFFSET UNITYSDK_OFFSET(0xA389800)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTSTYLESHEETSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA389880)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementStyleSheetSet_TypeDefinitionIndex = 30260;

	class VisualElementStyleSheetSet : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::VisualElement* m_Element; // 0x10

		::System::Void .ctor(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTSTYLESHEETSET_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::UnityEngine::UIElements::StyleSheet* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheet*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTSTYLESHEETSET_ADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean Remove(::UnityEngine::UIElements::StyleSheet* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheet*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTSTYLESHEETSET_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::VisualElementStyleSheetSet* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElementStyleSheetSet*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTSTYLESHEETSET_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTSTYLESHEETSET_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTSTYLESHEETSET_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

