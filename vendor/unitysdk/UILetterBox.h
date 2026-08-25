#pragma once
#include "unitysdk.h"

class UIPanel;
class UIWidget;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Component; }

#define UILETTERBOX_GET_NEEDREFRESH_OFFSET UNITYSDK_OFFSET(0x2633660)
#define UILETTERBOX_AWAKE_OFFSET UNITYSDK_OFFSET(0x2633770)
#define UILETTERBOX_START_OFFSET UNITYSDK_OFFSET(0x2633840)
#define UILETTERBOX_ONOFFLETTERBOX_OFFSET UNITYSDK_OFFSET(0x2630420)
#define UILETTERBOX_REFRESH_OFFSET UNITYSDK_OFFSET(0x2633890)
#define UILETTERBOX_CHANGELAYERTO_OFFSET UNITYSDK_OFFSET(0x2634750)
#define UILETTERBOX_RESTORELAYERS_OFFSET UNITYSDK_OFFSET(0x2634860)
#define UILETTERBOX_REFRESHPCPORTRAITMODE_OFFSET UNITYSDK_OFFSET(0x2633AD0)
#define UILETTERBOX_REFRESHLEFTRIGHTPC_OFFSET UNITYSDK_OFFSET(0x2634AE0)
#define UILETTERBOX_REFRESHLEFTRIGHT_OFFSET UNITYSDK_OFFSET(0x26340F0)
#define UILETTERBOX_REFRESHTOPBOTTOM_OFFSET UNITYSDK_OFFSET(0x2634520)
#define UILETTERBOX_ACTIVATETOPBOTTOMLETTERBOX_OFFSET UNITYSDK_OFFSET(0x2635040)
#define UILETTERBOX_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x2634A50)
#define UILETTERBOX_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x2634970)
#define UILETTERBOX_GETHEIGHTS_OFFSET UNITYSDK_OFFSET(0x26354C0)
#define UILETTERBOX_GETLETTERBOXPOSITIONS_OFFSET UNITYSDK_OFFSET(0x26355E0)
#define UILETTERBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0x26356C0)

	inline static constexpr unsigned int UILetterBox_TypeDefinitionIndex = 6571;

	class UILetterBox : public Il2CppObject
	{
	public:
		UIPanel* letterBoxPanel; // 0x18
		UIWidget* leftBox; // 0x20
		UIWidget* rightBox; // 0x28
		UIWidget* topBox; // 0x30
		UIWidget* bottomBox; // 0x38
		UIPanel* syncPanel; // 0x40
		::UnityEngine::GameObject* leftSyncObject; // 0x48
		::UnityEngine::GameObject* rightSyncObject; // 0x50
		::UnityEngine::GameObject* topSyncObject; // 0x58
		::UnityEngine::GameObject* bottomSyncObject; // 0x60
		::System::Boolean ignoreLetterBox; // 0x68
		::System::Int32 originalLetterBoxLayer; // 0x6C
		::System::Int32 originalSyncObjectsLayer; // 0x70
		::System::Single cachedAspectRatio; // 0x74
		::System::Int32 MIN_BOX_NGUI_THRESHOLD; // 0x0

		::System::Boolean get_NeedRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILETTERBOX_GET_NEEDREFRESH_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILETTERBOX_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILETTERBOX_START_OFFSET))(nullptr);
		}

		::System::Void OnOffLetterBox(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILETTERBOX_ONOFFLETTERBOX_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILETTERBOX_REFRESH_OFFSET))(nullptr);
		}

		::System::Void ChangeLayerTo(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILETTERBOX_CHANGELAYERTO_OFFSET))(arg, nullptr);
		}

		::System::Void RestoreLayers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILETTERBOX_RESTORELAYERS_OFFSET))(nullptr);
		}

		::System::Void RefreshPCPortraitMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILETTERBOX_REFRESHPCPORTRAITMODE_OFFSET))(nullptr);
		}

		::System::Void RefreshLeftRightPC()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILETTERBOX_REFRESHLEFTRIGHTPC_OFFSET))(nullptr);
		}

		::System::Void RefreshLeftRight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILETTERBOX_REFRESHLEFTRIGHT_OFFSET))(nullptr);
		}

		::System::Void RefreshTopBottom(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UILETTERBOX_REFRESHTOPBOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Void ActivateTopBottomLetterBox(::System::Boolean arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UILETTERBOX_ACTIVATETOPBOTTOMLETTERBOX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetActive(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILETTERBOX_SETACTIVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetActive(::UnityEngine::Component* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Component*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILETTERBOX_SETACTIVE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetHeights()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILETTERBOX_GETHEIGHTS_OFFSET))(nullptr);
		}

		Il2CppObject* GetLetterBoxPositions()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILETTERBOX_GETLETTERBOXPOSITIONS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILETTERBOX_.CTOR_OFFSET))(nullptr);
		}

	};

