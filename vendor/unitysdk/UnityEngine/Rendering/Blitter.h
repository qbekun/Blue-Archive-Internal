#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::Rendering { class TextureDimension; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_RENDERING_BLITTER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9FCFBF0)
#define UNITYENGINE_RENDERING_BLITTER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x9FD0740)
#define UNITYENGINE_RENDERING_BLITTER_GETBLITMATERIAL_OFFSET UNITYSDK_OFFSET(0x9FD0C00)
#define UNITYENGINE_RENDERING_BLITTER_DRAWTRIANGLE_OFFSET UNITYSDK_OFFSET(0x9FD0CA0)
#define UNITYENGINE_RENDERING_BLITTER_DRAWQUAD_OFFSET UNITYSDK_OFFSET(0x9FD0EF0)
#define UNITYENGINE_RENDERING_BLITTER_BLITTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FD1140)
#define UNITYENGINE_RENDERING_BLITTER_BLITTEXTURE2D_OFFSET UNITYSDK_OFFSET(0x9FD1530)
#define UNITYENGINE_RENDERING_BLITTER_BLITCOLORANDDEPTH_OFFSET UNITYSDK_OFFSET(0x9FD16E0)
#define UNITYENGINE_RENDERING_BLITTER_BLITTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FD1410)
#define UNITYENGINE_RENDERING_BLITTER_BLITCAMERATEXTURE_OFFSET UNITYSDK_OFFSET(0x9FD1900)
#define UNITYENGINE_RENDERING_BLITTER_BLITCAMERATEXTURE2D_OFFSET UNITYSDK_OFFSET(0x9FD1B40)
#define UNITYENGINE_RENDERING_BLITTER_BLITCAMERATEXTURE_OFFSET UNITYSDK_OFFSET(0x9FD1CF0)
#define UNITYENGINE_RENDERING_BLITTER_BLITCAMERATEXTURE_OFFSET UNITYSDK_OFFSET(0x9FD1E90)
#define UNITYENGINE_RENDERING_BLITTER_BLITCAMERATEXTURE_OFFSET UNITYSDK_OFFSET(0x9FD1FF0)
#define UNITYENGINE_RENDERING_BLITTER_BLITQUAD_OFFSET UNITYSDK_OFFSET(0x9FCBA00)
#define UNITYENGINE_RENDERING_BLITTER_BLITQUADWITHPADDING_OFFSET UNITYSDK_OFFSET(0x9FD21E0)
#define UNITYENGINE_RENDERING_BLITTER_BLITQUADWITHPADDINGMULTIPLY_OFFSET UNITYSDK_OFFSET(0x9FD2600)
#define UNITYENGINE_RENDERING_BLITTER_BLITOCTAHEDRALWITHPADDING_OFFSET UNITYSDK_OFFSET(0x9FD2A20)
#define UNITYENGINE_RENDERING_BLITTER_BLITOCTAHEDRALWITHPADDINGMULTIPLY_OFFSET UNITYSDK_OFFSET(0x9FD2CD0)
#define UNITYENGINE_RENDERING_BLITTER_BLITCUBETOOCTAHEDRAL2DQUAD_OFFSET UNITYSDK_OFFSET(0x9FD2F80)
#define UNITYENGINE_RENDERING_BLITTER_BLITCUBETOOCTAHEDRAL2DQUADSINGLECHANNEL_OFFSET UNITYSDK_OFFSET(0x9FD3190)
#define UNITYENGINE_RENDERING_BLITTER_BLITQUADSINGLECHANNEL_OFFSET UNITYSDK_OFFSET(0x9FD3460)
#define UNITYENGINE_RENDERING_BLITTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FD3730)
#define UNITYENGINE_RENDERING_BLITTER__INITIALIZE_G__GETFULLSCREENTRIANGLEVERTEXPOSITION|8_0_OFFSET UNITYSDK_OFFSET(0x9FD0410)
#define UNITYENGINE_RENDERING_BLITTER__INITIALIZE_G__GETFULLSCREENTRIANGLETEXCOORD|8_1_OFFSET UNITYSDK_OFFSET(0x9FD04B0)
#define UNITYENGINE_RENDERING_BLITTER__INITIALIZE_G__GETQUADVERTEXPOSITION|8_2_OFFSET UNITYSDK_OFFSET(0x9FD0580)
#define UNITYENGINE_RENDERING_BLITTER__INITIALIZE_G__GETQUADTEXCOORD|8_3_OFFSET UNITYSDK_OFFSET(0x9FD0630)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Blitter_TypeDefinitionIndex = 34052;

	class Blitter : public Il2CppObject
	{
	public:
		::UnityEngine::Material* s_Blit; // 0x0
		::UnityEngine::Material* s_BlitTexArray; // 0x8
		::UnityEngine::Material* s_BlitTexArraySingleSlice; // 0x10
		::UnityEngine::Material* s_BlitColorAndDepth; // 0x18
		::UnityEngine::MaterialPropertyBlock* s_PropertyBlock; // 0x20
		::UnityEngine::Mesh* s_TriangleMesh; // 0x28
		::UnityEngine::Mesh* s_QuadMesh; // 0x30

		::System::Void Initialize(::UnityEngine::Shader* arg, ::UnityEngine::Shader* arg)
		{
			((::System::Void(*)(::UnityEngine::Shader*, ::UnityEngine::Shader*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_CLEANUP_OFFSET))(nullptr);
		}

		::UnityEngine::Material* GetBlitMaterial(::UnityEngine::Rendering::TextureDimension* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Rendering::TextureDimension*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_GETBLITMATERIAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawTriangle(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_DRAWTRIANGLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawQuad(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_DRAWQUAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void BlitTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Vector4* arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Vector4*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_BLITTEXTURE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitTexture2D(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Vector4* arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Vector4*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_BLITTEXTURE2D_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitColorAndDepth(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Texture* arg, ::UnityEngine::RenderTexture* arg, ::UnityEngine::Vector4* arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector4*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_BLITCOLORANDDEPTH_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Vector4*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_BLITTEXTURE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Rendering::RTHandle* arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_BLITCAMERATEXTURE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitCameraTexture2D(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Rendering::RTHandle* arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_BLITCAMERATEXTURE2D_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_BLITCAMERATEXTURE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Vector4* arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Vector4*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_BLITCAMERATEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Rendering::RTHandle* arg, ::UnityEngine::Rect* arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rect*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_BLITCAMERATEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitQuad(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_BLITQUAD_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitQuadWithPadding(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector2*, ::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::System::Int32, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_BLITQUADWITHPADDING_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitQuadWithPaddingMultiply(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector2*, ::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::System::Int32, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_BLITQUADWITHPADDINGMULTIPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitOctahedralWithPadding(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector2*, ::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::System::Int32, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_BLITOCTAHEDRALWITHPADDING_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitOctahedralWithPaddingMultiply(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector2*, ::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::System::Int32, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_BLITOCTAHEDRALWITHPADDINGMULTIPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitCubeToOctahedral2DQuad(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector4* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector4*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_BLITCUBETOOCTAHEDRAL2DQUAD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitCubeToOctahedral2DQuadSingleChannel(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector4* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector4*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_BLITCUBETOOCTAHEDRAL2DQUADSINGLECHANNEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitQuadSingleChannel(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_BLITQUADSINGLECHANNEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER_.CCTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* _Initialize_g__GetFullScreenTriangleVertexPosition|8_0(::System::Single arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER__INITIALIZE_G__GETFULLSCREENTRIANGLEVERTEXPOSITION|8_0_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* _Initialize_g__GetFullScreenTriangleTexCoord|8_1()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER__INITIALIZE_G__GETFULLSCREENTRIANGLETEXCOORD|8_1_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* _Initialize_g__GetQuadVertexPosition|8_2(::System::Single arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER__INITIALIZE_G__GETQUADVERTEXPOSITION|8_2_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* _Initialize_g__GetQuadTexCoord|8_3()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLITTER__INITIALIZE_G__GETQUADTEXCOORD|8_3_OFFSET))(nullptr);
		}

	};
}

