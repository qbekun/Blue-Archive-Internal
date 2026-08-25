#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RTHandleSystem; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine::Rendering { class RTHandleProperties; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::Rendering { class ScaleFunc; }
namespace UnityEngine { class Vector2Int; }
namespace UnityEngine::Rendering { class RTHandleProperties&; }
namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class FastMemoryFlags; }

#define UNITYENGINE_RENDERING_RTHANDLE_SETCUSTOMHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9FC3430)
#define UNITYENGINE_RENDERING_RTHANDLE_CLEARCUSTOMHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9FC3450)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x9FC3460)
#define UNITYENGINE_RENDERING_RTHANDLE_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x9FC3470)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_USESCALING_OFFSET UNITYSDK_OFFSET(0x9FC3480)
#define UNITYENGINE_RENDERING_RTHANDLE_SET_USESCALING_OFFSET UNITYSDK_OFFSET(0x9FC3490)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_REFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x9FC34A0)
#define UNITYENGINE_RENDERING_RTHANDLE_SET_REFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x9FC34B0)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_RTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9FC34C0)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_RT_OFFSET UNITYSDK_OFFSET(0x9FC3510)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_NAMEID_OFFSET UNITYSDK_OFFSET(0x9FC3520)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9FC3540)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_ISMSAAENABLED_OFFSET UNITYSDK_OFFSET(0x9FC3550)
#define UNITYENGINE_RENDERING_RTHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FC3560)
#define UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9FBD430)
#define UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9FC3590)
#define UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9FC3600)
#define UNITYENGINE_RENDERING_RTHANDLE_SETRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FC3610)
#define UNITYENGINE_RENDERING_RTHANDLE_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FC3690)
#define UNITYENGINE_RENDERING_RTHANDLE_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FC3710)
#define UNITYENGINE_RENDERING_RTHANDLE_GETINSTANCEID_OFFSET UNITYSDK_OFFSET(0x9FC3760)
#define UNITYENGINE_RENDERING_RTHANDLE_RELEASE_OFFSET UNITYSDK_OFFSET(0x9FC3820)
#define UNITYENGINE_RENDERING_RTHANDLE_GETSCALEDSIZE_OFFSET UNITYSDK_OFFSET(0x9FC3970)
#define UNITYENGINE_RENDERING_RTHANDLE_GETSCALEDSIZE_OFFSET UNITYSDK_OFFSET(0x9FC3BC0)
#define UNITYENGINE_RENDERING_RTHANDLE_SWITCHTOFASTMEMORY_OFFSET UNITYSDK_OFFSET(0x9FC3E10)
#define UNITYENGINE_RENDERING_RTHANDLE_COPYTOFASTMEMORY_OFFSET UNITYSDK_OFFSET(0x9FC3EC0)
#define UNITYENGINE_RENDERING_RTHANDLE_SWITCHOUTFASTMEMORY_OFFSET UNITYSDK_OFFSET(0x9FC3F70)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RTHandle_TypeDefinitionIndex = 34025;

	class RTHandle : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::RTHandleSystem* m_Owner; // 0x10
		::UnityEngine::RenderTexture* m_RT; // 0x18
		::UnityEngine::Texture* m_ExternalTexture; // 0x20
		::UnityEngine::Rendering::RenderTargetIdentifier* m_NameID; // 0x28
		::System::Boolean m_EnableMSAA; // 0x50
		::System::Boolean m_EnableRandomWrite; // 0x51
		::System::Boolean m_EnableHWDynamicScale; // 0x52
		::System::String* m_Name; // 0x58
		::System::Boolean m_UseCustomHandleScales; // 0x60
		::UnityEngine::Rendering::RTHandleProperties* m_CustomHandleProperties; // 0x64
		::UnityEngine::Vector2* _scaleFactor_k__BackingField; // 0x94
		::UnityEngine::Rendering::ScaleFunc* scaleFunc; // 0xA0
		::System::Boolean _useScaling_k__BackingField; // 0xA8
		::UnityEngine::Vector2Int* _referenceSize_k__BackingField; // 0xAC

		::System::Void SetCustomHandleProperties(::UnityEngine::Rendering::RTHandleProperties&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RTHandleProperties&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SETCUSTOMHANDLEPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void ClearCustomHandleProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_CLEARCUSTOMHANDLEPROPERTIES_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_scaleFactor()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_SCALEFACTOR_OFFSET))(nullptr);
		}

		::System::Void set_scaleFactor(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SET_SCALEFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useScaling()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_USESCALING_OFFSET))(nullptr);
		}

		::System::Void set_useScaling(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SET_USESCALING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2Int* get_referenceSize()
		{
			return (return (::UnityEngine::Vector2Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_REFERENCESIZE_OFFSET))(nullptr);
		}

		::System::Void set_referenceSize(::UnityEngine::Vector2Int* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SET_REFERENCESIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RTHandleProperties* get_rtHandleProperties()
		{
			return (return (::UnityEngine::Rendering::RTHandleProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_RTHANDLEPROPERTIES_OFFSET))(nullptr);
		}

		::UnityEngine::RenderTexture* get_rt()
		{
			return (return (::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_RT_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* get_nameID()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_NAMEID_OFFSET))(nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean get_isMSAAEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_ISMSAAENABLED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::RTHandleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RTHandleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* op_Implicit(::UnityEngine::Rendering::RTHandle* arg)
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::UnityEngine::Rendering::RTHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* op_Implicit(::UnityEngine::Rendering::RTHandle* arg)
		{
			return (return (::UnityEngine::Texture*(*)(::UnityEngine::Rendering::RTHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTexture* op_Implicit(::UnityEngine::Rendering::RTHandle* arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::UnityEngine::Rendering::RTHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetRenderTexture(::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SETRENDERTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTexture(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SETTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTexture(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SETTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetInstanceID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GETINSTANCEID_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_RELEASE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2Int* GetScaledSize(::UnityEngine::Vector2Int* arg)
		{
			return (return (::UnityEngine::Vector2Int*(*)(::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GETSCALEDSIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2Int* GetScaledSize()
		{
			return (return (::UnityEngine::Vector2Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GETSCALEDSIZE_OFFSET))(nullptr);
		}

		::System::Void SwitchToFastMemory(::UnityEngine::Rendering::CommandBuffer* arg, ::System::Single arg, ::UnityEngine::Rendering::FastMemoryFlags* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Single, ::UnityEngine::Rendering::FastMemoryFlags*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SWITCHTOFASTMEMORY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CopyToFastMemory(::UnityEngine::Rendering::CommandBuffer* arg, ::System::Single arg, ::UnityEngine::Rendering::FastMemoryFlags* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Single, ::UnityEngine::Rendering::FastMemoryFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_COPYTOFASTMEMORY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SwitchOutFastMemory(::UnityEngine::Rendering::CommandBuffer* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SWITCHOUTFASTMEMORY_OFFSET))(arg, arg, nullptr);
		}

	};
}

