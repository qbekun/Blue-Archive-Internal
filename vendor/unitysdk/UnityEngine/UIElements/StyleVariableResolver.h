#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets::Syntax { class StyleSyntaxParser; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyValueMatcher; }
namespace UnityEngine::UIElements { class StyleProperty; }
namespace UnityEngine::UIElements { class StyleVariableContext; }
namespace UnityEngine::UIElements { class StyleSheet; }
namespace UnityEngine::UIElements { class StyleValueHandle; }

#define UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_GET_CURRENTSHEET_OFFSET UNITYSDK_OFFSET(0xA41E830)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_GET_CURRENTHANDLES_OFFSET UNITYSDK_OFFSET(0xA41E840)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_GET_RESOLVEDVALUES_OFFSET UNITYSDK_OFFSET(0xA41E850)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_GET_VARIABLECONTEXT_OFFSET UNITYSDK_OFFSET(0xA41E860)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_SET_VARIABLECONTEXT_OFFSET UNITYSDK_OFFSET(0xA41E870)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_INIT_OFFSET UNITYSDK_OFFSET(0xA41E880)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_PUSHCONTEXT_OFFSET UNITYSDK_OFFSET(0xA41E930)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_POPCONTEXT_OFFSET UNITYSDK_OFFSET(0xA41E9E0)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_ADDVALUE_OFFSET UNITYSDK_OFFSET(0xA41EA70)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_RESOLVEVARFUNCTION_OFFSET UNITYSDK_OFFSET(0xA41EB50)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_RESOLVEVARFUNCTION_OFFSET UNITYSDK_OFFSET(0xA41ED20)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_VALIDATERESOLVEDVALUES_OFFSET UNITYSDK_OFFSET(0xA41F480)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_RESOLVEVARIABLE_OFFSET UNITYSDK_OFFSET(0xA41EE50)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_RESOLVEFALLBACK_OFFSET UNITYSDK_OFFSET(0xA41F190)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_PARSEVARFUNCTION_OFFSET UNITYSDK_OFFSET(0xA41EC20)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA41F5F0)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA41F750)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleVariableResolver_TypeDefinitionIndex = 30661;

	class StyleVariableResolver : public Il2CppObject
	{
	public:
		::System::Int32 kMaxResolves; // 0x0
		::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser* s_SyntaxParser; // 0x0
		::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher* m_Matcher; // 0x10
		Il2CppObject* m_ResolvedValues; // 0x18
		Il2CppObject* m_ResolvedVarStack; // 0x20
		::UnityEngine::UIElements::StyleProperty* m_Property; // 0x28
		Il2CppObject* m_ContextStack; // 0x30
		ResolveContext* m_CurrentContext; // 0x38
		::UnityEngine::UIElements::StyleVariableContext* _variableContext_k__BackingField; // 0x48

		::UnityEngine::UIElements::StyleSheet* get_currentSheet()
		{
			return (return (::UnityEngine::UIElements::StyleSheet*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_GET_CURRENTSHEET_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_currentHandles()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_GET_CURRENTHANDLES_OFFSET))(nullptr);
		}

		Il2CppObject* get_resolvedValues()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_GET_RESOLVEDVALUES_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleVariableContext* get_variableContext()
		{
			return (return (::UnityEngine::UIElements::StyleVariableContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_GET_VARIABLECONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_variableContext(::UnityEngine::UIElements::StyleVariableContext* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleVariableContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_SET_VARIABLECONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::UnityEngine::UIElements::StyleProperty* arg, ::UnityEngine::UIElements::StyleSheet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleProperty*, ::UnityEngine::UIElements::StyleSheet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_INIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PushContext(::UnityEngine::UIElements::StyleSheet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_PUSHCONTEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PopContext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_POPCONTEXT_OFFSET))(nullptr);
		}

		::System::Void AddValue(::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_ADDVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ResolveVarFunction(int32_t&* arg)
		{
			return (return (::System::Boolean(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_RESOLVEVARFUNCTION_OFFSET))(arg, nullptr);
		}

		Result* ResolveVarFunction(int32_t&* arg, ::System::Int32 arg, ::System::String* str)
		{
			return (return (Result*(*)(int32_t&*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_RESOLVEVARFUNCTION_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Boolean ValidateResolvedValues()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_VALIDATERESOLVEDVALUES_OFFSET))(nullptr);
		}

		Result* ResolveVariable(::System::String* str)
		{
			return (return (Result*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_RESOLVEVARIABLE_OFFSET))(str, nullptr);
		}

		Result* ResolveFallback(int32_t&* arg)
		{
			return (return (Result*(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_RESOLVEFALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void ParseVarFunction(::UnityEngine::UIElements::StyleSheet* arg, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg, int32_t&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheet*, ::Il2CppArray<::System::Object*>*, int32_t&*, int32_t&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_PARSEVARFUNCTION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLERESOLVER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

