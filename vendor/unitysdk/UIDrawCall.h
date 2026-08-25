#pragma once
#include "unitysdk.h"

class UIPanel;
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
class ShadowMode;
class OnRenderCallback;
class OnCreateDrawCall;
namespace UnityEngine { class ColorSpace; }
namespace Nordeus::DataStructures { class VaryingIntList; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Vector2; }
class UIDrawCall;
namespace UnityEngine::SceneManagement { class Scene; }

#define UIDRAWCALL_GET_LIST_OFFSET UNITYSDK_OFFSET(0x206B180)
#define UIDRAWCALL_GET_ACTIVELIST_OFFSET UNITYSDK_OFFSET(0x206B1D0)
#define UIDRAWCALL_GET_INACTIVELIST_OFFSET UNITYSDK_OFFSET(0x206B220)
#define UIDRAWCALL_GET_RENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x206B270)
#define UIDRAWCALL_SET_RENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x206B280)
#define UIDRAWCALL_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x206B310)
#define UIDRAWCALL_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x206B320)
#define UIDRAWCALL_GET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0x206B3B0)
#define UIDRAWCALL_SET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0x206B460)
#define UIDRAWCALL_GET_FINALRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x206B510)
#define UIDRAWCALL_GET_CACHEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x206B590)
#define UIDRAWCALL_GET_BASEMATERIAL_OFFSET UNITYSDK_OFFSET(0x206B620)
#define UIDRAWCALL_SET_BASEMATERIAL_OFFSET UNITYSDK_OFFSET(0x206B630)
#define UIDRAWCALL_GET_DYNAMICMATERIAL_OFFSET UNITYSDK_OFFSET(0x206B6B0)
#define UIDRAWCALL_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x206B6C0)
#define UIDRAWCALL_SET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x206B6D0)
#define UIDRAWCALL_GET_SHADER_OFFSET UNITYSDK_OFFSET(0x206B7B0)
#define UIDRAWCALL_SET_SHADER_OFFSET UNITYSDK_OFFSET(0x206B7C0)
#define UIDRAWCALL_GET_SHADOWMODE_OFFSET UNITYSDK_OFFSET(0x206B840)
#define UIDRAWCALL_SET_SHADOWMODE_OFFSET UNITYSDK_OFFSET(0x206B850)
#define UIDRAWCALL_GET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x206B930)
#define UIDRAWCALL_GET_ISCLIPPED_OFFSET UNITYSDK_OFFSET(0x206B9A0)
#define UIDRAWCALL_CREATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x206B9B0)
#define UIDRAWCALL_REBUILDMATERIAL_OFFSET UNITYSDK_OFFSET(0x206C280)
#define UIDRAWCALL_UPDATEMATERIALS_OFFSET UNITYSDK_OFFSET(0x206C410)
#define UIDRAWCALL_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x206C4F0)
#define UIDRAWCALL_GENERATECACHEDINDEXBUFFER_OFFSET UNITYSDK_OFFSET(0x206D3D0)
#define UIDRAWCALL_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x206D610)
#define UIDRAWCALL_SETCLIPPING_OFFSET UNITYSDK_OFFSET(0x206E240)
#define UIDRAWCALL_SETCLIPPING_OFFSET UNITYSDK_OFFSET(0x206DF80)
#define UIDRAWCALL_AWAKE_OFFSET UNITYSDK_OFFSET(0x206E460)
#define UIDRAWCALL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x206E930)
#define UIDRAWCALL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x206E940)
#define UIDRAWCALL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x206EAA0)
#define UIDRAWCALL_CREATE_OFFSET UNITYSDK_OFFSET(0x206EB10)
#define UIDRAWCALL_CREATE_OFFSET UNITYSDK_OFFSET(0x206EB80)
#define UIDRAWCALL_CREATE_OFFSET UNITYSDK_OFFSET(0x206EED0)
#define UIDRAWCALL_CLEARALL_OFFSET UNITYSDK_OFFSET(0x206F1A0)
#define UIDRAWCALL_RELEASEALL_OFFSET UNITYSDK_OFFSET(0x206F420)
#define UIDRAWCALL_RELEASEINACTIVE_OFFSET UNITYSDK_OFFSET(0x206F490)
#define UIDRAWCALL_COUNT_OFFSET UNITYSDK_OFFSET(0x206F670)
#define UIDRAWCALL_DESTROY_OFFSET UNITYSDK_OFFSET(0x206F780)
#define UIDRAWCALL_MOVETOSCENE_OFFSET UNITYSDK_OFFSET(0x206FB80)
#define UIDRAWCALL_.CTOR_OFFSET UNITYSDK_OFFSET(0x20701E0)
#define UIDRAWCALL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2070410)

	inline static constexpr unsigned int UIDrawCall_TypeDefinitionIndex = 133;

	class UIDrawCall : public Il2CppObject
	{
	public:
		Il2CppObject* mActiveList; // 0x0
		Il2CppObject* mInactiveList; // 0x8
		::System::Int32 widgetCount; // 0x18
		::System::Int32 depthStart; // 0x1C
		::System::Int32 depthEnd; // 0x20
		UIPanel* manager; // 0x28
		UIPanel* panel; // 0x30
		::UnityEngine::Texture2D* clipTexture; // 0x38
		::System::Boolean alwaysOnScreen; // 0x40
		Il2CppObject* verts; // 0x48
		Il2CppObject* norms; // 0x50
		Il2CppObject* tans; // 0x58
		Il2CppObject* uvs; // 0x60
		Il2CppObject* clipUVs; // 0x68
		Il2CppObject* uv2; // 0x70
		Il2CppObject* cols; // 0x78
		::UnityEngine::Material* mMaterial; // 0x80
		::UnityEngine::Texture* mTexture; // 0x88
		::UnityEngine::Shader* mShader; // 0x90
		::System::Int32 mClipCount; // 0x98
		::UnityEngine::Transform* mTrans; // 0xA0
		::UnityEngine::Mesh* mMesh; // 0xA8
		::UnityEngine::MeshFilter* mFilter; // 0xB0
		::UnityEngine::MeshRenderer* mRenderer; // 0xB8
		::UnityEngine::Material* mDynamicMat; // 0xC0
		::Il2CppArray<::System::Object*>* mIndices; // 0xC8
		ShadowMode* mShadowMode; // 0xD0
		::System::Boolean mRebuildMat; // 0xD4
		::System::Boolean mLegacyShader; // 0xD5
		::System::Int32 mRenderQueue; // 0xD8
		::System::Int32 mTriangles; // 0xDC
		::System::Boolean isDirty; // 0xE0
		::System::Boolean mTextureClip; // 0xE1
		::System::Boolean mIsNew; // 0xE2
		OnRenderCallback* onRender; // 0xE8
		OnCreateDrawCall* onCreateDrawCall; // 0xF0
		::System::String* mSortingLayerName; // 0xF8
		::System::Int32 mSortingOrder; // 0x100
		::UnityEngine::ColorSpace* mColorSpace; // 0x10
		::System::Int32 maxIndexBufferCache; // 0x0
		::Nordeus::DataStructures::VaryingIntList* mCache; // 0x18
		::UnityEngine::MaterialPropertyBlock* mBlock; // 0x108
		::Il2CppArray<::System::Object*>* ClipRange; // 0x20
		::Il2CppArray<::System::Object*>* ClipArgs; // 0x28
		::Il2CppArray<::System::Object*>* ClipParams; // 0x30
		::System::Int32 dx9BugWorkaround; // 0x38

		Il2CppObject* get_list()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_GET_LIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_activeList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_GET_ACTIVELIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_inactiveList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_GET_INACTIVELIST_OFFSET))(nullptr);
		}

		::System::Int32 get_renderQueue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_GET_RENDERQUEUE_OFFSET))(nullptr);
		}

		::System::Void set_renderQueue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_SET_RENDERQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_sortingOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void set_sortingOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::String* get_sortingLayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_GET_SORTINGLAYERNAME_OFFSET))(nullptr);
		}

		::System::Void set_sortingLayerName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_SET_SORTINGLAYERNAME_OFFSET))(str, nullptr);
		}

		::System::Int32 get_finalRenderQueue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_GET_FINALRENDERQUEUE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_cachedTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_GET_CACHEDTRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_baseMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_GET_BASEMATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_baseMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_SET_BASEMATERIAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* get_dynamicMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_GET_DYNAMICMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_GET_MAINTEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_mainTexture(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_SET_MAINTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Shader* get_shader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_GET_SHADER_OFFSET))(nullptr);
		}

		::System::Void set_shader(::UnityEngine::Shader* arg)
		{
			((::System::Void(*)(::UnityEngine::Shader*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_SET_SHADER_OFFSET))(arg, nullptr);
		}

		ShadowMode* get_shadowMode()
		{
			return ((ShadowMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_GET_SHADOWMODE_OFFSET))(nullptr);
		}

		::System::Void set_shadowMode(ShadowMode* arg)
		{
			((::System::Void(*)(ShadowMode*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_SET_SHADOWMODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_triangles()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_GET_TRIANGLES_OFFSET))(nullptr);
		}

		::System::Boolean get_isClipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_GET_ISCLIPPED_OFFSET))(nullptr);
		}

		::System::Void CreateMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_CREATEMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Material* RebuildMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_REBUILDMATERIAL_OFFSET))(nullptr);
		}

		::System::Void UpdateMaterials()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_UPDATEMATERIALS_OFFSET))(nullptr);
		}

		::System::Void UpdateGeometry(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_UPDATEGEOMETRY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void GenerateCachedIndexBuffer(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_GENERATECACHEDINDEXBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnWillRenderObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_ONWILLRENDEROBJECT_OFFSET))(nullptr);
		}

		::System::Void SetClipping(::System::Int32 arg, ::UnityEngine::Vector4* arg2, ::UnityEngine::Vector2* arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_SETCLIPPING_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetClipping(::System::Int32 arg, ::UnityEngine::Vector4* arg2, ::UnityEngine::Vector2* arg3, ::System::Single arg4, ::System::Single arg5)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_SETCLIPPING_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_ONDESTROY_OFFSET))(nullptr);
		}

		UIDrawCall* Create(UIPanel* arg, ::UnityEngine::Material* arg2, ::UnityEngine::Texture* arg3, ::UnityEngine::Shader* arg4)
		{
			return ((UIDrawCall*(*)(UIPanel*, ::UnityEngine::Material*, ::UnityEngine::Texture*, ::UnityEngine::Shader*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_CREATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		UIDrawCall* Create(::System::String* str, UIPanel* arg, ::UnityEngine::Material* arg2, ::UnityEngine::Texture* arg3, ::UnityEngine::Shader* arg4)
		{
			return ((UIDrawCall*(*)(::System::String*, UIPanel*, ::UnityEngine::Material*, ::UnityEngine::Texture*, ::UnityEngine::Shader*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_CREATE_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

		UIDrawCall* Create(::System::String* str)
		{
			return ((UIDrawCall*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_CREATE_OFFSET))(str, nullptr);
		}

		::System::Void ClearAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_CLEARALL_OFFSET))(nullptr);
		}

		::System::Void ReleaseAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_RELEASEALL_OFFSET))(nullptr);
		}

		::System::Void ReleaseInactive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_RELEASEINACTIVE_OFFSET))(nullptr);
		}

		::System::Int32 Count(UIPanel* arg)
		{
			return ((::System::Int32(*)(UIPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Void Destroy(UIDrawCall* arg)
		{
			((::System::Void(*)(UIDrawCall*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_DESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToScene(::UnityEngine::SceneManagement::Scene* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_MOVETOSCENE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDRAWCALL_.CCTOR_OFFSET))(nullptr);
		}

	};

