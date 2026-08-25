#pragma once
#include "unitysdk.h"

class UILabel;
class UIWidget;
class MXButton;
class ButtonActivator;
class UINonEquipmentCard;
namespace UnityEngine { class GameObject; }
class MXToggle;
class FurnitureObject;
class UIFurnitureDetail;

#define UIFURNITURECARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x2583390)
#define UIFURNITURECARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x25833A0)
#define UIFURNITURECARD_SET_ISMYASSET_OFFSET UNITYSDK_OFFSET(0x2583AC0)
#define UIFURNITURECARD_ONCLICKPLACE_OFFSET UNITYSDK_OFFSET(0x2583AD0)
#define UIFURNITURECARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x2584050)
#define UIFURNITURECARD_GET_FURNITUREOBJECT_OFFSET UNITYSDK_OFFSET(0x2584410)
#define UIFURNITURECARD_SET_FURNITUREOBJECT_OFFSET UNITYSDK_OFFSET(0x2584420)
#define UIFURNITURECARD__ONCLICKINFO_B__26_0_OFFSET UNITYSDK_OFFSET(0x2584430)
#define UIFURNITURECARD_ONLOCKTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x2585300)
#define UIFURNITURECARD_REFRESH_OFFSET UNITYSDK_OFFSET(0x25853D0)
#define UIFURNITURECARD_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0x2585450)
#define UIFURNITURECARD_GET_ISMYASSET_OFFSET UNITYSDK_OFFSET(0x2585530)
#define UIFURNITURECARD_SETUI_OFFSET UNITYSDK_OFFSET(0x25833F0)

	inline static constexpr unsigned int UIFurnitureCard_TypeDefinitionIndex = 6219;

	class UIFurnitureCard : public Il2CppObject
	{
	public:
		UILabel* NameLabel; // 0x18
		UIWidget* countWidget; // 0x20
		UILabel* countLabel; // 0x28
		MXButton* InfoButton; // 0x30
		ButtonActivator* PlaceButton; // 0x38
		UINonEquipmentCard* NonEquipmentCard; // 0x40
		::UnityEngine::GameObject* interactionAbleSprite; // 0x48
		::UnityEngine::GameObject* interactionDisableSprite; // 0x50
		::UnityEngine::GameObject* placedDisplay; // 0x58
		MXToggle* lockToggle; // 0x60
		::System::Boolean isSelected; // 0x68
		Il2CppObject* onClickCallback; // 0x70
		FurnitureObject* _FurnitureObject_k__BackingField; // 0x78
		::System::Boolean isInitialized; // 0x80
		::System::Boolean _isMyAsset_k__BackingField; // 0x81

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURECARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(FurnitureObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(FurnitureObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURECARD_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_isMyAsset(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURECARD_SET_ISMYASSET_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPlace()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURECARD_ONCLICKPLACE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURECARD_AWAKE_OFFSET))(nullptr);
		}

		FurnitureObject* get_FurnitureObject()
		{
			return ((FurnitureObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURECARD_GET_FURNITUREOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_FurnitureObject(FurnitureObject* arg)
		{
			((::System::Void(*)(FurnitureObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURECARD_SET_FURNITUREOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickInfo_b__26_0(UIFurnitureDetail* arg)
		{
			((::System::Void(*)(UIFurnitureDetail*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURECARD__ONCLICKINFO_B__26_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnLockToggleChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURECARD_ONLOCKTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Refresh(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURECARD_REFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURECARD_ONCLICKINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_isMyAsset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURECARD_GET_ISMYASSET_OFFSET))(nullptr);
		}

		::System::Void SetUI(FurnitureObject* arg)
		{
			((::System::Void(*)(FurnitureObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURECARD_SETUI_OFFSET))(arg, nullptr);
		}

	};

