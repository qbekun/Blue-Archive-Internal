#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DebugHandler; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class DebugDisplaySettingsMaterial; }
namespace UnityEngine::Rendering { class DrawingSettings; }
namespace UnityEngine::Rendering::Universal { class DebugDisplaySettingsLighting; }
namespace UnityEngine::Rendering::Universal { class DebugDisplaySettingsRendering; }
namespace UnityEngine::Rendering { class RenderStateBlock; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA038F80)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_GET_MATERIALSETTINGS_OFFSET UNITYSDK_OFFSET(0xA039330)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_CREATEDRAWINGSETTINGS_OFFSET UNITYSDK_OFFSET(0xA038540)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_END_OFFSET UNITYSDK_OFFSET(0xA039360)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_GET_LIGHTINGSETTINGS_OFFSET UNITYSDK_OFFSET(0xA039440)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_GET_RENDERINGSETTINGS_OFFSET UNITYSDK_OFFSET(0xA039410)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_GETRENDERSTATEBLOCK_OFFSET UNITYSDK_OFFSET(0xA038610)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_BEGIN_OFFSET UNITYSDK_OFFSET(0xA039240)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA038E30)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DebugRenderSetup_TypeDefinitionIndex = 32587;

	class DebugRenderSetup : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::DebugHandler* m_DebugHandler; // 0x10
		::UnityEngine::Rendering::ScriptableRenderContext* m_Context; // 0x18
		::UnityEngine::Rendering::CommandBuffer* m_CommandBuffer; // 0x20
		::System::Int32 m_Index; // 0x28

		::System::Void .ctor(::UnityEngine::Rendering::Universal::DebugHandler* arg, ::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DebugHandler*, ::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* get_MaterialSettings()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_GET_MATERIALSETTINGS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::DrawingSettings* CreateDrawingSettings(::UnityEngine::Rendering::DrawingSettings* arg)
		{
			return (return (::UnityEngine::Rendering::DrawingSettings*(*)(::UnityEngine::Rendering::DrawingSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_CREATEDRAWINGSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_END_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* get_LightingSettings()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_GET_LIGHTINGSETTINGS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* get_RenderingSettings()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_GET_RENDERINGSETTINGS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RenderStateBlock* GetRenderStateBlock(::UnityEngine::Rendering::RenderStateBlock* arg)
		{
			return (return (::UnityEngine::Rendering::RenderStateBlock*(*)(::UnityEngine::Rendering::RenderStateBlock*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_GETRENDERSTATEBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void Begin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_BEGIN_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGRENDERSETUP_DISPOSE_OFFSET))(nullptr);
		}

	};
}

