#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class SinglePassStereoMode; }
namespace UnityEngine::Rendering { class GraphicsFenceType; }
namespace UnityEngine::Rendering { class SynchronisationStageFlags; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier&; }
namespace UnityEngine::Rendering { class RenderTextureSubElement; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::RendererUtils { class RendererList; }
namespace UnityEngine { class MeshTopology; }
namespace UnityEngine { class RectInt; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine { class FilterMode; }
namespace UnityEngine::Rendering { class RTClearFlags; }
namespace UnityEngine { class Color; }
namespace UnityEngine::Rendering { class GlobalKeyword; }
namespace UnityEngine::Rendering { class GlobalKeyword&; }
namespace UnityEngine::Rendering { class CommandBufferExecutionFlags; }
namespace UnityEngine::Rendering { class CameraLateLatchMatrixType; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine::Rendering { class RenderBufferLoadAction; }
namespace UnityEngine::Rendering { class RenderBufferStoreAction; }
namespace UnityEngine { class CubemapFace; }
namespace UnityEngine::Rendering { class RenderTargetFlags; }
namespace UnityEngine::Rendering { class GraphicsFence; }
namespace UnityEngine::Rendering { class SynchronisationStage; }
namespace UnityEngine { class Vector4&; }
namespace UnityEngine { class Matrix4x4&; }
namespace UnityEngine::Rendering::RendererUtils { class RendererList&; }
namespace UnityEngine { class RectInt&; }
namespace UnityEngine { class Rect&; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine { class RenderTextureDescriptor&; }
namespace UnityEngine { class Color&; }

#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_SETSINGLEPASSSTEREO_OFFSET UNITYSDK_OFFSET(0xA251C00)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INITBUFFER_OFFSET UNITYSDK_OFFSET(0xA251C40)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CREATEGPUFENCE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA251C80)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_WAITONGPUFENCE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA251CD0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASEBUFFER_OFFSET UNITYSDK_OFFSET(0xA251D20)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORPARAM_OFFSET UNITYSDK_OFFSET(0xA251D60)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_SETCOMPUTETEXTUREPARAM_OFFSET UNITYSDK_OFFSET(0xA251E00)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_SETCOMPUTECONSTANTCOMPUTEBUFFERPARAM_OFFSET UNITYSDK_OFFSET(0xA251E50)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DISPATCHCOMPUTE_OFFSET UNITYSDK_OFFSET(0xA251EA0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA251EF0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA251F30)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESH_OFFSET UNITYSDK_OFFSET(0xA251F70)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWRENDERER_OFFSET UNITYSDK_OFFSET(0xA252010)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWRENDERERLIST_OFFSET UNITYSDK_OFFSET(0xA252060)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURAL_OFFSET UNITYSDK_OFFSET(0xA2520E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESHINSTANCED_OFFSET UNITYSDK_OFFSET(0xA252180)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWOCCLUSIONMESH_OFFSET UNITYSDK_OFFSET(0xA2521D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPORT_OFFSET UNITYSDK_OFFSET(0xA252250)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ENABLESCISSORRECT_OFFSET UNITYSDK_OFFSET(0xA2522D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISABLESCISSORRECT_OFFSET UNITYSDK_OFFSET(0xA252350)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA252390)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_TEXTURE_OFFSET UNITYSDK_OFFSET(0xA2523E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA2524D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRTWITHDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA2525C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_OFFSET UNITYSDK_OFFSET(0xA252660)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_OFFSET UNITYSDK_OFFSET(0xA2526D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASETEMPORARYRT_OFFSET UNITYSDK_OFFSET(0xA252740)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA252780)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA252840)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0xA252970)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALINT_OFFSET UNITYSDK_OFFSET(0xA2529C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALINTEGER_OFFSET UNITYSDK_OFFSET(0xA252A10)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0xA252A60)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0xA252B00)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALMATRIX_OFFSET UNITYSDK_OFFSET(0xA252BA0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ENABLESHADERKEYWORD_OFFSET UNITYSDK_OFFSET(0xA252C40)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISABLESHADERKEYWORD_OFFSET UNITYSDK_OFFSET(0xA252C80)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISABLEGLOBALKEYWORD_OFFSET UNITYSDK_OFFSET(0xA252CC0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0xA252D40)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPROJECTIONMATRICES_OFFSET UNITYSDK_OFFSET(0xA252D90)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALDEPTHBIAS_OFFSET UNITYSDK_OFFSET(0xA252E30)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETEXECUTIONFLAGS_OFFSET UNITYSDK_OFFSET(0xA252E90)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_VALIDATEAGAINSTEXECUTIONFLAGS_OFFSET UNITYSDK_OFFSET(0xA252920)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALFLOATARRAY_OFFSET UNITYSDK_OFFSET(0xA252ED0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA252F20)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0xA252F70)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETLATELATCHPROJECTIONMATRICES_OFFSET UNITYSDK_OFFSET(0xA252FC0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_MARKLATELATCHMATRIXSHADERPROPERTYID_OFFSET UNITYSDK_OFFSET(0xA253000)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_UNMARKLATELATCHMATRIX_OFFSET UNITYSDK_OFFSET(0xA253050)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_IMPL_OFFSET UNITYSDK_OFFSET(0xA253090)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALBUFFERINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2530E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0xA253130)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0xA253170)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0xA2531B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0xA253230)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BEGINSAMPLE_CUSTOMSAMPLER_OFFSET UNITYSDK_OFFSET(0xA2531F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ENDSAMPLE_CUSTOMSAMPLER_OFFSET UNITYSDK_OFFSET(0xA253270)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCONSTANTBUFFERINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2532B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETINSTANCEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA253300)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA253340)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA253430)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA253530)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA253650)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA253790)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA253920)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA253A50)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA253C20)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA253D80)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETSINGLE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2533E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETCOLORDEPTH_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA253A00)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTISUBTARGET_OFFSET UNITYSDK_OFFSET(0xA253F80)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETBUFFERDATA_OFFSET UNITYSDK_OFFSET(0xA2540C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNALSETCOMPUTEBUFFERDATA_OFFSET UNITYSDK_OFFSET(0xA254240)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA254290)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA254420)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2543B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2544E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CREATEASYNCGRAPHICSFENCE_OFFSET UNITYSDK_OFFSET(0xA254520)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CREATEGRAPHICSFENCE_OFFSET UNITYSDK_OFFSET(0xA254590)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_WAITONASYNCGRAPHICSFENCE_OFFSET UNITYSDK_OFFSET(0xA254610)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_WAITONASYNCGRAPHICSFENCE_OFFSET UNITYSDK_OFFSET(0xA254640)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_WAITONASYNCGRAPHICSFENCE_OFFSET UNITYSDK_OFFSET(0xA254680)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTETEXTUREPARAM_OFFSET UNITYSDK_OFFSET(0xA2547B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTETEXTUREPARAM_OFFSET UNITYSDK_OFFSET(0xA254830)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTECONSTANTBUFFERPARAM_OFFSET UNITYSDK_OFFSET(0xA2548A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISPATCHCOMPUTE_OFFSET UNITYSDK_OFFSET(0xA2548F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_OFFSET UNITYSDK_OFFSET(0xA254940)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_OFFSET UNITYSDK_OFFSET(0xA254BE0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_OFFSET UNITYSDK_OFFSET(0xA254C50)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_OFFSET UNITYSDK_OFFSET(0xA254CB0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_OFFSET UNITYSDK_OFFSET(0xA254D10)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_OFFSET UNITYSDK_OFFSET(0xA254F20)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_OFFSET UNITYSDK_OFFSET(0xA254F40)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERERLIST_OFFSET UNITYSDK_OFFSET(0xA254F60)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURAL_OFFSET UNITYSDK_OFFSET(0xA254FB0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURAL_OFFSET UNITYSDK_OFFSET(0xA255130)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURAL_OFFSET UNITYSDK_OFFSET(0xA2551A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESHINSTANCED_OFFSET UNITYSDK_OFFSET(0xA255210)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWOCCLUSIONMESH_OFFSET UNITYSDK_OFFSET(0xA2555B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_OFFSET UNITYSDK_OFFSET(0xA255600)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_OFFSET UNITYSDK_OFFSET(0xA2556A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_OFFSET UNITYSDK_OFFSET(0xA255770)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_OFFSET UNITYSDK_OFFSET(0xA255840)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_OFFSET UNITYSDK_OFFSET(0xA255900)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_OFFSET UNITYSDK_OFFSET(0xA2559D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0xA255AA0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALINTEGER_OFFSET UNITYSDK_OFFSET(0xA255B00)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0xA255B50)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0xA255BB0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0xA255C70)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0xA255C20)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALBUFFER_OFFSET UNITYSDK_OFFSET(0xA255CC0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0xA255D10)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0xA255D60)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETSINGLEPASSSTEREO_OFFSET UNITYSDK_OFFSET(0xA255DC0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORPARAM_INJECTED_OFFSET UNITYSDK_OFFSET(0xA251DB0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESH_INJECTED_OFFSET UNITYSDK_OFFSET(0xA251FC0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWRENDERERLIST_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2520A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA252130)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWOCCLUSIONMESH_INJECTED_OFFSET UNITYSDK_OFFSET(0xA252210)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPORT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA252290)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ENABLESCISSORRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA252310)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_TEXTURE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA252480)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_IDENTIFIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA252570)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRTWITHDESCRIPTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA252610)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2527E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA252AB0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA252B50)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0xA252BF0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISABLEGLOBALKEYWORD_INJECTED_OFFSET UNITYSDK_OFFSET(0xA252D00)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPROJECTIONMATRICES_INJECTED_OFFSET UNITYSDK_OFFSET(0xA252DE0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETSINGLE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA253FD0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETCOLORDEPTH_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA254020)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTISUBTARGET_INJECTED_OFFSET UNITYSDK_OFFSET(0xA254070)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommandBuffer_TypeDefinitionIndex = 31529;

