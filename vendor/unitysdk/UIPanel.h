#pragma once
#include "unitysdk.h"

class OnGeometryUpdated;
class ShadowMode;
class RenderQueue;
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Vector4; }
class OnClippingMoved;
class OnCreateMaterial;
class OnCreateDrawCall;
namespace UnityEngine { class Texture2D; }
class Clipping;
namespace UnityEngine { class Vector2; }
class UIPanel;
class OnRenderCallback;
class UIDrawCall;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Transform; }
class UIWidget;

#define UIPANEL_FILLDRAWCALLBUFFERS_OFFSET UNITYSDK_OFFSET(0x242E070)
#define UIPANEL_GET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0x242E570)
#define UIPANEL_SET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0x242E580)
#define UIPANEL_GET_NEXTUNUSEDDEPTH_OFFSET UNITYSDK_OFFSET(0x242F000)
#define UIPANEL_GET_CANBEANCHORED_OFFSET UNITYSDK_OFFSET(0x242F110)
#define UIPANEL_GET_ALPHA_OFFSET UNITYSDK_OFFSET(0x242F120)
#define UIPANEL_SET_ALPHA_OFFSET UNITYSDK_OFFSET(0x242F130)
#define UIPANEL_GET_INCLINEANGLE_OFFSET UNITYSDK_OFFSET(0x242F280)
#define UIPANEL_SET_INCLINEANGLE_OFFSET UNITYSDK_OFFSET(0x242F290)
#define UIPANEL_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x242F370)
#define UIPANEL_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0x242F380)
#define UIPANEL_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x242F460)
#define UIPANEL_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x242F470)
#define UIPANEL_COMPAREFUNC_OFFSET UNITYSDK_OFFSET(0x242F510)
#define UIPANEL_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x242F610)
#define UIPANEL_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x242F6E0)
#define UIPANEL_GET_HALFPIXELOFFSET_OFFSET UNITYSDK_OFFSET(0x242F740)
#define UIPANEL_GET_USEDFORUI_OFFSET UNITYSDK_OFFSET(0x242F750)
#define UIPANEL_GET_DRAWCALLOFFSET_OFFSET UNITYSDK_OFFSET(0x242F7D0)
#define UIPANEL_GET_CLIPPING_OFFSET UNITYSDK_OFFSET(0x242F820)
#define UIPANEL_SET_CLIPPING_OFFSET UNITYSDK_OFFSET(0x242F830)
#define UIPANEL_GET_PARENTPANEL_OFFSET UNITYSDK_OFFSET(0x242F850)
#define UIPANEL_GET_CLIPCOUNT_OFFSET UNITYSDK_OFFSET(0x242F860)
#define UIPANEL_GET_HASCLIPPING_OFFSET UNITYSDK_OFFSET(0x242F8F0)
#define UIPANEL_GET_HASCUMULATIVECLIPPING_OFFSET UNITYSDK_OFFSET(0x242F910)
#define UIPANEL_GET_CLIPSCHILDREN_OFFSET UNITYSDK_OFFSET(0x242F9A0)
#define UIPANEL_GET_CLIPOFFSET_OFFSET UNITYSDK_OFFSET(0x242FA30)
#define UIPANEL_SET_CLIPOFFSET_OFFSET UNITYSDK_OFFSET(0x242FA40)
#define UIPANEL_INVALIDATECLIPPING_OFFSET UNITYSDK_OFFSET(0x242FAD0)
#define UIPANEL_GET_CLIPTEXTURE_OFFSET UNITYSDK_OFFSET(0x242FC40)
#define UIPANEL_SET_CLIPTEXTURE_OFFSET UNITYSDK_OFFSET(0x242FC50)
#define UIPANEL_GET_CLIPRANGE_OFFSET UNITYSDK_OFFSET(0x242FCD0)
#define UIPANEL_SET_CLIPRANGE_OFFSET UNITYSDK_OFFSET(0x242FCE0)
#define UIPANEL_GET_BASECLIPREGION_OFFSET UNITYSDK_OFFSET(0x242FE40)
#define UIPANEL_SET_BASECLIPREGION_OFFSET UNITYSDK_OFFSET(0x242FD00)
#define UIPANEL_GET_FINALCLIPREGION_OFFSET UNITYSDK_OFFSET(0x242FE50)
#define UIPANEL_GET_CLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0x242FF90)
#define UIPANEL_SET_CLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0x242FFA0)
#define UIPANEL_GET_LOCALCORNERS_OFFSET UNITYSDK_OFFSET(0x242FFE0)
#define UIPANEL_GET_WORLDCORNERS_OFFSET UNITYSDK_OFFSET(0x2430320)
#define UIPANEL_GETSIDES_OFFSET UNITYSDK_OFFSET(0x24309E0)
#define UIPANEL_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x24312E0)
#define UIPANEL_CALCULATEFINALALPHA_OFFSET UNITYSDK_OFFSET(0x2431300)
#define UIPANEL_SETRECT_OFFSET UNITYSDK_OFFSET(0x24313E0)
#define UIPANEL_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x2431780)
#define UIPANEL_DELTATOSCROLL_OFFSET UNITYSDK_OFFSET(0x2431ED0)
#define UIPANEL_DELTATOTARGET_OFFSET UNITYSDK_OFFSET(0x2432610)
#define UIPANEL_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x24326C0)
#define UIPANEL_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x24327C0)
#define UIPANEL_AFFECTS_OFFSET UNITYSDK_OFFSET(0x2432A40)
#define UIPANEL_REBUILDALLDRAWCALLS_OFFSET UNITYSDK_OFFSET(0x2432C10)
#define UIPANEL_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x2432C20)
#define UIPANEL_AWAKE_OFFSET UNITYSDK_OFFSET(0x2432CD0)
#define UIPANEL_FINDPARENT_OFFSET UNITYSDK_OFFSET(0x2432CE0)
#define UIPANEL_PARENTHASCHANGED_OFFSET UNITYSDK_OFFSET(0x2432DE0)
#define UIPANEL_ONSTART_OFFSET UNITYSDK_OFFSET(0x2432E00)
#define UIPANEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2432E30)
#define UIPANEL_ONINIT_OFFSET UNITYSDK_OFFSET(0x2432E80)
#define UIPANEL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24331F0)
#define UIPANEL_UPDATETRANSFORMMATRIX_OFFSET UNITYSDK_OFFSET(0x2431D80)
#define UIPANEL_ONANCHOR_OFFSET UNITYSDK_OFFSET(0x2433420)
#define UIPANEL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x2433D30)
#define UIPANEL_UPDATESELF_OFFSET UNITYSDK_OFFSET(0x2433FB0)
#define UIPANEL_SORTWIDGETS_OFFSET UNITYSDK_OFFSET(0x2435A40)
#define UIPANEL_ISDRAWCALLVALID_OFFSET UNITYSDK_OFFSET(0x2435AE0)
#define UIPANEL_FILLALLDRAWCALLS_OFFSET UNITYSDK_OFFSET(0x24348E0)
#define UIPANEL_FILLDRAWCALL_OFFSET UNITYSDK_OFFSET(0x2435B90)
#define UIPANEL_FILLDRAWCALL_OFFSET UNITYSDK_OFFSET(0x2435530)
#define UIPANEL_UPDATEDRAWCALLS_OFFSET UNITYSDK_OFFSET(0x242E640)
#define UIPANEL_UPDATELAYERS_OFFSET UNITYSDK_OFFSET(0x2434210)
#define UIPANEL_UPDATEWIDGETS_OFFSET UNITYSDK_OFFSET(0x2434400)
#define UIPANEL_FINDDRAWCALL_OFFSET UNITYSDK_OFFSET(0x2435C20)
#define UIPANEL_ADDWIDGET_OFFSET UNITYSDK_OFFSET(0x2435F20)
#define UIPANEL_REMOVEWIDGET_OFFSET UNITYSDK_OFFSET(0x2436130)
#define UIPANEL_REFRESH_OFFSET UNITYSDK_OFFSET(0x2436230)
#define UIPANEL_CALCULATECONSTRAINOFFSET_OFFSET UNITYSDK_OFFSET(0x2436310)
#define UIPANEL_CONSTRAINTARGETTOBOUNDS_OFFSET UNITYSDK_OFFSET(0x2436400)
#define UIPANEL_CONSTRAINTARGETTOBOUNDS_OFFSET UNITYSDK_OFFSET(0x24368E0)
#define UIPANEL_FIND_OFFSET UNITYSDK_OFFSET(0x2436940)
#define UIPANEL_FIND_OFFSET UNITYSDK_OFFSET(0x2436AD0)
#define UIPANEL_FIND_OFFSET UNITYSDK_OFFSET(0x2436990)
#define UIPANEL_GETWINDOWSIZE_OFFSET UNITYSDK_OFFSET(0x2436B30)
#define UIPANEL_GETVIEWSIZE_OFFSET UNITYSDK_OFFSET(0x242F670)
#define UIPANEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2436DC0)
#define UIPANEL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2437050)

	inline static constexpr unsigned int UIPanel_TypeDefinitionIndex = 248;

	class UIPanel : public Il2CppObject
	{
	public:
		Il2CppObject* widgetsInDrawCall; // 0x0
		Il2CppObject* list; // 0x8
		OnGeometryUpdated* onGeometryUpdated; // 0x90
		::System::Boolean showInPanelTool; // 0x98
		::System::Boolean generateNormals; // 0x99
		::System::Boolean generateUV2; // 0x9A
		ShadowMode* shadowMode; // 0x9C
		::System::Boolean widgetsAreStatic; // 0xA0
		::System::Boolean cullWhileDragging; // 0xA1
		::System::Boolean alwaysOnScreen; // 0xA2
		::System::Boolean anchorOffset; // 0xA3
		::System::Boolean softBorderPadding; // 0xA4
		RenderQueue* renderQueue; // 0xA8
		::System::Int32 startingRenderQueue; // 0xAC
		Il2CppObject* widgets; // 0xB0
		Il2CppObject* drawCalls; // 0xB8
		::UnityEngine::Matrix4x4* worldToLocal; // 0xC0
		::UnityEngine::Vector4* drawCallClipRange; // 0x100
		OnClippingMoved* onClipMove; // 0x110
		OnCreateMaterial* onCreateMaterial; // 0x118
		OnCreateDrawCall* onCreateDrawCall; // 0x120
		::UnityEngine::Texture2D* mClipTexture; // 0x128
		::System::Single mAlpha; // 0x130
		Clipping* mClipping; // 0x134
		::UnityEngine::Vector4* mClipRange; // 0x138
		::UnityEngine::Vector2* mClipSoftness; // 0x148
		::System::Int32 mDepth; // 0x150
		::System::Int32 mSortingOrder; // 0x154
		::System::String* mSortingLayerName; // 0x158
		::System::Boolean mRebuild; // 0x160
		::System::Boolean mResized; // 0x161
		::UnityEngine::Vector2* mClipOffset; // 0x164
		::System::Int32 mMatrixFrame; // 0x16C
		::System::Int32 mAlphaFrameID; // 0x170
		::System::Int32 mLayer; // 0x174
		::Il2CppArray<::System::Object*>* mTemp; // 0x10
		::UnityEngine::Vector2* mMin; // 0x178
		::UnityEngine::Vector2* mMax; // 0x180
		::System::Boolean mSortWidgets; // 0x188
		::System::Boolean mUpdateScroll; // 0x189
		::System::Single inclineAngle; // 0x18C
		::System::Boolean useSortingOrder; // 0x190
		UIPanel* mParentPanel; // 0x198
		::Il2CppArray<::System::Object*>* mCorners; // 0x18
		::System::Int32 mUpdateFrame; // 0x20
		::System::Boolean mHasMoved; // 0x1A0
		OnRenderCallback* mOnRender; // 0x1A8
		::System::Boolean mForced; // 0x1B0

		::System::Void FillDrawCallBuffers(UIDrawCall* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UIDrawCall*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_FILLDRAWCALLBUFFERS_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_sortingLayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_SORTINGLAYERNAME_OFFSET))(nullptr);
		}

		::System::Void set_sortingLayerName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_SET_SORTINGLAYERNAME_OFFSET))(str, nullptr);
		}

		::System::Int32 get_nextUnusedDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_NEXTUNUSEDDEPTH_OFFSET))(nullptr);
		}

		::System::Boolean get_canBeAnchored()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_CANBEANCHORED_OFFSET))(nullptr);
		}

		::System::Single get_alpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_ALPHA_OFFSET))(nullptr);
		}

		::System::Void set_alpha(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_SET_ALPHA_OFFSET))(arg, nullptr);
		}

		::System::Single get_InclineAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_INCLINEANGLE_OFFSET))(nullptr);
		}

		::System::Void set_InclineAngle(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_SET_INCLINEANGLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_DEPTH_OFFSET))(nullptr);
		}

		::System::Void set_depth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_SET_DEPTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_sortingOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void set_sortingOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareFunc(UIPanel* arg, UIPanel* arg2)
		{
			return ((::System::Int32(*)(UIPanel*, UIPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_COMPAREFUNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean get_halfPixelOffset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_HALFPIXELOFFSET_OFFSET))(nullptr);
		}

		::System::Boolean get_usedForUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_USEDFORUI_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_drawCallOffset()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_DRAWCALLOFFSET_OFFSET))(nullptr);
		}

		Clipping* get_clipping()
		{
			return ((Clipping*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_CLIPPING_OFFSET))(nullptr);
		}

		::System::Void set_clipping(Clipping* arg)
		{
			((::System::Void(*)(Clipping*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_SET_CLIPPING_OFFSET))(arg, nullptr);
		}

		UIPanel* get_parentPanel()
		{
			return ((UIPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_PARENTPANEL_OFFSET))(nullptr);
		}

		::System::Int32 get_clipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_CLIPCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_hasClipping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_HASCLIPPING_OFFSET))(nullptr);
		}

		::System::Boolean get_hasCumulativeClipping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_HASCUMULATIVECLIPPING_OFFSET))(nullptr);
		}

		::System::Boolean get_clipsChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_CLIPSCHILDREN_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_clipOffset()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_CLIPOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_clipOffset(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_SET_CLIPOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void InvalidateClipping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_INVALIDATECLIPPING_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_clipTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_CLIPTEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_clipTexture(::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_SET_CLIPTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* get_clipRange()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_CLIPRANGE_OFFSET))(nullptr);
		}

		::System::Void set_clipRange(::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_SET_CLIPRANGE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* get_baseClipRegion()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_BASECLIPREGION_OFFSET))(nullptr);
		}

		::System::Void set_baseClipRegion(::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_SET_BASECLIPREGION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* get_finalClipRegion()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_FINALCLIPREGION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_clipSoftness()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_CLIPSOFTNESS_OFFSET))(nullptr);
		}

		::System::Void set_clipSoftness(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_SET_CLIPSOFTNESS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_localCorners()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_LOCALCORNERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_worldCorners()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GET_WORLDCORNERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSides(::UnityEngine::Transform* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GETSIDES_OFFSET))(arg, nullptr);
		}

		::System::Void Invalidate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_INVALIDATE_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateFinalAlpha(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_CALCULATEFINALALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void SetRect(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_SETRECT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsVisible(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_ISVISIBLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::Vector2* DeltaToScroll(UIWidget* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			return ((::UnityEngine::Vector2*(*)(UIWidget*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_DELTATOSCROLL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector3* DeltaToTarget(UIWidget* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((::UnityEngine::Vector3*(*)(UIWidget*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_DELTATOTARGET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsVisible(::UnityEngine::Vector3* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_ISVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsVisible(UIWidget* arg)
		{
			return ((::System::Boolean(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_ISVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Affects(UIWidget* arg)
		{
			return ((::System::Boolean(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_AFFECTS_OFFSET))(arg, nullptr);
		}

		::System::Void RebuildAllDrawCalls()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_REBUILDALLDRAWCALLS_OFFSET))(nullptr);
		}

		::System::Void SetDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_SETDIRTY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void FindParent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_FINDPARENT_OFFSET))(nullptr);
		}

		::System::Void ParentHasChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_PARENTHASCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_ONSTART_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_ONINIT_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void UpdateTransformMatrix()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_UPDATETRANSFORMMATRIX_OFFSET))(nullptr);
		}

		::System::Void OnAnchor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_ONANCHOR_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateSelf()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_UPDATESELF_OFFSET))(nullptr);
		}

		::System::Void SortWidgets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_SORTWIDGETS_OFFSET))(nullptr);
		}

		::System::Boolean IsDrawCallValid(UIDrawCall* arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(UIDrawCall*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_ISDRAWCALLVALID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FillAllDrawCalls()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_FILLALLDRAWCALLS_OFFSET))(nullptr);
		}

		::System::Boolean FillDrawCall(UIDrawCall* arg)
		{
			return ((::System::Boolean(*)(UIDrawCall*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_FILLDRAWCALL_OFFSET))(arg, nullptr);
		}

		::System::Boolean FillDrawCall(UIDrawCall* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(UIDrawCall*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_FILLDRAWCALL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateDrawCalls(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_UPDATEDRAWCALLS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateLayers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_UPDATELAYERS_OFFSET))(nullptr);
		}

		::System::Void UpdateWidgets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_UPDATEWIDGETS_OFFSET))(nullptr);
		}

		UIDrawCall* FindDrawCall(UIWidget* arg)
		{
			return ((UIDrawCall*(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_FINDDRAWCALL_OFFSET))(arg, nullptr);
		}

		::System::Void AddWidget(UIWidget* arg)
		{
			((::System::Void(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_ADDWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveWidget(UIWidget* arg)
		{
			((::System::Void(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_REMOVEWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_REFRESH_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* CalculateConstrainOffset(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_CALCULATECONSTRAINOFFSET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ConstrainTargetToBounds(::UnityEngine::Transform* arg, ::UnityEngine::Bounds&* arg2, ::System::Boolean arg3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Bounds&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_CONSTRAINTARGETTOBOUNDS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ConstrainTargetToBounds(::UnityEngine::Transform* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_CONSTRAINTARGETTOBOUNDS_OFFSET))(arg, arg2, nullptr);
		}

		UIPanel* Find(::UnityEngine::Transform* arg)
		{
			return ((UIPanel*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_FIND_OFFSET))(arg, nullptr);
		}

		UIPanel* Find(::UnityEngine::Transform* arg, ::System::Boolean arg2)
		{
			return ((UIPanel*(*)(::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_FIND_OFFSET))(arg, arg2, nullptr);
		}

		UIPanel* Find(::UnityEngine::Transform* arg, ::System::Boolean arg2, ::System::Int32 arg3)
		{
			return ((UIPanel*(*)(::UnityEngine::Transform*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_FIND_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* GetWindowSize()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GETWINDOWSIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetViewSize()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_GETVIEWSIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPANEL_.CCTOR_OFFSET))(nullptr);
		}

	};

