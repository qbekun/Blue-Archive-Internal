#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleLength; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }
namespace UnityEngine::UIElements { class StyleFloat; }
namespace UnityEngine::UIElements { class StyleInt; }
namespace UnityEngine::UIElements::StyleSheets { class StyleValue&; }
namespace UnityEngine::UIElements::StyleSheets { class StyleValue; }

#define UNITYENGINE_UIELEMENTS_STYLEVALUECOLLECTION_GETSTYLELENGTH_OFFSET UNITYSDK_OFFSET(0xA411750)
#define UNITYENGINE_UIELEMENTS_STYLEVALUECOLLECTION_GETSTYLEFLOAT_OFFSET UNITYSDK_OFFSET(0xA4119C0)
#define UNITYENGINE_UIELEMENTS_STYLEVALUECOLLECTION_GETSTYLEINT_OFFSET UNITYSDK_OFFSET(0xA411A20)
#define UNITYENGINE_UIELEMENTS_STYLEVALUECOLLECTION_TRYGETSTYLEVALUE_OFFSET UNITYSDK_OFFSET(0xA411800)
#define UNITYENGINE_UIELEMENTS_STYLEVALUECOLLECTION_SETSTYLEVALUE_OFFSET UNITYSDK_OFFSET(0xA411A90)
#define UNITYENGINE_UIELEMENTS_STYLEVALUECOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA411C20)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleValueCollection_TypeDefinitionIndex = 30602;

	class StyleValueCollection : public Il2CppObject
	{
	public:
		Il2CppObject* m_Values; // 0x10

		::UnityEngine::UIElements::StyleLength* GetStyleLength(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			return (return (::UnityEngine::UIElements::StyleLength*(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUECOLLECTION_GETSTYLELENGTH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleFloat* GetStyleFloat(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			return (return (::UnityEngine::UIElements::StyleFloat*(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUECOLLECTION_GETSTYLEFLOAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleInt* GetStyleInt(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			return (return (::UnityEngine::UIElements::StyleInt*(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUECOLLECTION_GETSTYLEINT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::StyleSheets::StyleValue&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::StyleSheets::StyleValue&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUECOLLECTION_TRYGETSTYLEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetStyleValue(::UnityEngine::UIElements::StyleSheets::StyleValue* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::StyleValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUECOLLECTION_SETSTYLEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUECOLLECTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