	class CommandBuffer : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10

		::System::Void Internal_SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::SinglePassStereoMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_SETSINGLEPASSSTEREO_OFFSET))(arg, nullptr);
		}

		::System::Int32 InitBuffer()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INITBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 CreateGPUFence_Internal(::UnityEngine::Rendering::GraphicsFenceType* arg, ::UnityEngine::Rendering::SynchronisationStageFlags* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::GraphicsFenceType*, ::UnityEngine::Rendering::SynchronisationStageFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CREATEGPUFENCE_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WaitOnGPUFence_Internal(::System::Int32 arg, ::UnityEngine::Rendering::SynchronisationStageFlags* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::SynchronisationStageFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_WAITONGPUFENCE_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReleaseBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASEBUFFER_OFFSET))(nullptr);
		}

		::System::Void SetComputeVectorParam(::UnityEngine::ComputeShader* arg, ::System::Int32 arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeShader*, ::System::Int32, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORPARAM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Internal_SetComputeTextureParam(::UnityEngine::ComputeShader* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::System::Int32 arg, ::UnityEngine::Rendering::RenderTextureSubElement* arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::System::Int32, ::UnityEngine::Rendering::RenderTextureSubElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_SETCOMPUTETEXTUREPARAM_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_SetComputeConstantComputeBufferParam(::UnityEngine::ComputeShader* arg, ::System::Int32 arg, ::UnityEngine::ComputeBuffer* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeShader*, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_SETCOMPUTECONSTANTCOMPUTEBUFFERPARAM_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_DispatchCompute(::UnityEngine::ComputeShader* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DISPATCHCOMPUTE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Internal_DrawMesh(::UnityEngine::Mesh* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::MaterialPropertyBlock* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESH_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_DrawRenderer(::UnityEngine::Renderer* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWRENDERER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_DrawRendererList(::UnityEngine::Rendering::RendererUtils::RendererList* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RendererUtils::RendererList*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWRENDERERLIST_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_DrawProcedural(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::UnityEngine::MeshTopology* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::MaterialPropertyBlock* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology*, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_DrawMeshInstanced(::UnityEngine::Mesh* arg, ::System::Int32 arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::UnityEngine::MaterialPropertyBlock* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESHINSTANCED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_DrawOcclusionMesh(::UnityEngine::RectInt* arg)
		{
			((::System::Void(*)(::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWOCCLUSIONMESH_OFFSET))(arg, nullptr);
		}

		::System::Void SetViewport(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPORT_OFFSET))(arg, nullptr);
		}

		::System::Void EnableScissorRect(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ENABLESCISSORRECT_OFFSET))(arg, nullptr);
		}

		::System::Void DisableScissorRect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISABLESCISSORRECT_OFFSET))(nullptr);
		}

		::System::Void CopyTexture_Internal(::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier&*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Blit_Texture(::UnityEngine::Texture* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_TEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Blit_Identifier(::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier&*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_IDENTIFIER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetTemporaryRTWithDescriptor(::System::Int32 arg, ::UnityEngine::RenderTextureDescriptor* arg, ::UnityEngine::FilterMode* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::RenderTextureDescriptor*, ::UnityEngine::FilterMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRTWITHDESCRIPTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetTemporaryRT(::System::Int32 arg, ::UnityEngine::RenderTextureDescriptor* arg, ::UnityEngine::FilterMode* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::RenderTextureDescriptor*, ::UnityEngine::FilterMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetTemporaryRT(::System::Int32 arg, ::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReleaseTemporaryRT(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASETEMPORARYRT_OFFSET))(arg, nullptr);
		}

		::System::Void ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags* arg, ::UnityEngine::Color* arg, ::System::Single arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RTClearFlags*, ::UnityEngine::Color*, ::System::Single, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ClearRenderTarget(::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalFloat(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalInt(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalInteger(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALINTEGER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalVector(::System::Int32 arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalColor(::System::Int32 arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalMatrix(::System::Int32 arg, ::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALMATRIX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EnableShaderKeyword(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ENABLESHADERKEYWORD_OFFSET))(str, nullptr);
		}

		::System::Void DisableShaderKeyword(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISABLESHADERKEYWORD_OFFSET))(str, nullptr);
		}

		::System::Void DisableGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GlobalKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISABLEGLOBALKEYWORD_OFFSET))(arg, nullptr);
		}

		::System::Void DisableKeyword(::UnityEngine::Rendering::GlobalKeyword&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GlobalKeyword&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISABLEKEYWORD_OFFSET))(arg, nullptr);
		}

		::System::Void SetViewProjectionMatrices(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPROJECTIONMATRICES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalDepthBias(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALDEPTHBIAS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetExecutionFlags(::UnityEngine::Rendering::CommandBufferExecutionFlags* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExecutionFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETEXECUTIONFLAGS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateAgainstExecutionFlags(::UnityEngine::Rendering::CommandBufferExecutionFlags* arg, ::UnityEngine::Rendering::CommandBufferExecutionFlags* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CommandBufferExecutionFlags*, ::UnityEngine::Rendering::CommandBufferExecutionFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_VALIDATEAGAINSTEXECUTIONFLAGS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalFloatArray(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALFLOATARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalVectorArray(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTORARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalMatrixArray(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALMATRIXARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLateLatchProjectionMatrices(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETLATELATCHPROJECTIONMATRICES_OFFSET))(arg, nullptr);
		}

		::System::Void MarkLateLatchMatrixShaderPropertyID(::UnityEngine::Rendering::CameraLateLatchMatrixType* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CameraLateLatchMatrixType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_MARKLATELATCHMATRIXSHADERPROPERTYID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UnmarkLateLatchMatrix(::UnityEngine::Rendering::CameraLateLatchMatrixType* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CameraLateLatchMatrixType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_UNMARKLATELATCHMATRIX_OFFSET))(arg, nullptr);
		}

		::System::Void SetGlobalTexture_Impl(::System::Int32 arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::UnityEngine::Rendering::RenderTextureSubElement* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::UnityEngine::Rendering::RenderTextureSubElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_IMPL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalBufferInternal(::System::Int32 arg, ::UnityEngine::ComputeBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALBUFFERINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BeginSample(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BEGINSAMPLE_OFFSET))(str, nullptr);
		}

		::System::Void EndSample(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ENDSAMPLE_OFFSET))(str, nullptr);
		}

		::System::Void BeginSample(::UnityEngine::Profiling::CustomSampler* arg)
		{
			((::System::Void(*)(::UnityEngine::Profiling::CustomSampler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BEGINSAMPLE_OFFSET))(arg, nullptr);
		}

		::System::Void EndSample(::UnityEngine::Profiling::CustomSampler* arg)
		{
			((::System::Void(*)(::UnityEngine::Profiling::CustomSampler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ENDSAMPLE_OFFSET))(arg, nullptr);
		}

		::System::Void BeginSample_CustomSampler(::UnityEngine::Profiling::CustomSampler* arg)
		{
			((::System::Void(*)(::UnityEngine::Profiling::CustomSampler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BEGINSAMPLE_CUSTOMSAMPLER_OFFSET))(arg, nullptr);
		}

		::System::Void EndSample_CustomSampler(::UnityEngine::Profiling::CustomSampler* arg)
		{
			((::System::Void(*)(::UnityEngine::Profiling::CustomSampler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ENDSAMPLE_CUSTOMSAMPLER_OFFSET))(arg, nullptr);
		}

		::System::Void SetGlobalConstantBufferInternal(::UnityEngine::ComputeBuffer* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCONSTANTBUFFERINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetInstanceMultiplier(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETINSTANCEMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTargetSingle_Internal(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETSINGLE_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTargetColorDepth_Internal(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::RenderTargetFlags* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::RenderTargetFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETCOLORDEPTH_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTargetMultiSubtarget(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTISUBTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetBufferData(::UnityEngine::ComputeBuffer* arg, ::System::Array* arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeBuffer*, ::System::Array*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETBUFFERDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalSetComputeBufferData(::UnityEngine::ComputeBuffer* arg, ::System::Array* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeBuffer*, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNALSETCOMPUTEBUFFERDATA_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::GraphicsFence* CreateAsyncGraphicsFence()
		{
			return (return (::UnityEngine::Rendering::GraphicsFence*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CREATEASYNCGRAPHICSFENCE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::GraphicsFence* CreateGraphicsFence(::UnityEngine::Rendering::GraphicsFenceType* arg, ::UnityEngine::Rendering::SynchronisationStageFlags* arg)
		{
			return (return (::UnityEngine::Rendering::GraphicsFence*(*)(::UnityEngine::Rendering::GraphicsFenceType*, ::UnityEngine::Rendering::SynchronisationStageFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CREATEGRAPHICSFENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WaitOnAsyncGraphicsFence(::UnityEngine::Rendering::GraphicsFence* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GraphicsFence*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_WAITONASYNCGRAPHICSFENCE_OFFSET))(arg, nullptr);
		}

		::System::Void WaitOnAsyncGraphicsFence(::UnityEngine::Rendering::GraphicsFence* arg, ::UnityEngine::Rendering::SynchronisationStage* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GraphicsFence*, ::UnityEngine::Rendering::SynchronisationStage*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_WAITONASYNCGRAPHICSFENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WaitOnAsyncGraphicsFence(::UnityEngine::Rendering::GraphicsFence* arg, ::UnityEngine::Rendering::SynchronisationStageFlags* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GraphicsFence*, ::UnityEngine::Rendering::SynchronisationStageFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_WAITONASYNCGRAPHICSFENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetComputeTextureParam(::UnityEngine::ComputeShader* arg, ::System::Int32 arg, ::System::String* str, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeShader*, ::System::Int32, ::System::String*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTETEXTUREPARAM_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void SetComputeTextureParam(::UnityEngine::ComputeShader* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTETEXTUREPARAM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* arg, ::System::Int32 arg, ::UnityEngine::ComputeBuffer* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeShader*, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTECONSTANTBUFFERPARAM_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DispatchCompute(::UnityEngine::ComputeShader* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISPATCHCOMPUTE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawMesh(::UnityEngine::Mesh* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::MaterialPropertyBlock* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawMesh(::UnityEngine::Mesh* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawMesh(::UnityEngine::Mesh* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawMesh(::UnityEngine::Mesh* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawRenderer(::UnityEngine::Renderer* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawRenderer(::UnityEngine::Renderer* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawRenderer(::UnityEngine::Renderer* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Renderer*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawRendererList(::UnityEngine::Rendering::RendererUtils::RendererList* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RendererUtils::RendererList*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERERLIST_OFFSET))(arg, nullptr);
		}

		::System::Void DrawProcedural(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::UnityEngine::MeshTopology* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::MaterialPropertyBlock* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology*, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawProcedural(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::UnityEngine::MeshTopology* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURAL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawProcedural(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::UnityEngine::MeshTopology* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawMeshInstanced(::UnityEngine::Mesh* arg, ::System::Int32 arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::UnityEngine::MaterialPropertyBlock* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESHINSTANCED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawOcclusionMesh(::UnityEngine::RectInt* arg)
		{
			((::System::Void(*)(::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWOCCLUSIONMESH_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Blit(::UnityEngine::Texture* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Blit(::UnityEngine::Texture* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Blit(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Blit(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Blit(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalFloat(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALFLOAT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalInteger(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALINTEGER_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalVector(::System::String* str, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalTexture(::System::String* str, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetGlobalTexture(::System::Int32 arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalTexture(::System::Int32 arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTextureSubElement* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTextureSubElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalBuffer(::System::Int32 arg, ::UnityEngine::ComputeBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCONSTANTBUFFER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeBuffer*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCONSTANTBUFFER_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::SinglePassStereoMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETSINGLEPASSSTEREO_OFFSET))(arg, nullptr);
		}

		::System::Void SetComputeVectorParam_Injected(::UnityEngine::ComputeShader* arg, ::System::Int32 arg, ::UnityEngine::Vector4&* arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeShader*, ::System::Int32, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORPARAM_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Internal_DrawMesh_Injected(::UnityEngine::Mesh* arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::MaterialPropertyBlock* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESH_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_DrawRendererList_Injected(::UnityEngine::Rendering::RendererUtils::RendererList&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RendererUtils::RendererList&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWRENDERERLIST_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_DrawProcedural_Injected(::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::UnityEngine::MeshTopology* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::MaterialPropertyBlock* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology*, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_DrawOcclusionMesh_Injected(::UnityEngine::RectInt&* arg)
		{
			((::System::Void(*)(::UnityEngine::RectInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWOCCLUSIONMESH_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetViewport_Injected(::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPORT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void EnableScissorRect_Injected(::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ENABLESCISSORRECT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Blit_Texture_Injected(::UnityEngine::Texture* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_TEXTURE_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Blit_Identifier_Injected(::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier&*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_IDENTIFIER_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetTemporaryRTWithDescriptor_Injected(::System::Int32 arg, ::UnityEngine::RenderTextureDescriptor&* arg, ::UnityEngine::FilterMode* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::RenderTextureDescriptor&*, ::UnityEngine::FilterMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRTWITHDESCRIPTOR_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ClearRenderTarget_Injected(::UnityEngine::Rendering::RTClearFlags* arg, ::UnityEngine::Color&* arg, ::System::Single arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RTClearFlags*, ::UnityEngine::Color&*, ::System::Single, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetGlobalVector_Injected(::System::Int32 arg, ::UnityEngine::Vector4&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTOR_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalColor_Injected(::System::Int32 arg, ::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCOLOR_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGlobalMatrix_Injected(::System::Int32 arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALMATRIX_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DisableGlobalKeyword_Injected(::UnityEngine::Rendering::GlobalKeyword&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::GlobalKeyword&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISABLEGLOBALKEYWORD_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetViewProjectionMatrices_Injected(::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPROJECTIONMATRICES_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetRenderTargetSingle_Internal_Injected(::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier&*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETSINGLE_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTargetColorDepth_Internal_Injected(::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::RenderTargetFlags* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier&*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::RenderTargetFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETCOLORDEPTH_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTargetMultiSubtarget_Injected(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTISUBTARGET_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

