#pragma once
#include "unitysdk.h"

class LobbyCharacterSelectScrollViewController;
class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class UICharacterSelectNameSearch;
class UICharacterSelectPopupController;

#define UICHARACTERSELECTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2642A50)
#define UICHARACTERSELECTPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2642A60)
#define UICHARACTERSELECTPOPUP_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x2642AB0)
#define UICHARACTERSELECTPOPUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2642AC0)
#define UICHARACTERSELECTPOPUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2642B00)
#define UICHARACTERSELECTPOPUP_INIT_OFFSET UNITYSDK_OFFSET(0x2642B40)

	inline static constexpr unsigned int UICharacterSelectPopup_TypeDefinitionIndex = 6612;

	class UICharacterSelectPopup : public Il2CppObject
	{
	public:
		LobbyCharacterSelectScrollViewController* ScrollViewController; // 0xD8
		MXButton* CloseButton; // 0xE0
		MXButton* CancelButton; // 0xE8
		MXButton* OkButton; // 0xF0
		MXButton* OkButton_Disable; // 0xF8
		UILabel* selectCountLabel; // 0x100
		UILabel* sortLabelType1; // 0x108
		UILabel* sortLabelType2; // 0x110
		::UnityEngine::GameObject* sortType1; // 0x118
		::UnityEngine::GameObject* sortType2; // 0x120
		::UnityEngine::GameObject* filterMarkerOn; // 0x128
		::UnityEngine::GameObject* filterMarkerOff; // 0x130
		MXButton* filterButton; // 0x138
		MXButton* orderButton; // 0x140
		::UnityEngine::GameObject* ascendingIcon; // 0x148
		::UnityEngine::GameObject* descendingIcon; // 0x150
		::UnityEngine::GameObject* EmptySign; // 0x158
		UILabel* EmptyLabel; // 0x160
		::UnityEngine::GameObject* InfoButton; // 0x168
		UICharacterSelectNameSearch* NameSearch; // 0x170
		::System::Int32 ColumnCount; // 0x0
		UICharacterSelectPopupController* controller; // 0x178

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSELECTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSELECTPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		UICharacterSelectPopupController* get_Controller()
		{
			return ((UICharacterSelectPopupController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSELECTPOPUP_GET_CONTROLLER_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSELECTPOPUP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSELECTPOPUP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Init(UICharacterSelectPopupController* arg)
		{
			((::System::Void(*)(UICharacterSelectPopupController*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSELECTPOPUP_INIT_OFFSET))(arg, nullptr);
		}

	};

