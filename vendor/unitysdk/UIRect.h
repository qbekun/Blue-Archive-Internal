#pragma once
#include "unitysdk.h"

class AnchorPoint;
class AnchorUpdate;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
class UIRoot;
class UIRect;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector3; }

#define UIRECT_GET_CACHEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x206F120)
#define UIRECT_GET_CACHEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x206DF00)
#define UIRECT_GET_ANCHORCAMERA_OFFSET UNITYSDK_OFFSET(0x2072AA0)
#define UIRECT_GET_ISFULLYANCHORED_OFFSET UNITYSDK_OFFSET(0x2072E50)
#define UIRECT_GET_ISANCHOREDHORIZONTALLY_OFFSET UNITYSDK_OFFSET(0x2072F70)
#define UIRECT_GET_ISANCHOREDVERTICALLY_OFFSET UNITYSDK_OFFSET(0x2073010)
#define UIRECT_GET_CANBEANCHORED_OFFSET UNITYSDK_OFFSET(0x20730B0)
#define UIRECT_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x20730C0)
#define UIRECT_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x20731C0)
#define UIRECT_GET_ISANCHORED_OFFSET UNITYSDK_OFFSET(0x2073320)
#define UIRECT_GET_ALPHA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIRECT_SET_ALPHA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIRECT_CALCULATEFINALALPHA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIRECT_GET_LOCALCORNERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIRECT_GET_WORLDCORNERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIRECT_GET_CAMERARAYDISTANCE_OFFSET UNITYSDK_OFFSET(0x2073470)
#define UIRECT_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x2073860)
#define UIRECT_GETSIDES_OFFSET UNITYSDK_OFFSET(0x20738E0)
#define UIRECT_GETLOCALPOS_OFFSET UNITYSDK_OFFSET(0x2073ED0)
#define UIRECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20743B0)
#define UIRECT_ONINIT_OFFSET UNITYSDK_OFFSET(0x2074410)
#define UIRECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20744C0)
#define UIRECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2074580)
#define UIRECT_START_OFFSET UNITYSDK_OFFSET(0x2074620)
#define UIRECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x2074660)
#define UIRECT_UPDATEANCHORSINTERNAL_OFFSET UNITYSDK_OFFSET(0x20747A0)
#define UIRECT_UPDATEANCHORS_OFFSET UNITYSDK_OFFSET(0x2074AA0)
#define UIRECT_ONANCHOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIRECT_SETANCHOR_OFFSET UNITYSDK_OFFSET(0x2074AE0)
#define UIRECT_SETANCHOR_OFFSET UNITYSDK_OFFSET(0x2074BA0)
#define UIRECT_SETANCHOR_OFFSET UNITYSDK_OFFSET(0x2074CC0)
#define UIRECT_SETANCHOR_OFFSET UNITYSDK_OFFSET(0x2074E90)
#define UIRECT_SETANCHOR_OFFSET UNITYSDK_OFFSET(0x20750B0)
#define UIRECT_SETANCHOR_OFFSET UNITYSDK_OFFSET(0x20752F0)
#define UIRECT_SETSCREENRECT_OFFSET UNITYSDK_OFFSET(0x2075540)
#define UIRECT_RESETANCHORS_OFFSET UNITYSDK_OFFSET(0x2072B10)
#define UIRECT_RESETANDUPDATEANCHORS_OFFSET UNITYSDK_OFFSET(0x2074750)
#define UIRECT_SETRECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIRECT_FINDCAMERAFOR_OFFSET UNITYSDK_OFFSET(0x20742B0)
#define UIRECT_PARENTHASCHANGED_OFFSET UNITYSDK_OFFSET(0x2075590)
#define UIRECT_ONSTART_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIRECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x20757D0)
#define UIRECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x20757E0)
#define UIRECT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x20759A0)

	inline static constexpr unsigned int UIRect_TypeDefinitionIndex = 145;

	class UIRect : public Il2CppObject
	{
	public:
		AnchorPoint* leftAnchor; // 0x18
		AnchorPoint* rightAnchor; // 0x20
		AnchorPoint* bottomAnchor; // 0x28
		AnchorPoint* topAnchor; // 0x30
		AnchorUpdate* updateAnchors; // 0x38
		::UnityEngine::GameObject* mGo; // 0x40
		::UnityEngine::Transform* mTrans; // 0x48
		Il2CppObject* mChildren; // 0x50
		::System::Boolean mChanged; // 0x58
		::System::Boolean mParentFound; // 0x59
		::System::Boolean mUpdateAnchors; // 0x5A
		::System::Int32 mUpdateFrame; // 0x5C
		::System::Boolean mAnchorsCached; // 0x60
		UIRoot* mRoot; // 0x68
		UIRect* mParent; // 0x70
		::System::Boolean mRootSet; // 0x78
		::UnityEngine::Camera* mCam; // 0x80
		::System::Boolean mStarted; // 0x88
		::System::Single finalAlpha; // 0x8C
		::Il2CppArray<::System::Object*>* mSides; // 0x0

		::UnityEngine::GameObject* get_cachedGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_GET_CACHEDGAMEOBJECT_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_cachedTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_GET_CACHEDTRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* get_anchorCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_GET_ANCHORCAMERA_OFFSET))(nullptr);
		}

		::System::Boolean get_isFullyAnchored()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_GET_ISFULLYANCHORED_OFFSET))(nullptr);
		}

		::System::Boolean get_isAnchoredHorizontally()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_GET_ISANCHOREDHORIZONTALLY_OFFSET))(nullptr);
		}

		::System::Boolean get_isAnchoredVertically()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_GET_ISANCHOREDVERTICALLY_OFFSET))(nullptr);
		}

		::System::Boolean get_canBeAnchored()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_GET_CANBEANCHORED_OFFSET))(nullptr);
		}

		UIRect* get_parent()
		{
			return ((UIRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_GET_PARENT_OFFSET))(nullptr);
		}

		UIRoot* get_root()
		{
			return ((UIRoot*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_GET_ROOT_OFFSET))(nullptr);
		}

		::System::Boolean get_isAnchored()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_GET_ISANCHORED_OFFSET))(nullptr);
		}

		::System::Single get_alpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_GET_ALPHA_OFFSET))(nullptr);
		}

		::System::Void set_alpha(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIRECT_SET_ALPHA_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateFinalAlpha(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIRECT_CALCULATEFINALALPHA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_localCorners()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_GET_LOCALCORNERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_worldCorners()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_GET_WORLDCORNERS_OFFSET))(nullptr);
		}

		::System::Single get_cameraRayDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_GET_CAMERARAYDISTANCE_OFFSET))(nullptr);
		}

		::System::Void Invalidate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIRECT_INVALIDATE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSides(::UnityEngine::Transform* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIRECT_GETSIDES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetLocalPos(AnchorPoint* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::UnityEngine::Vector3*(*)(AnchorPoint*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIRECT_GETLOCALPOS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_ONINIT_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_START_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateAnchorsInternal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIRECT_UPDATEANCHORSINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateAnchors()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_UPDATEANCHORS_OFFSET))(nullptr);
		}

		::System::Void OnAnchor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_ONANCHOR_OFFSET))(nullptr);
		}

		::System::Void SetAnchor(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIRECT_SETANCHOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetAnchor(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIRECT_SETANCHOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetAnchor(::UnityEngine::GameObject* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Int32 arg5)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIRECT_SETANCHOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetAnchor(::UnityEngine::GameObject* arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIRECT_SETANCHOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetAnchor(::UnityEngine::GameObject* arg, ::System::Single arg2, ::System::Int32 arg3, ::System::Single arg4, ::System::Int32 arg5, ::System::Single arg6, ::System::Int32 arg7, ::System::Single arg8, ::System::Int32 arg9)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIRECT_SETANCHOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void SetAnchor(::System::Single arg, ::System::Int32 arg2, ::System::Single arg3, ::System::Int32 arg4, ::System::Single arg5, ::System::Int32 arg6, ::System::Single arg7, ::System::Int32 arg8)
		{
			((::System::Void(*)(::System::Single, ::System::Int32, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIRECT_SETANCHOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void SetScreenRect(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIRECT_SETSCREENRECT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ResetAnchors()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_RESETANCHORS_OFFSET))(nullptr);
		}

		::System::Void ResetAndUpdateAnchors()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_RESETANDUPDATEANCHORS_OFFSET))(nullptr);
		}

		::System::Void SetRect(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIRECT_SETRECT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void FindCameraFor(AnchorPoint* arg)
		{
			((::System::Void(*)(AnchorPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UIRECT_FINDCAMERAFOR_OFFSET))(arg, nullptr);
		}

		::System::Void ParentHasChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_PARENTHASCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_ONSTART_OFFSET))(nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECT_.CCTOR_OFFSET))(nullptr);
		}

	};

