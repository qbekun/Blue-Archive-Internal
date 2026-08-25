#pragma once
#include "unitysdk.h"

class MXButton;
namespace MX::SaveData { class MiniGameRhythmSaveData; }
class MinigameRhythmOption;
class OptionTabController;
namespace MX::SaveData { class OptionType; }
class UIPopup_Option_Item;

#define UIPOPUP_MINIGAMERHYTHMOPTIONNEW_.CTOR_OFFSET UNITYSDK_OFFSET(0xE3CE10)
#define UIPOPUP_MINIGAMERHYTHMOPTIONNEW_AWAKE_OFFSET UNITYSDK_OFFSET(0xE3CE20)
#define UIPOPUP_MINIGAMERHYTHMOPTIONNEW_ONOPENED_OFFSET UNITYSDK_OFFSET(0xE3CFA0)
#define UIPOPUP_MINIGAMERHYTHMOPTIONNEW_CHANGEDMINIGAMEOPTION_OFFSET UNITYSDK_OFFSET(0xE3D150)
#define UIPOPUP_MINIGAMERHYTHMOPTIONNEW_INITITEMS_OFFSET UNITYSDK_OFFSET(0xE3D100)
#define UIPOPUP_MINIGAMERHYTHMOPTIONNEW_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0xE3DA20)
#define UIPOPUP_MINIGAMERHYTHMOPTIONNEW_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xE3DB50)
#define UIPOPUP_MINIGAMERHYTHMOPTIONNEW_INITITEM_OFFSET UNITYSDK_OFFSET(0xE3D350)

	inline static constexpr unsigned int UIPopup_MinigameRhythmOptionNew_TypeDefinitionIndex = 721;

	class UIPopup_MinigameRhythmOptionNew : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		::Il2CppArray<::System::Object*>* items; // 0xE0
		::MX::SaveData::MiniGameRhythmSaveData* RhythmSaveData; // 0xE8
		MinigameRhythmOption* RhythmOption; // 0xF0
		OptionTabController* TabController; // 0xF8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTIONNEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTIONNEW_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTIONNEW_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void ChangedMinigameOption(::MX::SaveData::OptionType* arg, ::System::Object* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::MX::SaveData::OptionType*, ::System::Object*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTIONNEW_CHANGEDMINIGAMEOPTION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTIONNEW_INITITEMS_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTIONNEW_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTIONNEW_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void InitItem(UIPopup_Option_Item* arg)
		{
			((::System::Void(*)(UIPopup_Option_Item*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTIONNEW_INITITEM_OFFSET))(arg, nullptr);
		}

	};

