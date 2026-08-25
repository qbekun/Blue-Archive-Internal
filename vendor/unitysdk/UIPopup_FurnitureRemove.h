#pragma once
#include "unitysdk.h"

class MXButton;
class UINonEquipmentCard;
class UIScrollView;
namespace UnityEngine { class Transform; }
class UIGrid;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Vector3; }
class UIPopup_System;

#define UIPOPUP_FURNITUREREMOVE_ONFINALCONFIRM_OFFSET UNITYSDK_OFFSET(0x2292BD0)
#define UIPOPUP_FURNITUREREMOVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2292DE0)
#define UIPOPUP_FURNITUREREMOVE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2292E00)
#define UIPOPUP_FURNITUREREMOVE_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x2292EF0)
#define UIPOPUP_FURNITUREREMOVE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2292FD0)
#define UIPOPUP_FURNITUREREMOVE__ONCLICKCONFIRM_B__17_0_OFFSET UNITYSDK_OFFSET(0x2293190)
#define UIPOPUP_FURNITUREREMOVE_CREATECARDS_OFFSET UNITYSDK_OFFSET(0x22932B0)
#define UIPOPUP_FURNITUREREMOVE_SETDATA_OFFSET UNITYSDK_OFFSET(0x22934E0)

	inline static constexpr unsigned int UIPopup_FurnitureRemove_TypeDefinitionIndex = 4710;

	class UIPopup_FurnitureRemove : public Il2CppObject
	{
	public:
		MXButton* confirmRemove; // 0xD8
		UINonEquipmentCard* cardPrefab; // 0xE0
		UIScrollView* scrollView; // 0xE8
		::UnityEngine::Transform* scrollViewParent; // 0xF0
		UIGrid* grid; // 0xF8
		::UnityEngine::GameObject* scrollBg; // 0x100
		::UnityEngine::Vector2* scrollPos_UnderLimit; // 0x108
		::UnityEngine::Vector2* scrollPos_OverLimit; // 0x110
		Il2CppObject* cards; // 0x118
		Il2CppObject* serverIds; // 0x120
		::UnityEngine::Vector4* scrollViewClipRegion; // 0x128
		::UnityEngine::Vector2* scrollViewClipOffset; // 0x138
		::UnityEngine::Vector3* scrollViewLocalPos; // 0x140

		::System::Void OnFinalConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FURNITUREREMOVE_ONFINALCONFIRM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FURNITUREREMOVE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FURNITUREREMOVE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnCliCkConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FURNITUREREMOVE_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FURNITUREREMOVE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnCliCkConfirm_b__17_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FURNITUREREMOVE__ONCLICKCONFIRM_B__17_0_OFFSET))(arg, nullptr);
		}

		::System::Void CreateCards(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FURNITUREREMOVE_CREATECARDS_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FURNITUREREMOVE_SETDATA_OFFSET))(arg, nullptr);
		}

	};

