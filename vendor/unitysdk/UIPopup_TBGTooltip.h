#pragma once
#include "unitysdk.h"

class MXButton;
class UITBGBuffTooltip;
class UITBGItemTooltip;
class UITBGItemInfoOnlyTooltip;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }
class UIWidget;
namespace MX::TableBoard { class ITBGItemEffectDB; }
namespace MX::Data { class ITBGItemInfo; }

#define UIPOPUP_TBGTOOLTIP___N__0_OFFSET UNITYSDK_OFFSET(0xB3F760)
#define UIPOPUP_TBGTOOLTIP_GET_ITEMINFOONLYTOOLTIP_OFFSET UNITYSDK_OFFSET(0xB3F770)
#define UIPOPUP_TBGTOOLTIP_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xB3F7E0)
#define UIPOPUP_TBGTOOLTIP_SETBUFFDATA_OFFSET UNITYSDK_OFFSET(0xB3FA80)
#define UIPOPUP_TBGTOOLTIP_CREATESWAPPINGOBJECT_OFFSET UNITYSDK_OFFSET(0xB3FCB0)
#define UIPOPUP_TBGTOOLTIP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xB3FE00)
#define UIPOPUP_TBGTOOLTIP_SETDATA_OFFSET UNITYSDK_OFFSET(0xB3FBC0)
#define UIPOPUP_TBGTOOLTIP_SETITEMREWARDDATA_OFFSET UNITYSDK_OFFSET(0xB40060)
#define UIPOPUP_TBGTOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0xB401A0)
#define UIPOPUP_TBGTOOLTIP_AWAKE_OFFSET UNITYSDK_OFFSET(0xB401B0)
#define UIPOPUP_TBGTOOLTIP_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xB402F0)
#define UIPOPUP_TBGTOOLTIP_GET_BUFFTOOLTIP_OFFSET UNITYSDK_OFFSET(0xB3FC40)
#define UIPOPUP_TBGTOOLTIP_SETTARGET_OFFSET UNITYSDK_OFFSET(0xB3FE90)
#define UIPOPUP_TBGTOOLTIP_SETTARGETPARENTBACK_OFFSET UNITYSDK_OFFSET(0xB3F800)
#define UIPOPUP_TBGTOOLTIP_SETITEMSLOTDATA_OFFSET UNITYSDK_OFFSET(0xB40380)
#define UIPOPUP_TBGTOOLTIP_GET_ITEMTOOLTIP_OFFSET UNITYSDK_OFFSET(0xB40600)

	inline static constexpr unsigned int UIPopup_TBGTooltip_TypeDefinitionIndex = 8330;

	class UIPopup_TBGTooltip : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UITBGBuffTooltip* buffTooltip; // 0xE0
		UITBGItemTooltip* itemTooltip; // 0xE8
		UITBGItemInfoOnlyTooltip* itemInfoOnlyTooltip; // 0xF0
		::UnityEngine::Vector3* worldCenter; // 0xF8
		::UnityEngine::Vector2* extent; // 0x104
		::UnityEngine::Transform* target; // 0x110
		::UnityEngine::Transform* targetParent; // 0x118
		::System::Int32 siblingIndex; // 0x120
		::UnityEngine::GameObject* swappingObject; // 0x128

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGTOOLTIP___N__0_OFFSET))(nullptr);
		}

		UITBGItemInfoOnlyTooltip* get_ItemInfoOnlyTooltip()
		{
			return ((UITBGItemInfoOnlyTooltip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGTOOLTIP_GET_ITEMINFOONLYTOOLTIP_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGTOOLTIP_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void SetBuffData(UIWidget* arg, ::MX::TableBoard::ITBGItemEffectDB* arg2)
		{
			((::System::Void(*)(UIWidget*, ::MX::TableBoard::ITBGItemEffectDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGTOOLTIP_SETBUFFDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CreateSwappingObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGTOOLTIP_CREATESWAPPINGOBJECT_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGTOOLTIP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void SetData(UIWidget* arg)
		{
			((::System::Void(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGTOOLTIP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetItemRewardData(UIWidget* arg, ::MX::Data::ITBGItemInfo* arg2)
		{
			((::System::Void(*)(UIWidget*, ::MX::Data::ITBGItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGTOOLTIP_SETITEMREWARDDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGTOOLTIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGTOOLTIP_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGTOOLTIP_CO_LOADING_OFFSET))(nullptr);
		}

		UITBGBuffTooltip* get_BuffTooltip()
		{
			return ((UITBGBuffTooltip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGTOOLTIP_GET_BUFFTOOLTIP_OFFSET))(nullptr);
		}

		::System::Void SetTarget(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGTOOLTIP_SETTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void SetTargetParentBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGTOOLTIP_SETTARGETPARENTBACK_OFFSET))(nullptr);
		}

		::System::Void SetItemSlotData(UIWidget* arg, ::MX::Data::ITBGItemInfo* arg2, ::System::Action* arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(UIWidget*, ::MX::Data::ITBGItemInfo*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGTOOLTIP_SETITEMSLOTDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		UITBGItemTooltip* get_ItemTooltip()
		{
			return ((UITBGItemTooltip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGTOOLTIP_GET_ITEMTOOLTIP_OFFSET))(nullptr);
		}

	};

