#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UIParcelCardRewardTag;
class UIAssetCard_ExpirationTimer;
class UISprite;
class TooltipButton;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class BoxCollider; }
namespace FlatData { class RewardTag; }
namespace FlatData { class ParcelType; }
class UIScrollView;

#define UIASSETCARD`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD`1_SETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD`1_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD`1_GET_EXPIRATIONTIMER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD`1_GET_TOOLTIPBUTTON_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD`1_AWAKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD`1_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD`1_GET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD`1_SET_SELECTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD`1_GET_MYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD`1_SETEXPIRATIONTIMER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD`1_ENABLEINTERACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD`1_SETSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD`1_ONCLICK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD`1_SETDISABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD`1_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD`1_GET_DRAGSCROLLVIEWS_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int UIAssetCard`1_TypeDefinitionIndex = 4311;

	class UIAssetCard`1 : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* UIItemEmpty; // 0x0
		::UnityEngine::GameObject* UIItemDisable; // 0x0
		UIParcelCardRewardTag* ParcelRewardTag; // 0x0
		::UnityEngine::GameObject* UIItemNormal; // 0x0
		::UnityEngine::GameObject* SelectedAsIngredientIndicator; // 0x0
		::UnityEngine::GameObject* SelectedIndicator; // 0x0
		::UnityEngine::GameObject* EquippedIndicator; // 0x0
		UIAssetCard_ExpirationTimer* _expirationTimer; // 0x0
		UISprite* Bg; // 0x0
		TooltipButton* tooltipButton; // 0x0
		Il2CppObject* dragScrollViews; // 0x0
		::System::Boolean isMultiSelectable; // 0x0
		::UnityEngine::Transform* myTransform; // 0x0
		::UnityEngine::BoxCollider* col; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, ::System::Boolean arg2, ::FlatData::RewardTag* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD`1_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD`1_SETEMPTY_OFFSET))(nullptr);
		}

		UIAssetCard_ExpirationTimer* get_expirationTimer()
		{
			return ((UIAssetCard_ExpirationTimer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD`1_GET_EXPIRATIONTIMER_OFFSET))(nullptr);
		}

		TooltipButton* get_TooltipButton()
		{
			return ((TooltipButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD`1_GET_TOOLTIPBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD`1_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD`1_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD`1_GET_ISDISABLED_OFFSET))(nullptr);
		}

		::System::Void set_Selected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD`1_SET_SELECTED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_MyTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD`1_GET_MYTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void SetExpirationTimer(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::FlatData::RewardTag* arg3)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::System::Int64, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD`1_SETEXPIRATIONTIMER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void EnableInteraction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD`1_ENABLEINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetScrollView(UIScrollView* arg)
		{
			((::System::Void(*)(UIScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD`1_SETSCROLLVIEW_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD`1_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void SetDisable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD`1_SETDISABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Selected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD`1_GET_SELECTED_OFFSET))(nullptr);
		}

		Il2CppObject* get_DragScrollViews()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD`1_GET_DRAGSCROLLVIEWS_OFFSET))(nullptr);
		}

	};

