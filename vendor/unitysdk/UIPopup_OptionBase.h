#pragma once
#include "unitysdk.h"

class MXButton;
namespace MX::SaveData { class ClientOption; }
namespace MX::SaveData { class DeviceOption; }
class UIPopup_Option_Toggle;
namespace UnityEngine { class GameObject; }
class UIPopup_Option_Item;
namespace MX::GameLogic::DBModel { class OptionDB; }
namespace MX::SaveData { class OptionType; }
namespace MX::NetworkProtocol { class ArenaSettingAnonymousResponse; }
namespace MX::SaveData { class ToggleValueReverse; }
class UIPopup_System;
namespace MX::SaveData { class CafeAllowCopyPresetCategory; }
namespace MX::SaveData { class ToggleValue; }

#define UIPOPUP_OPTIONBASE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x271BD10)
#define UIPOPUP_OPTIONBASE_ONCLICKSOUNDRESETBUTTON_OFFSET UNITYSDK_OFFSET(0x271BD70)
#define UIPOPUP_OPTIONBASE_REFRESHITEM_OFFSET UNITYSDK_OFFSET(0x271BE50)
#define UIPOPUP_OPTIONBASE_GET_DEVICEOPTION_OFFSET UNITYSDK_OFFSET(0x271BF30)
#define UIPOPUP_OPTIONBASE_GET_OPTIONDB_OFFSET UNITYSDK_OFFSET(0x271BF40)
#define UIPOPUP_OPTIONBASE_OPENPOPUPCHANGEDTITLEVIDEOAUDIO_OFFSET UNITYSDK_OFFSET(0x271BFD0)
#define UIPOPUP_OPTIONBASE_INITITEM_STORY_OFFSET UNITYSDK_OFFSET(0x271C160)
#define UIPOPUP_OPTIONBASE_SET_DEVICEOPTION_OFFSET UNITYSDK_OFFSET(0x271C680)
#define UIPOPUP_OPTIONBASE_CHANGEDOPTIONEXTENDED_OFFSET UNITYSDK_OFFSET(0x271C6A0)
#define UIPOPUP_OPTIONBASE_INITIALIZEUI_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIPOPUP_OPTIONBASE_SETENABLEOPTION_OFFSET UNITYSDK_OFFSET(0x271C6B0)
#define UIPOPUP_OPTIONBASE_APPLYOPTIONS_OFFSET UNITYSDK_OFFSET(0x271C860)
#define UIPOPUP_OPTIONBASE_ONCLICKINCOMPLETEUI_OFFSET UNITYSDK_OFFSET(0x271C9D0)
#define UIPOPUP_OPTIONBASE_CHANGEDOPTION_TITLE_OFFSET UNITYSDK_OFFSET(0x271CB30)
#define UIPOPUP_OPTIONBASE_CHANGEDOPTION_NOTIFICATION_OFFSET UNITYSDK_OFFSET(0x271CBC0)
#define UIPOPUP_OPTIONBASE_CHANGEDOPTION_SOUND_OFFSET UNITYSDK_OFFSET(0x271CD30)
#define UIPOPUP_OPTIONBASE__REQUESTARENASETTINGANONYMOUS_B__46_0_OFFSET UNITYSDK_OFFSET(0x271CF40)
#define UIPOPUP_OPTIONBASE_REQUESTARENASETTINGANONYMOUS_OFFSET UNITYSDK_OFFSET(0x271CFE0)
#define UIPOPUP_OPTIONBASE_INITITEM_OFFSET UNITYSDK_OFFSET(0x271D150)
#define UIPOPUP_OPTIONBASE_ONCHANGED_ARENAHIDEOTHERUSERNAMES_OFFSET UNITYSDK_OFFSET(0x271F560)
#define UIPOPUP_OPTIONBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x271F7F0)
#define UIPOPUP_OPTIONBASE_SETDISABLEOPTION_OFFSET UNITYSDK_OFFSET(0x271FEB0)
#define UIPOPUP_OPTIONBASE_REQUESTCAFEALLOWCOPYPRESET_OFFSET UNITYSDK_OFFSET(0x2720060)
#define UIPOPUP_OPTIONBASE_LOADOPTIONS_OFFSET UNITYSDK_OFFSET(0x2720380)
#define UIPOPUP_OPTIONBASE_INITITEM_NOTIFICATION_OFFSET UNITYSDK_OFFSET(0x271EF20)
#define UIPOPUP_OPTIONBASE_GET_CLIENTOPTION_OFFSET UNITYSDK_OFFSET(0x2720630)
#define UIPOPUP_OPTIONBASE__ONCLICKSOUNDRESETBUTTON_B__31_0_OFFSET UNITYSDK_OFFSET(0x2720640)
#define UIPOPUP_OPTIONBASE_CHANGEDOPTION_GAME_OFFSET UNITYSDK_OFFSET(0x27206E0)
#define UIPOPUP_OPTIONBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2720EB0)
#define UIPOPUP_OPTIONBASE__ONCLICKSOUNDRESETBUTTON_B__31_1_OFFSET UNITYSDK_OFFSET(0x2720EC0)
#define UIPOPUP_OPTIONBASE_CLOSE_OFFSET UNITYSDK_OFFSET(0x2720F00)
#define UIPOPUP_OPTIONBASE_SAVEOPTIONS_OFFSET UNITYSDK_OFFSET(0x2720F90)
#define UIPOPUP_OPTIONBASE_INITITEMS_OFFSET UNITYSDK_OFFSET(0x2721080)
#define UIPOPUP_OPTIONBASE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x27210E0)
#define UIPOPUP_OPTIONBASE_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x2721110)
#define UIPOPUP_OPTIONBASE_SET_CLIENTOPTION_OFFSET UNITYSDK_OFFSET(0x2721130)
#define UIPOPUP_OPTIONBASE_INITITEM_GRAPHICS_OFFSET UNITYSDK_OFFSET(0x271E3E0)
#define UIPOPUP_OPTIONBASE_GET_ISLOGGEDIN_OFFSET UNITYSDK_OFFSET(0x27205A0)
#define UIPOPUP_OPTIONBASE_CHANGEDOPTION_STORY_OFFSET UNITYSDK_OFFSET(0x2721540)
#define UIPOPUP_OPTIONBASE_CHANGEDOPTION_OFFSET UNITYSDK_OFFSET(0x2721750)
#define UIPOPUP_OPTIONBASE_SETCAFECOPYPRESETSUBCATEGORYUISTATE_OFFSET UNITYSDK_OFFSET(0x2721E20)
#define UIPOPUP_OPTIONBASE_ONCHANGED_CAFEALLOWCOPYPRESETCATEGORY_OFFSET UNITYSDK_OFFSET(0x2720EA0)
#define UIPOPUP_OPTIONBASE_PCBUILDOPTIONENABLE_OFFSET UNITYSDK_OFFSET(0x271FAD0)
#define UIPOPUP_OPTIONBASE_REFRESHANTIALIASINGBUTTONS_OFFSET UNITYSDK_OFFSET(0x2721310)
#define UIPOPUP_OPTIONBASE_CHANGEDOPTION_GRAPHICS_OFFSET UNITYSDK_OFFSET(0x27218C0)
#define UIPOPUP_OPTIONBASE_REFRESHITEM_GRAPHICS_OFFSET UNITYSDK_OFFSET(0x271BE60)
#define UIPOPUP_OPTIONBASE_INITITEM_TITLE_OFFSET UNITYSDK_OFFSET(0x271F210)
#define UIPOPUP_OPTIONBASE_INITITEMEXTENDED_OFFSET UNITYSDK_OFFSET(0x2721F60)
#define UIPOPUP_OPTIONBASE_ONCHANGED_ARENAHIDEMYUSERNAME_OFFSET UNITYSDK_OFFSET(0x2720C00)
#define UIPOPUP_OPTIONBASE_REFRESHDRAWCALLMODEBUTTONS_OFFSET UNITYSDK_OFFSET(0x2721150)
#define UIPOPUP_OPTIONBASE_INITITEM_SOUND_OFFSET UNITYSDK_OFFSET(0x271D1E0)
#define UIPOPUP_OPTIONBASE_INITITEM_GAME_OFFSET UNITYSDK_OFFSET(0x271D620)

	inline static constexpr unsigned int UIPopup_OptionBase_TypeDefinitionIndex = 7161;

	class UIPopup_OptionBase : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXButton* soundResetButton; // 0xE0
		Il2CppObject* pcTabObjects; // 0xE8
		::Il2CppArray<::System::Object*>* items; // 0xF0
		::MX::SaveData::ClientOption* _ClientOption_k__BackingField; // 0xF8
		::MX::SaveData::DeviceOption* _DeviceOption_k__BackingField; // 0x100
		::System::Boolean isPCPlatform; // 0x108
		UIPopup_Option_Toggle* CafeCopyPresetSubCategoryToggle; // 0x110
		::UnityEngine::GameObject* CafeCopyPresetDim; // 0x118
		UIPopup_Option_Toggle* arenaHideOtherUsernamesItem; // 0x120
		UIPopup_Option_Toggle* arenaHideMyUsernamesItem; // 0x128

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSoundResetButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_ONCLICKSOUNDRESETBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefreshItem(UIPopup_Option_Item* arg)
		{
			((::System::Void(*)(UIPopup_Option_Item*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_REFRESHITEM_OFFSET))(arg, nullptr);
		}

		::MX::SaveData::DeviceOption* get_DeviceOption()
		{
			return ((::MX::SaveData::DeviceOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_GET_DEVICEOPTION_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::OptionDB* get_OptionDB()
		{
			return ((::MX::GameLogic::DBModel::OptionDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_GET_OPTIONDB_OFFSET))(nullptr);
		}

		::System::Void OpenPopupChangedTitleVideoAudio()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_OPENPOPUPCHANGEDTITLEVIDEOAUDIO_OFFSET))(nullptr);
		}

		::System::Boolean InitItem_Story(UIPopup_Option_Item* arg)
		{
			return ((::System::Boolean(*)(UIPopup_Option_Item*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_INITITEM_STORY_OFFSET))(arg, nullptr);
		}

		::System::Void set_DeviceOption(::MX::SaveData::DeviceOption* arg)
		{
			((::System::Void(*)(::MX::SaveData::DeviceOption*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_SET_DEVICEOPTION_OFFSET))(arg, nullptr);
		}

		::System::Void ChangedOptionExtended(::MX::SaveData::OptionType* arg, ::System::Object* arg2, ::System::Single arg3, bool&* arg4)
		{
			((::System::Void(*)(::MX::SaveData::OptionType*, ::System::Object*, ::System::Single, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_CHANGEDOPTIONEXTENDED_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void InitializeUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_INITIALIZEUI_OFFSET))(nullptr);
		}

		::System::Void SetEnableOption(::MX::SaveData::OptionType* arg)
		{
			((::System::Void(*)(::MX::SaveData::OptionType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_SETENABLEOPTION_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyOptions(::MX::SaveData::ClientOption* arg, ::MX::SaveData::DeviceOption* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::SaveData::ClientOption*, ::MX::SaveData::DeviceOption*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_APPLYOPTIONS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickIncompleteUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_ONCLICKINCOMPLETEUI_OFFSET))(nullptr);
		}

		::System::Boolean ChangedOption_Title(::MX::SaveData::OptionType* arg, ::System::Object* arg2, ::System::Single arg3, bool&* arg4)
		{
			return ((::System::Boolean(*)(::MX::SaveData::OptionType*, ::System::Object*, ::System::Single, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_CHANGEDOPTION_TITLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean ChangedOption_Notification(::MX::SaveData::OptionType* arg, ::System::Object* arg2, ::System::Single arg3, bool&* arg4)
		{
			return ((::System::Boolean(*)(::MX::SaveData::OptionType*, ::System::Object*, ::System::Single, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_CHANGEDOPTION_NOTIFICATION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean ChangedOption_Sound(::MX::SaveData::OptionType* arg, ::System::Object* arg2, ::System::Single arg3, bool&* arg4)
		{
			return ((::System::Boolean(*)(::MX::SaveData::OptionType*, ::System::Object*, ::System::Single, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_CHANGEDOPTION_SOUND_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void _RequestArenaSettingAnonymous_b__46_0(::MX::NetworkProtocol::ArenaSettingAnonymousResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaSettingAnonymousResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE__REQUESTARENASETTINGANONYMOUS_B__46_0_OFFSET))(arg, nullptr);
		}

		::System::Void RequestArenaSettingAnonymous()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_REQUESTARENASETTINGANONYMOUS_OFFSET))(nullptr);
		}

		::System::Void InitItem(UIPopup_Option_Item* arg)
		{
			((::System::Void(*)(UIPopup_Option_Item*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_INITITEM_OFFSET))(arg, nullptr);
		}

		::System::Void OnChanged_ArenaHideOtherUsernames(::MX::SaveData::ToggleValueReverse* arg, bool&* arg2)
		{
			((::System::Void(*)(::MX::SaveData::ToggleValueReverse*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_ONCHANGED_ARENAHIDEOTHERUSERNAMES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetDisableOption(::MX::SaveData::OptionType* arg)
		{
			((::System::Void(*)(::MX::SaveData::OptionType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_SETDISABLEOPTION_OFFSET))(arg, nullptr);
		}

		::System::Void RequestCafeAllowCopyPreset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_REQUESTCAFEALLOWCOPYPRESET_OFFSET))(nullptr);
		}

		::System::Void LoadOptions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_LOADOPTIONS_OFFSET))(nullptr);
		}

		::System::Boolean InitItem_Notification(UIPopup_Option_Item* arg)
		{
			return ((::System::Boolean(*)(UIPopup_Option_Item*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_INITITEM_NOTIFICATION_OFFSET))(arg, nullptr);
		}

		::MX::SaveData::ClientOption* get_ClientOption()
		{
			return ((::MX::SaveData::ClientOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_GET_CLIENTOPTION_OFFSET))(nullptr);
		}

		::System::Void _OnClickSoundResetButton_b__31_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE__ONCLICKSOUNDRESETBUTTON_B__31_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean ChangedOption_Game(::MX::SaveData::OptionType* arg, ::System::Object* arg2, ::System::Single arg3, bool&* arg4)
		{
			return ((::System::Boolean(*)(::MX::SaveData::OptionType*, ::System::Object*, ::System::Single, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_CHANGEDOPTION_GAME_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickSoundResetButton_b__31_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE__ONCLICKSOUNDRESETBUTTON_B__31_1_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_CLOSE_OFFSET))(nullptr);
		}

		::System::Void SaveOptions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_SAVEOPTIONS_OFFSET))(nullptr);
		}

		::System::Void InitItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_INITITEMS_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_ONCANCEL_OFFSET))(nullptr);
		}

		::System::Void set_ClientOption(::MX::SaveData::ClientOption* arg)
		{
			((::System::Void(*)(::MX::SaveData::ClientOption*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_SET_CLIENTOPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean InitItem_Graphics(UIPopup_Option_Item* arg)
		{
			return ((::System::Boolean(*)(UIPopup_Option_Item*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_INITITEM_GRAPHICS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLoggedIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_GET_ISLOGGEDIN_OFFSET))(nullptr);
		}

		::System::Boolean ChangedOption_Story(::MX::SaveData::OptionType* arg, ::System::Object* arg2, ::System::Single arg3, bool&* arg4)
		{
			return ((::System::Boolean(*)(::MX::SaveData::OptionType*, ::System::Object*, ::System::Single, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_CHANGEDOPTION_STORY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ChangedOption(::MX::SaveData::OptionType* arg, ::System::Object* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::MX::SaveData::OptionType*, ::System::Object*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_CHANGEDOPTION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetCafeCopyPresetSubCategoryUIState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_SETCAFECOPYPRESETSUBCATEGORYUISTATE_OFFSET))(nullptr);
		}

		::System::Void OnChanged_CafeAllowCopyPresetCategory(::MX::SaveData::CafeAllowCopyPresetCategory* arg, bool&* arg2)
		{
			((::System::Void(*)(::MX::SaveData::CafeAllowCopyPresetCategory*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_ONCHANGED_CAFEALLOWCOPYPRESETCATEGORY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PCBuildOptionEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_PCBUILDOPTIONENABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshAntiAliasingButtons(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_REFRESHANTIALIASINGBUTTONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ChangedOption_Graphics(::MX::SaveData::OptionType* arg, ::System::Object* arg2, ::System::Single arg3, bool&* arg4)
		{
			return ((::System::Boolean(*)(::MX::SaveData::OptionType*, ::System::Object*, ::System::Single, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_CHANGEDOPTION_GRAPHICS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean RefreshItem_Graphics(UIPopup_Option_Item* arg)
		{
			return ((::System::Boolean(*)(UIPopup_Option_Item*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_REFRESHITEM_GRAPHICS_OFFSET))(arg, nullptr);
		}

		::System::Boolean InitItem_Title(UIPopup_Option_Item* arg)
		{
			return ((::System::Boolean(*)(UIPopup_Option_Item*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_INITITEM_TITLE_OFFSET))(arg, nullptr);
		}

		::System::Void InitItemExtended(UIPopup_Option_Item* arg)
		{
			((::System::Void(*)(UIPopup_Option_Item*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_INITITEMEXTENDED_OFFSET))(arg, nullptr);
		}

		::System::Void OnChanged_ArenaHideMyUsername(::MX::SaveData::ToggleValue* arg, bool&* arg2)
		{
			((::System::Void(*)(::MX::SaveData::ToggleValue*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_ONCHANGED_ARENAHIDEMYUSERNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshDrawcallModeButtons(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_REFRESHDRAWCALLMODEBUTTONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean InitItem_Sound(UIPopup_Option_Item* arg)
		{
			return ((::System::Boolean(*)(UIPopup_Option_Item*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_INITITEM_SOUND_OFFSET))(arg, nullptr);
		}

		::System::Boolean InitItem_Game(UIPopup_Option_Item* arg)
		{
			return ((::System::Boolean(*)(UIPopup_Option_Item*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTIONBASE_INITITEM_GAME_OFFSET))(arg, nullptr);
		}

	};

