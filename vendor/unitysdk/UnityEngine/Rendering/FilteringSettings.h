#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RenderQueueRange; }
namespace UnityEngine::Rendering { class SortingLayerRange; }
namespace UnityEngine::Rendering { class FilteringSettings; }

#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0xA25DE70)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA25DF90)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_RENDERQUEUERANGE_OFFSET UNITYSDK_OFFSET(0xA25E050)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0xA25E060)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA25E070)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_EXCLUDEMOTIONVECTOROBJECTS_OFFSET UNITYSDK_OFFSET(0xA25E080)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_SORTINGLAYERRANGE_OFFSET UNITYSDK_OFFSET(0xA25E0A0)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA25E0B0)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA25E160)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA25E250)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FilteringSettings_TypeDefinitionIndex = 31554;

	class FilteringSettings : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::RenderQueueRange* m_RenderQueueRange; // 0x10
		::System::Int32 m_LayerMask; // 0x18
		::System::UInt32 m_RenderingLayerMask; // 0x1C
		::System::Int32 m_ExcludeMotionVectorObjects; // 0x20
		::UnityEngine::Rendering::SortingLayerRange* m_SortingLayerRange; // 0x24

		::UnityEngine::Rendering::FilteringSettings* get_defaultValue()
		{
			return (return (::UnityEngine::Rendering::FilteringSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_GET_DEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg, ::System::UInt32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void set_renderQueueRange(::UnityEngine::Rendering::RenderQueueRange* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderQueueRange*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_RENDERQUEUERANGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_layerMask(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_LAYERMASK_OFFSET))(arg, nullptr);
		}

		::System::Void set_renderingLayerMask(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_RENDERINGLAYERMASK_OFFSET))(arg, nullptr);
		}

		::System::Void set_excludeMotionVectorObjects(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_EXCLUDEMOTIONVECTOROBJECTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_sortingLayerRange(::UnityEngine::Rendering::SortingLayerRange* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::SortingLayerRange*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_SORTINGLAYERRANGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::FilteringSettings* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::FilteringSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

