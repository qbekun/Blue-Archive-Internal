#pragma once
#include "unitysdk.h"

namespace UnityEngine { class MaterialPropertyBlock; }
class UIPanel;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Vector2; }

#define UIFXCLIPSYNC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9F4CD0)
#define UIFXCLIPSYNC_UPDATEPROPBLOCKCLIPPINGVALUES_OFFSET UNITYSDK_OFFSET(0x9F5820)
#define UIFXCLIPSYNC_SETCLIPPING_OFFSET UNITYSDK_OFFSET(0x9F5C50)
#define UIFXCLIPSYNC_UPDATEPROPBLOCK_OFFSET UNITYSDK_OFFSET(0x9F5EC0)
#define UIFXCLIPSYNC_GET_PANEL_OFFSET UNITYSDK_OFFSET(0x9F5F80)
#define UIFXCLIPSYNC_APPLYPROPBLOCK_OFFSET UNITYSDK_OFFSET(0x9F57C0)
#define UIFXCLIPSYNC_AUTOFINDANDASSIGNPANEL_OFFSET UNITYSDK_OFFSET(0x9F4E80)
#define UIFXCLIPSYNC_INITIALIZEPROPBLOCK_OFFSET UNITYSDK_OFFSET(0x9F5250)
#define UIFXCLIPSYNC_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F6000)
#define UIFXCLIPSYNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F6330)
#define UIFXCLIPSYNC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9F6340)
#define UIFXCLIPSYNC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9F6350)
#define UIFXCLIPSYNC_SET_PANEL_OFFSET UNITYSDK_OFFSET(0x9F5F90)
#define UIFXCLIPSYNC_CACHEDPANELCHAIN_OFFSET UNITYSDK_OFFSET(0x9F5070)
#define UIFXCLIPSYNC_AWAKE_OFFSET UNITYSDK_OFFSET(0x9F64F0)

	inline static constexpr unsigned int UIFxClipSync_TypeDefinitionIndex = 10;

	class UIFxClipSync : public Il2CppObject
	{
	public:
		::UnityEngine::MaterialPropertyBlock* propBlock; // 0x18
		::System::Int32 MaxClipCount; // 0x0
		::Il2CppArray<::System::Object*>* ClipRangeIDs; // 0x0
		::Il2CppArray<::System::Object*>* ClipArgsIDs; // 0x8
		::Il2CppArray<::System::Object*>* ClipParamsIDs; // 0x10
		::System::Int32 ClipModeID; // 0x18
		::System::Int32 ObjToPanelMatrixID; // 0x1C
		UIPanel* targetPanel; // 0x20
		::Il2CppArray<::System::Object*>* syncRenderers; // 0x28
		::Il2CppArray<::System::Object*>* cachedPanels; // 0x30
		::System::Boolean initClip; // 0x38
		::UnityEngine::Vector3* prevPanelPosition; // 0x3C
		::UnityEngine::Vector4* prevDrawCallClipRange; // 0x48

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXCLIPSYNC_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void UpdatePropBlockClippingValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXCLIPSYNC_UPDATEPROPBLOCKCLIPPINGVALUES_OFFSET))(nullptr);
		}

		::System::Void SetClipping(::System::Int32 arg, ::UnityEngine::Vector4* arg2, ::UnityEngine::Vector2* arg3, ::System::Single arg4, ::System::Single arg5)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIFXCLIPSYNC_SETCLIPPING_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void UpdatePropBlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXCLIPSYNC_UPDATEPROPBLOCK_OFFSET))(nullptr);
		}

		UIPanel* get_panel()
		{
			return ((UIPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXCLIPSYNC_GET_PANEL_OFFSET))(nullptr);
		}

		::System::Void ApplyPropBlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXCLIPSYNC_APPLYPROPBLOCK_OFFSET))(nullptr);
		}

		::System::Void AutoFindAndAssignPanel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXCLIPSYNC_AUTOFINDANDASSIGNPANEL_OFFSET))(nullptr);
		}

		::System::Void InitializePropBlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXCLIPSYNC_INITIALIZEPROPBLOCK_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXCLIPSYNC_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXCLIPSYNC_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXCLIPSYNC_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXCLIPSYNC_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_panel(UIPanel* arg)
		{
			((::System::Void(*)(UIPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UIFXCLIPSYNC_SET_PANEL_OFFSET))(arg, nullptr);
		}

		::System::Void CachedPanelChain()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXCLIPSYNC_CACHEDPANELCHAIN_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXCLIPSYNC_AWAKE_OFFSET))(nullptr);
		}

	};

