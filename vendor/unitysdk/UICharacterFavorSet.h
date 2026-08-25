#pragma once
#include "unitysdk.h"

class UICafeCharacterFavor;
class UILabel;
class ObjectActivator;
class MXButton;
class MXDualStateButton;
namespace UnityEngine { class GameObject; }
class UIGrid;
class UISmallParcelCard;
class UIScrollView;
class EventDelegate;
class CharacterObject;

#define UICHARACTERFAVORSET_SETBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0xA70C50)
#define UICHARACTERFAVORSET_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA70C90)
#define UICHARACTERFAVORSET_BINDBOTTOMBUTTONSEVENT_OFFSET UNITYSDK_OFFSET(0xA70D50)
#define UICHARACTERFAVORSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA70E80)
#define UICHARACTERFAVORSET_SETDATA_OFFSET UNITYSDK_OFFSET(0xA70F00)

	inline static constexpr unsigned int UICharacterFavorSet_TypeDefinitionIndex = 7857;

	class UICharacterFavorSet : public Il2CppObject
	{
	public:
		UICafeCharacterFavor* Character; // 0x18
		UILabel* CharNameLabel; // 0x20
		UILabel* FavorRankLabel; // 0x28
		ObjectActivator* characterOwnedIndicator; // 0x30
		MXButton* cancelButton; // 0x38
		MXDualStateButton* okButton; // 0x40
		::UnityEngine::GameObject* disableMessageLabel; // 0x48
		UIGrid* productRewardListGrid; // 0x50
		UISmallParcelCard* productRewardListItemPrefab; // 0x58
		UIScrollView* productRewardListScrollView; // 0x60
		Il2CppObject* productRewardListItemList; // 0x68

		::System::Void SetButtonState(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFAVORSET_SETBUTTONSTATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFAVORSET_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void BindBottomButtonsEvent(EventDelegate* arg, EventDelegate* arg2)
		{
			((::System::Void(*)(EventDelegate*, EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFAVORSET_BINDBOTTOMBUTTONSEVENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFAVORSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(CharacterObject* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(CharacterObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFAVORSET_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

