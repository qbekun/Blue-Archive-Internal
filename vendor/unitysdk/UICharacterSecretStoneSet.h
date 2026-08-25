#pragma once
#include "unitysdk.h"

class UICharacterInfo;
class ObjectActivator;
class IntTabController;
class UIGrid;
class UISmallParcelCard;
class UIScrollView;
class MXButton;
class MXDualStateButton;
namespace UnityEngine { class GameObject; }
class CharacterObject;
class EventDelegate;

#define UICHARACTERSECRETSTONESET_SETDATA_OFFSET UNITYSDK_OFFSET(0xA71570)
#define UICHARACTERSECRETSTONESET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA71AA0)
#define UICHARACTERSECRETSTONESET_BINDBOTTOMBUTTONSEVENT_OFFSET UNITYSDK_OFFSET(0xA71B20)
#define UICHARACTERSECRETSTONESET_AWAKE_OFFSET UNITYSDK_OFFSET(0xA71C50)
#define UICHARACTERSECRETSTONESET_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA71CF0)
#define UICHARACTERSECRETSTONESET_SETBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0xA71DB0)

	inline static constexpr unsigned int UICharacterSecretStoneSet_TypeDefinitionIndex = 7858;

	class UICharacterSecretStoneSet : public Il2CppObject
	{
	public:
		UICharacterInfo* characterInfo; // 0x18
		ObjectActivator* characterOwnedIndicator; // 0x20
		IntTabController* characterSkillEquipTab; // 0x28
		UIGrid* productRewardListGrid; // 0x30
		UISmallParcelCard* productRewardListItemPrefab; // 0x38
		UIScrollView* productRewardListScrollView; // 0x40
		MXButton* cancelButton; // 0x48
		MXDualStateButton* okButton; // 0x50
		::UnityEngine::GameObject* disableMessageLabel; // 0x58
		Il2CppObject* productRewardListItemList; // 0x60

		::System::Void SetData(CharacterObject* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(CharacterObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSECRETSTONESET_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSECRETSTONESET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void BindBottomButtonsEvent(EventDelegate* arg, EventDelegate* arg2)
		{
			((::System::Void(*)(EventDelegate*, EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSECRETSTONESET_BINDBOTTOMBUTTONSEVENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSECRETSTONESET_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSECRETSTONESET_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetButtonState(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSECRETSTONESET_SETBUTTONSTATE_OFFSET))(arg, arg2, nullptr);
		}

	};

