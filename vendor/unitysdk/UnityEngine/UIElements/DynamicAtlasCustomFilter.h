#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UIElements { class DynamicAtlasFilters&; }

#define UNITYENGINE_UIELEMENTS_DYNAMICATLASCUSTOMFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA30CAD0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASCUSTOMFILTER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA30CBA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DynamicAtlasCustomFilter_TypeDefinitionIndex = 30062;

	class DynamicAtlasCustomFilter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASCUSTOMFILTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(::UnityEngine::Texture2D* arg, ::UnityEngine::UIElements::DynamicAtlasFilters&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Texture2D*, ::UnityEngine::UIElements::DynamicAtlasFilters&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASCUSTOMFILTER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

