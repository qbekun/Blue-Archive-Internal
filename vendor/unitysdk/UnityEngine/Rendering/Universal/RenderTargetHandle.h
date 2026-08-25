#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering::Universal { class XRPass; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_SET_ID_OFFSET UNITYSDK_OFFSET(0xA071A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_GET_ID_OFFSET UNITYSDK_OFFSET(0xA071A90)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_SET_RTID_OFFSET UNITYSDK_OFFSET(0xA071AA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_GET_RTID_OFFSET UNITYSDK_OFFSET(0xA071AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA069C10)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_GETCAMERATARGET_OFFSET UNITYSDK_OFFSET(0xA071AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_INIT_OFFSET UNITYSDK_OFFSET(0xA062150)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_INIT_OFFSET UNITYSDK_OFFSET(0xA071BE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA061950)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_HASINTERNALRENDERTARGETID_OFFSET UNITYSDK_OFFSET(0xA071C50)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA071CA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA071DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA071E90)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA071EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA071F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA071FC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RenderTargetHandle_TypeDefinitionIndex = 32743;

	class RenderTargetHandle : public Il2CppObject
	{
	public:
		::System::Int32 _id_k__BackingField; // 0x10
		::UnityEngine::Rendering::RenderTargetIdentifier* _rtid_k__BackingField; // 0x18
		::UnityEngine::Rendering::Universal::RenderTargetHandle* CameraTarget; // 0x0

		::System::Void set_id(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_rtid(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_SET_RTID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* get_rtid()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_GET_RTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* GetCameraTarget(::UnityEngine::Rendering::Universal::XRPass* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::UnityEngine::Rendering::Universal::XRPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_GETCAMERATARGET_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_INIT_OFFSET))(str, nullptr);
		}

		::System::Void Init(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_INIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* Identifier()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_IDENTIFIER_OFFSET))(nullptr);
		}

		::System::Boolean HasInternalRenderTargetId()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_HASINTERNALRENDERTARGETID_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Rendering::Universal::RenderTargetHandle* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Rendering::Universal::RenderTargetHandle* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERTARGETHANDLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

