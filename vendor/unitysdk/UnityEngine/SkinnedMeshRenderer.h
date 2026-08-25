#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class SkinQuality; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class GraphicsBuffer; }

#define UNITYENGINE_SKINNEDMESHRENDERER_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0xA206A80)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_QUALITY_OFFSET UNITYSDK_OFFSET(0xA206AC0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_UPDATEWHENOFFSCREEN_OFFSET UNITYSDK_OFFSET(0xA206B00)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_UPDATEWHENOFFSCREEN_OFFSET UNITYSDK_OFFSET(0xA206B40)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_FORCEMATRIXRECALCULATIONPERRENDER_OFFSET UNITYSDK_OFFSET(0xA206B80)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_FORCEMATRIXRECALCULATIONPERRENDER_OFFSET UNITYSDK_OFFSET(0xA206BC0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_ROOTBONE_OFFSET UNITYSDK_OFFSET(0xA206C00)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_ROOTBONE_OFFSET UNITYSDK_OFFSET(0xA206C40)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_BONES_OFFSET UNITYSDK_OFFSET(0xA206C80)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_BONES_OFFSET UNITYSDK_OFFSET(0xA206CC0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0xA206D00)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0xA206D40)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_SKINNEDMOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0xA206D80)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_SKINNEDMOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0xA206DC0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETBLENDSHAPEWEIGHT_OFFSET UNITYSDK_OFFSET(0xA206E00)
#define UNITYENGINE_SKINNEDMESHRENDERER_SETBLENDSHAPEWEIGHT_OFFSET UNITYSDK_OFFSET(0xA206E40)
#define UNITYENGINE_SKINNEDMESHRENDERER_BAKEMESH_OFFSET UNITYSDK_OFFSET(0xA206E90)
#define UNITYENGINE_SKINNEDMESHRENDERER_BAKEMESH_OFFSET UNITYSDK_OFFSET(0xA206ED0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETVERTEXBUFFER_OFFSET UNITYSDK_OFFSET(0xA206F20)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETPREVIOUSVERTEXBUFFER_OFFSET UNITYSDK_OFFSET(0xA207020)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETVERTEXBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0xA206FE0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETPREVIOUSVERTEXBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0xA2070E0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_VERTEXBUFFERTARGET_OFFSET UNITYSDK_OFFSET(0xA207120)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_VERTEXBUFFERTARGET_OFFSET UNITYSDK_OFFSET(0xA207160)
#define UNITYENGINE_SKINNEDMESHRENDERER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2071A0)

namespace UnityEngine
{
	inline static constexpr unsigned int SkinnedMeshRenderer_TypeDefinitionIndex = 31060;

	class SkinnedMeshRenderer : public Il2CppObject
	{
	public:
		::UnityEngine::SkinQuality* get_quality()
		{
			return (return (::UnityEngine::SkinQuality*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_QUALITY_OFFSET))(nullptr);
		}

		::System::Void set_quality(::UnityEngine::SkinQuality* arg)
		{
			((::System::Void(*)(::UnityEngine::SkinQuality*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_QUALITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_updateWhenOffscreen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_UPDATEWHENOFFSCREEN_OFFSET))(nullptr);
		}

		::System::Void set_updateWhenOffscreen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_UPDATEWHENOFFSCREEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_forceMatrixRecalculationPerRender()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_FORCEMATRIXRECALCULATIONPERRENDER_OFFSET))(nullptr);
		}

		::System::Void set_forceMatrixRecalculationPerRender(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_FORCEMATRIXRECALCULATIONPERRENDER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_rootBone()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_ROOTBONE_OFFSET))(nullptr);
		}

		::System::Void set_rootBone(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_ROOTBONE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_bones()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_BONES_OFFSET))(nullptr);
		}

		::System::Void set_bones(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_BONES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Mesh* get_sharedMesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_SHAREDMESH_OFFSET))(nullptr);
		}

		::System::Void set_sharedMesh(::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_SHAREDMESH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_skinnedMotionVectors()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_SKINNEDMOTIONVECTORS_OFFSET))(nullptr);
		}

		::System::Void set_skinnedMotionVectors(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_SKINNEDMOTIONVECTORS_OFFSET))(arg, nullptr);
		}

		::System::Single GetBlendShapeWeight(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETBLENDSHAPEWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void SetBlendShapeWeight(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SETBLENDSHAPEWEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BakeMesh(::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_BAKEMESH_OFFSET))(arg, nullptr);
		}

		::System::Void BakeMesh(::UnityEngine::Mesh* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_BAKEMESH_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::GraphicsBuffer* GetVertexBuffer()
		{
			return (return (::UnityEngine::GraphicsBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETVERTEXBUFFER_OFFSET))(nullptr);
		}

		::UnityEngine::GraphicsBuffer* GetPreviousVertexBuffer()
		{
			return (return (::UnityEngine::GraphicsBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETPREVIOUSVERTEXBUFFER_OFFSET))(nullptr);
		}

		::UnityEngine::GraphicsBuffer* GetVertexBufferImpl()
		{
			return (return (::UnityEngine::GraphicsBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETVERTEXBUFFERIMPL_OFFSET))(nullptr);
		}

		::UnityEngine::GraphicsBuffer* GetPreviousVertexBufferImpl()
		{
			return (return (::UnityEngine::GraphicsBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETPREVIOUSVERTEXBUFFERIMPL_OFFSET))(nullptr);
		}

		Target* get_vertexBufferTarget()
		{
			return (return (Target*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_VERTEXBUFFERTARGET_OFFSET))(nullptr);
		}

		::System::Void set_vertexBufferTarget(Target* arg)
		{
			((::System::Void(*)(Target*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_VERTEXBUFFERTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_.CTOR_OFFSET))(nullptr);
		}

	};
}

