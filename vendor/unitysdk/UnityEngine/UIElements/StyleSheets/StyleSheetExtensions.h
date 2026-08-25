#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleSheet; }
namespace UnityEngine::UIElements { class StyleValueHandle; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETEXTENSIONS_READASSTRING_OFFSET UNITYSDK_OFFSET(0xA36CAF0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETEXTENSIONS_ISVARFUNCTION_OFFSET UNITYSDK_OFFSET(0xA370070)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StyleSheetExtensions_TypeDefinitionIndex = 30813;

	class StyleSheetExtensions : public Il2CppObject
	{
	public:
		::System::String* ReadAsString(::UnityEngine::UIElements::StyleSheet* arg, ::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETEXTENSIONS_READASSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsVarFunction(::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETEXTENSIONS_ISVARFUNCTION_OFFSET))(arg, nullptr);
		}

	};
}

