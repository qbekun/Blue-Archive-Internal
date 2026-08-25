#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CullingResults; }
namespace UnityEngine::Rendering { class ShadowSplitData; }
namespace UnityEngine { class ShadowObjectsFilter; }
namespace UnityEngine::Rendering { class ShadowDrawingSettings; }

#define UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_SET_USERENDERINGLAYERMASKTEST_OFFSET UNITYSDK_OFFSET(0xA263B50)
#define UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_SET_SPLITDATA_OFFSET UNITYSDK_OFFSET(0xA263B70)
#define UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA263B80)
#define UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA263D60)
#define UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA264050)
#define UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2640E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShadowDrawingSettings_TypeDefinitionIndex = 31570;

	class ShadowDrawingSettings : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::CullingResults* m_CullingResults; // 0x10
		::System::Int32 m_LightIndex; // 0x20
		::System::Int32 m_UseRenderingLayerMaskTest; // 0x24
		::UnityEngine::Rendering::ShadowSplitData* m_SplitData; // 0x28
		::UnityEngine::ShadowObjectsFilter* m_ObjectsFilter; // 0xE4

		::System::Void set_useRenderingLayerMaskTest(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_SET_USERENDERINGLAYERMASKTEST_OFFSET))(arg, nullptr);
		}

		::System::Void set_splitData(::UnityEngine::Rendering::ShadowSplitData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ShadowSplitData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_SET_SPLITDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::CullingResults* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CullingResults*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::ShadowDrawingSettings* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::ShadowDrawingSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

