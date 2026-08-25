#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class BuiltinRenderTextureType; }
namespace UnityEngine { class CubemapFace; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class RenderBuffer; }

#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2508D0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA250940)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2509C0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA250A30)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA250AA0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA250AD0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA250C10)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA250D60)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA250D90)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA250E00)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA250E70)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA250EC0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2511C0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0xA251210)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0xA251280)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA251340)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA2513B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderTargetIdentifier_TypeDefinitionIndex = 31509;

	class RenderTargetIdentifier : public Il2CppObject
	{
	public:
		::System::Int32 AllDepthSlices; // 0x0
		::UnityEngine::Rendering::BuiltinRenderTextureType* m_Type; // 0x10
		::System::Int32 m_NameID; // 0x14
		::System::Int32 m_InstanceID; // 0x18
		::System::Int32 m_BufferPointer; // 0x20
		::System::Int32 m_MipLevel; // 0x28
		::UnityEngine::CubemapFace* m_CubeFace; // 0x2C
		::System::Int32 m_DepthSlice; // 0x30

		::System::Void .ctor(::UnityEngine::Rendering::BuiltinRenderTextureType* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::BuiltinRenderTextureType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Texture* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::RenderBuffer* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::RenderBuffer*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* op_Implicit(::UnityEngine::Rendering::BuiltinRenderTextureType* arg)
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::UnityEngine::Rendering::BuiltinRenderTextureType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* op_Implicit(::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* op_Implicit(::UnityEngine::Texture* arg)
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

	};
}

