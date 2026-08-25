#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }
class Pivot;
namespace UnityEngine { class Material; }
class OnDimensionsChanged;
class OnPostFillCallback;
class OnRenderCallback;
class AspectRatioSource;
class HitCheck;
class UIPanel;
class UIGeometry;
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Matrix4x4; }
class UIDrawCall;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Transform; }
class UIWidget;
namespace UnityEngine { class Bounds; }

#define UIWIDGET_GET_ONRENDER_OFFSET UNITYSDK_OFFSET(0x2076270)
#define UIWIDGET_SET_ONRENDER_OFFSET UNITYSDK_OFFSET(0x2076280)
#define UIWIDGET_GET_DRAWREGION_OFFSET UNITYSDK_OFFSET(0x2076440)
#define UIWIDGET_SET_DRAWREGION_OFFSET UNITYSDK_OFFSET(0x2076450)
#define UIWIDGET_GET_PIVOTOFFSET_OFFSET UNITYSDK_OFFSET(0x20765D0)
#define UIWIDGET_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x20765E0)
#define UIWIDGET_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x20765F0)
#define UIWIDGET_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x2076B00)
#define UIWIDGET_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x2076B10)
#define UIWIDGET_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x2076D20)
#define UIWIDGET_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x2076D30)
#define UIWIDGET_SETCOLORNOALPHA_OFFSET UNITYSDK_OFFSET(0x2076DB0)
#define UIWIDGET_GET_ALPHA_OFFSET UNITYSDK_OFFSET(0x2076E20)
#define UIWIDGET_SET_ALPHA_OFFSET UNITYSDK_OFFSET(0x2076E30)
#define UIWIDGET_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x2076E60)
#define UIWIDGET_GET_HASVERTICES_OFFSET UNITYSDK_OFFSET(0x2076EE0)
#define UIWIDGET_GET_RAWPIVOT_OFFSET UNITYSDK_OFFSET(0x2076F40)
#define UIWIDGET_SET_RAWPIVOT_OFFSET UNITYSDK_OFFSET(0x2076F50)
#define UIWIDGET_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x2076FA0)
#define UIWIDGET_SET_PIVOT_OFFSET UNITYSDK_OFFSET(0x2076FB0)
#define UIWIDGET_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x2077440)
#define UIWIDGET_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0x2077450)
#define UIWIDGET_GET_RAYCASTDEPTH_OFFSET UNITYSDK_OFFSET(0x2077560)
#define UIWIDGET_GET_LOCALCORNERS_OFFSET UNITYSDK_OFFSET(0x20778C0)
#define UIWIDGET_GET_LOCALSIZE_OFFSET UNITYSDK_OFFSET(0x20779B0)
#define UIWIDGET_GET_LOCALCENTER_OFFSET UNITYSDK_OFFSET(0x2077A10)
#define UIWIDGET_GET_WORLDCORNERS_OFFSET UNITYSDK_OFFSET(0x2077A90)
#define UIWIDGET_GET_WORLDCENTER_OFFSET UNITYSDK_OFFSET(0x2077CF0)
#define UIWIDGET_GET_DRAWINGDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x2077E00)
#define UIWIDGET_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x2078020)
#define UIWIDGET_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x2078030)
#define UIWIDGET_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x2078180)
#define UIWIDGET_SET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x2078210)
#define UIWIDGET_GET_SHADER_OFFSET UNITYSDK_OFFSET(0x20782A0)
#define UIWIDGET_SET_SHADER_OFFSET UNITYSDK_OFFSET(0x2078330)
#define UIWIDGET_GET_RELATIVESIZE_OFFSET UNITYSDK_OFFSET(0x20783C0)
#define UIWIDGET_GET_HASBOXCOLLIDER_OFFSET UNITYSDK_OFFSET(0x2078400)
#define UIWIDGET_GET_HASINCLINEDCOLLIDER_OFFSET UNITYSDK_OFFSET(0x2078510)
#define UIWIDGET_SETDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x2076810)
#define UIWIDGET_GETSIDES_OFFSET UNITYSDK_OFFSET(0x2078580)
#define UIWIDGET_CALCULATEFINALALPHA_OFFSET UNITYSDK_OFFSET(0x2078A50)
#define UIWIDGET_UPDATEFINALALPHA_OFFSET UNITYSDK_OFFSET(0x2078A80)
#define UIWIDGET_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x2078B50)
#define UIWIDGET_CALCULATECUMULATIVEALPHA_OFFSET UNITYSDK_OFFSET(0x2078D40)
#define UIWIDGET_SETRECT_OFFSET UNITYSDK_OFFSET(0x2078E20)
#define UIWIDGET_RESIZECOLLIDER_OFFSET UNITYSDK_OFFSET(0x20764E0)
#define UIWIDGET_FULLCOMPAREFUNC_OFFSET UNITYSDK_OFFSET(0x2079350)
#define UIWIDGET_PANELCOMPAREFUNC_OFFSET UNITYSDK_OFFSET(0x20793F0)
#define UIWIDGET_CALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x2079560)
#define UIWIDGET_CALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x2079580)
#define UIWIDGET_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x20799E0)
#define UIWIDGET_REMOVEFROMPANEL_OFFSET UNITYSDK_OFFSET(0x20780D0)
#define UIWIDGET_MARKASCHANGED_OFFSET UNITYSDK_OFFSET(0x2079B20)
#define UIWIDGET_CREATEPANEL_OFFSET UNITYSDK_OFFSET(0x2077620)
#define UIWIDGET_CHECKLAYER_OFFSET UNITYSDK_OFFSET(0x2079C10)
#define UIWIDGET_PARENTHASCHANGED_OFFSET UNITYSDK_OFFSET(0x2079D00)
#define UIWIDGET_AWAKE_OFFSET UNITYSDK_OFFSET(0x2079F10)
#define UIWIDGET_ONINIT_OFFSET UNITYSDK_OFFSET(0x2079F30)
#define UIWIDGET_UPGRADEFROM265_OFFSET UNITYSDK_OFFSET(0x2079F60)
#define UIWIDGET_ONSTART_OFFSET UNITYSDK_OFFSET(0x207A2F0)
#define UIWIDGET_ONANCHOR_OFFSET UNITYSDK_OFFSET(0x207A300)
#define UIWIDGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x207B300)
#define UIWIDGET_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x207B370)
#define UIWIDGET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x207B390)
#define UIWIDGET_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x207B3B0)
#define UIWIDGET_UPDATEVISIBILITY_OFFSET UNITYSDK_OFFSET(0x2078DE0)
#define UIWIDGET_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x207B4A0)
#define UIWIDGET_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x207B950)
#define UIWIDGET_WRITETOBUFFERS_OFFSET UNITYSDK_OFFSET(0x207C010)
#define UIWIDGET_MAKEPIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x207C070)
#define UIWIDGET_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x207C510)
#define UIWIDGET_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x207C520)
#define UIWIDGET_GET_BORDER_OFFSET UNITYSDK_OFFSET(0x207C530)
#define UIWIDGET_SET_BORDER_OFFSET UNITYSDK_OFFSET(0x207C580)
#define UIWIDGET_ONFILL_OFFSET UNITYSDK_OFFSET(0x207C590)
#define UIWIDGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x207C5A0)

	inline static constexpr unsigned int UIWidget_TypeDefinitionIndex = 152;

	class UIWidget : public Il2CppObject
	{
	public:
		::UnityEngine::Color* mColor; // 0x90
		Pivot* mPivot; // 0xA0
		::System::Int32 mWidth; // 0xA4
		::System::Int32 mHeight; // 0xA8
		::System::Int32 mDepth; // 0xAC
		::System::Boolean mMasked; // 0xB0
		::UnityEngine::Material* mMat; // 0xB8
		OnDimensionsChanged* onChange; // 0xC0
		OnPostFillCallback* onPostFill; // 0xC8
		OnRenderCallback* mOnRender; // 0xD0
		::System::Boolean autoResizeBoxCollider; // 0xD8
		::System::Boolean hideIfOffScreen; // 0xD9
		AspectRatioSource* keepAspectRatio; // 0xDC
		::System::Single aspectRatio; // 0xE0
		HitCheck* hitCheck; // 0xE8
		UIPanel* panel; // 0xF0
		UIGeometry* geometry; // 0xF8
		::System::Boolean fillGeometry; // 0x100
		::System::Boolean mPlayMode; // 0x101
		::UnityEngine::Vector4* mDrawRegion; // 0x104
		::UnityEngine::Matrix4x4* mLocalToPanel; // 0x114
		::System::Boolean mIsVisibleByAlpha; // 0x154
		::System::Boolean mIsVisibleByPanel; // 0x155
		::System::Boolean mIsInFront; // 0x156
		::System::Single mLastAlpha; // 0x158
		::System::Boolean mMoved; // 0x15C
		UIDrawCall* drawCall; // 0x160
		::Il2CppArray<::System::Object*>* mCorners; // 0x168
		::System::Int32 mAlphaFrameID; // 0x170
		::System::Int32 mMatrixFrame; // 0x174
		::UnityEngine::Vector3* mOldV0; // 0x178
		::UnityEngine::Vector3* mOldV1; // 0x184

		OnRenderCallback* get_onRender()
		{
			return ((OnRenderCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_ONRENDER_OFFSET))(nullptr);
		}

		::System::Void set_onRender(OnRenderCallback* arg)
		{
			((::System::Void(*)(OnRenderCallback*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_SET_ONRENDER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* get_drawRegion()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_DRAWREGION_OFFSET))(nullptr);
		}

		::System::Void set_drawRegion(::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_SET_DRAWREGION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_pivotOffset()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_PIVOTOFFSET_OFFSET))(nullptr);
		}

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Void set_width(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_SET_WIDTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_height(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_SET_HEIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_color()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_COLOR_OFFSET))(nullptr);
		}

		::System::Void set_color(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_SET_COLOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetColorNoAlpha(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_SETCOLORNOALPHA_OFFSET))(arg, nullptr);
		}

		::System::Single get_alpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_ALPHA_OFFSET))(nullptr);
		}

		::System::Void set_alpha(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_SET_ALPHA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_ISVISIBLE_OFFSET))(nullptr);
		}

		::System::Boolean get_hasVertices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_HASVERTICES_OFFSET))(nullptr);
		}

		Pivot* get_rawPivot()
		{
			return ((Pivot*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_RAWPIVOT_OFFSET))(nullptr);
		}

		::System::Void set_rawPivot(Pivot* arg)
		{
			((::System::Void(*)(Pivot*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_SET_RAWPIVOT_OFFSET))(arg, nullptr);
		}

		Pivot* get_pivot()
		{
			return ((Pivot*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_PIVOT_OFFSET))(nullptr);
		}

		::System::Void set_pivot(Pivot* arg)
		{
			((::System::Void(*)(Pivot*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_SET_PIVOT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_DEPTH_OFFSET))(nullptr);
		}

		::System::Void set_depth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_SET_DEPTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_raycastDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_RAYCASTDEPTH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_localCorners()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_LOCALCORNERS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_localSize()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_LOCALSIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_localCenter()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_LOCALCENTER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_worldCorners()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_WORLDCORNERS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_worldCenter()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_WORLDCENTER_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_drawingDimensions()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_DRAWINGDIMENSIONS_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_MATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_material(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_SET_MATERIAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_MAINTEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_mainTexture(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_SET_MAINTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Shader* get_shader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_SHADER_OFFSET))(nullptr);
		}

		::System::Void set_shader(::UnityEngine::Shader* arg)
		{
			((::System::Void(*)(::UnityEngine::Shader*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_SET_SHADER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_relativeSize()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_RELATIVESIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_hasBoxCollider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_HASBOXCOLLIDER_OFFSET))(nullptr);
		}

		::System::Boolean get_hasInclinedCollider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_HASINCLINEDCOLLIDER_OFFSET))(nullptr);
		}

		::System::Void SetDimensions(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_SETDIMENSIONS_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSides(::UnityEngine::Transform* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GETSIDES_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateFinalAlpha(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_CALCULATEFINALALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateFinalAlpha(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_UPDATEFINALALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void Invalidate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_INVALIDATE_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateCumulativeAlpha(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_CALCULATECUMULATIVEALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void SetRect(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_SETRECT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ResizeCollider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_RESIZECOLLIDER_OFFSET))(nullptr);
		}

		::System::Int32 FullCompareFunc(UIWidget* arg, UIWidget* arg2)
		{
			return ((::System::Int32(*)(UIWidget*, UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_FULLCOMPAREFUNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 PanelCompareFunc(UIWidget* arg, UIWidget* arg2)
		{
			return ((::System::Int32(*)(UIWidget*, UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_PANELCOMPAREFUNC_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Bounds* CalculateBounds()
		{
			return ((::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_CALCULATEBOUNDS_OFFSET))(nullptr);
		}

		::UnityEngine::Bounds* CalculateBounds(::UnityEngine::Transform* arg)
		{
			return ((::UnityEngine::Bounds*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_CALCULATEBOUNDS_OFFSET))(arg, nullptr);
		}

		::System::Void SetDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_SETDIRTY_OFFSET))(nullptr);
		}

		::System::Void RemoveFromPanel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_REMOVEFROMPANEL_OFFSET))(nullptr);
		}

		::System::Void MarkAsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_MARKASCHANGED_OFFSET))(nullptr);
		}

		UIPanel* CreatePanel()
		{
			return ((UIPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_CREATEPANEL_OFFSET))(nullptr);
		}

		::System::Void CheckLayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_CHECKLAYER_OFFSET))(nullptr);
		}

		::System::Void ParentHasChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_PARENTHASCHANGED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_ONINIT_OFFSET))(nullptr);
		}

		::System::Void UpgradeFrom265()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_UPGRADEFROM265_OFFSET))(nullptr);
		}

		::System::Void OnStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_ONSTART_OFFSET))(nullptr);
		}

		::System::Void OnAnchor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_ONANCHOR_OFFSET))(nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnApplicationPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_ONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean UpdateVisibility(::System::Boolean arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_UPDATEVISIBILITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean UpdateTransform(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_UPDATETRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Boolean UpdateGeometry(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_UPDATEGEOMETRY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteToBuffers(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, Il2CppObject* arg7)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_WRITETOBUFFERS_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void MakePixelPerfect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_MAKEPIXELPERFECT_OFFSET))(nullptr);
		}

		::System::Int32 get_minWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_MINWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_minHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_MINHEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_border()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_GET_BORDER_OFFSET))(nullptr);
		}

		::System::Void set_border(::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_SET_BORDER_OFFSET))(arg, nullptr);
		}

		::System::Void OnFill(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_ONFILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGET_.CTOR_OFFSET))(nullptr);
		}

	};

