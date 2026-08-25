#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class SortingSettings; }
namespace UnityEngine::Rendering { class PerObjectData; }
namespace UnityEngine::Rendering { class DrawRendererFlags; }
namespace UnityEngine::Rendering { class ShaderTagId; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class DrawingSettings; }

#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA25D740)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_GET_SORTINGSETTINGS_OFFSET UNITYSDK_OFFSET(0xA25D830)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_SORTINGSETTINGS_OFFSET UNITYSDK_OFFSET(0xA25D850)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_PEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0xA25D860)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_ENABLEDYNAMICBATCHING_OFFSET UNITYSDK_OFFSET(0xA25D870)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_ENABLEINSTANCING_OFFSET UNITYSDK_OFFSET(0xA25D890)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_OVERRIDEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA25D8B0)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_OVERRIDEMATERIALPASSINDEX_OFFSET UNITYSDK_OFFSET(0xA25D8E0)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_FALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0xA25D8F0)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_MAINLIGHTINDEX_OFFSET UNITYSDK_OFFSET(0xA25D920)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_GETSHADERPASSNAME_OFFSET UNITYSDK_OFFSET(0xA25D930)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SETSHADERPASSNAME_OFFSET UNITYSDK_OFFSET(0xA25DA90)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA25DBE0)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA25DD20)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA25DDD0)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA25DE30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DrawingSettings_TypeDefinitionIndex = 31552;

	class DrawingSettings : public Il2CppObject
	{
	public:
		::System::Int32 maxShaderPasses; // 0x0
		::UnityEngine::Rendering::SortingSettings* m_SortingSettings; // 0x10
		<shaderPassNames>e__FixedBuffer* shaderPassNames; // 0xF0
		::UnityEngine::Rendering::PerObjectData* m_PerObjectData; // 0x130
		::UnityEngine::Rendering::DrawRendererFlags* m_Flags; // 0x134
		::System::Int32 m_OverrideMaterialInstanceId; // 0x138
		::System::Int32 m_OverrideMaterialPassIndex; // 0x13C
		::System::Int32 m_fallbackMaterialInstanceId; // 0x140
		::System::Int32 m_MainLightIndex; // 0x144
		::System::Int32 m_UseSrpBatcher; // 0x148

		::System::Void .ctor(::UnityEngine::Rendering::ShaderTagId* arg, ::UnityEngine::Rendering::SortingSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ShaderTagId*, ::UnityEngine::Rendering::SortingSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::SortingSettings* get_sortingSettings()
		{
			return (return (::UnityEngine::Rendering::SortingSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_GET_SORTINGSETTINGS_OFFSET))(nullptr);
		}

		::System::Void set_sortingSettings(::UnityEngine::Rendering::SortingSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::SortingSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_SORTINGSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void set_perObjectData(::UnityEngine::Rendering::PerObjectData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::PerObjectData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_PEROBJECTDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_enableDynamicBatching(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_ENABLEDYNAMICBATCHING_OFFSET))(arg, nullptr);
		}

		::System::Void set_enableInstancing(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_ENABLEINSTANCING_OFFSET))(arg, nullptr);
		}

		::System::Void set_overrideMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_OVERRIDEMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_overrideMaterialPassIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_OVERRIDEMATERIALPASSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_fallbackMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_FALLBACKMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_mainLightIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_MAINLIGHTINDEX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::ShaderTagId* GetShaderPassName(::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::ShaderTagId*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_GETSHADERPASSNAME_OFFSET))(arg, nullptr);
		}

		::System::Void SetShaderPassName(::System::Int32 arg, ::UnityEngine::Rendering::ShaderTagId* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::ShaderTagId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SETSHADERPASSNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::DrawingSettings* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::DrawingSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

