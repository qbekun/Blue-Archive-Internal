#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class DynamicAtlasFiltersInternal; }
namespace UnityEngine::UIElements { class DynamicAtlasCustomFilter; }
namespace UnityEngine::UIElements { class DynamicAtlasFilters; }
namespace UnityEngine::UIElements { class DynamicAtlasSettings; }

#define UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_GET_MINATLASSIZE_OFFSET UNITYSDK_OFFSET(0xA3FF050)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_SET_MINATLASSIZE_OFFSET UNITYSDK_OFFSET(0xA3FF060)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_GET_MAXATLASSIZE_OFFSET UNITYSDK_OFFSET(0xA3FF070)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_SET_MAXATLASSIZE_OFFSET UNITYSDK_OFFSET(0xA3FF080)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_GET_MAXSUBTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0xA3FF090)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_SET_MAXSUBTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0xA3FF0A0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_GET_ACTIVEFILTERS_OFFSET UNITYSDK_OFFSET(0xA3FF0B0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_SET_ACTIVEFILTERS_OFFSET UNITYSDK_OFFSET(0xA3FF0C0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_GET_DEFAULTFILTERS_OFFSET UNITYSDK_OFFSET(0xA3FF0D0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_GET_CUSTOMFILTER_OFFSET UNITYSDK_OFFSET(0xA3FF0E0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_SET_CUSTOMFILTER_OFFSET UNITYSDK_OFFSET(0xA3FF0F0)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_GET_DEFAULTS_OFFSET UNITYSDK_OFFSET(0xA3FF100)
#define UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FF190)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DynamicAtlasSettings_TypeDefinitionIndex = 30558;

	class DynamicAtlasSettings : public Il2CppObject
	{
	public:
		::System::Int32 m_MinAtlasSize; // 0x10
		::System::Int32 m_MaxAtlasSize; // 0x14
		::System::Int32 m_MaxSubTextureSize; // 0x18
		::UnityEngine::UIElements::DynamicAtlasFiltersInternal* m_ActiveFilters; // 0x1C
		::UnityEngine::UIElements::DynamicAtlasCustomFilter* m_CustomFilter; // 0x20

		::System::Int32 get_minAtlasSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_GET_MINATLASSIZE_OFFSET))(nullptr);
		}

		::System::Void set_minAtlasSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_SET_MINATLASSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_maxAtlasSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_GET_MAXATLASSIZE_OFFSET))(nullptr);
		}

		::System::Void set_maxAtlasSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_SET_MAXATLASSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_maxSubTextureSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_GET_MAXSUBTEXTURESIZE_OFFSET))(nullptr);
		}

		::System::Void set_maxSubTextureSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_SET_MAXSUBTEXTURESIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::DynamicAtlasFilters* get_activeFilters()
		{
			return (return (::UnityEngine::UIElements::DynamicAtlasFilters*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_GET_ACTIVEFILTERS_OFFSET))(nullptr);
		}

		::System::Void set_activeFilters(::UnityEngine::UIElements::DynamicAtlasFilters* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DynamicAtlasFilters*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_SET_ACTIVEFILTERS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::DynamicAtlasFilters* get_defaultFilters()
		{
			return (return (::UnityEngine::UIElements::DynamicAtlasFilters*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_GET_DEFAULTFILTERS_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::DynamicAtlasCustomFilter* get_customFilter()
		{
			return (return (::UnityEngine::UIElements::DynamicAtlasCustomFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_GET_CUSTOMFILTER_OFFSET))(nullptr);
		}

		::System::Void set_customFilter(::UnityEngine::UIElements::DynamicAtlasCustomFilter* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DynamicAtlasCustomFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_SET_CUSTOMFILTER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::DynamicAtlasSettings* get_defaults()
		{
			return (return (::UnityEngine::UIElements::DynamicAtlasSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_GET_DEFAULTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DYNAMICATLASSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

