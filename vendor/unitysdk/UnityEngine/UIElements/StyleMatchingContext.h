#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleVariableContext; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class StyleSheet; }

#define UNITYENGINE_UIELEMENTS_STYLEMATCHINGCONTEXT_GET_STYLESHEETCOUNT_OFFSET UNITYSDK_OFFSET(0xA38BF70)
#define UNITYENGINE_UIELEMENTS_STYLEMATCHINGCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA38BFB0)
#define UNITYENGINE_UIELEMENTS_STYLEMATCHINGCONTEXT_ADDSTYLESHEET_OFFSET UNITYSDK_OFFSET(0xA38C0A0)
#define UNITYENGINE_UIELEMENTS_STYLEMATCHINGCONTEXT_REMOVESTYLESHEETRANGE_OFFSET UNITYSDK_OFFSET(0xA38C190)
#define UNITYENGINE_UIELEMENTS_STYLEMATCHINGCONTEXT_GETSTYLESHEETAT_OFFSET UNITYSDK_OFFSET(0xA38C1F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleMatchingContext_TypeDefinitionIndex = 30268;

	class StyleMatchingContext : public Il2CppObject
	{
	public:
		Il2CppObject* m_StyleSheetStack; // 0x10
		::UnityEngine::UIElements::StyleVariableContext* variableContext; // 0x18
		::UnityEngine::UIElements::VisualElement* currentElement; // 0x20
		Il2CppObject* processResult; // 0x28

		::System::Int32 get_styleSheetCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEMATCHINGCONTEXT_GET_STYLESHEETCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEMATCHINGCONTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void AddStyleSheet(::UnityEngine::UIElements::StyleSheet* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheet*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEMATCHINGCONTEXT_ADDSTYLESHEET_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveStyleSheetRange(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEMATCHINGCONTEXT_REMOVESTYLESHEETRANGE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::StyleSheet* GetStyleSheetAt(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::StyleSheet*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEMATCHINGCONTEXT_GETSTYLESHEETAT_OFFSET))(arg, nullptr);
		}

	};
}

