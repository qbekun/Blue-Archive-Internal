#pragma once
#include "unitysdk.h"

class OptionTabController;
namespace MX::SaveData { class OptionTab; }
namespace FlatData { class Language; }
namespace FlatData { class Nation; }
namespace MX::SaveData { class OptionType; }
class UIPopup_Option_Item;

#define UIPOPUP_OPTION_FULL_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x27222D0)
#define UIPOPUP_OPTION_FULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x271B130)
#define UIPOPUP_OPTION_FULL_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2722460)
#define UIPOPUP_OPTION_FULL_CHANGEDOPTIONEXTENDED_OFFSET UNITYSDK_OFFSET(0x2722730)
#define UIPOPUP_OPTION_FULL_SAVEOPTIONS_OFFSET UNITYSDK_OFFSET(0x2722A30)
#define UIPOPUP_OPTION_FULL_INITITEMEXTENDED_OFFSET UNITYSDK_OFFSET(0x27235D0)
#define UIPOPUP_OPTION_FULL_AWAKE_OFFSET UNITYSDK_OFFSET(0x271B2D0)
#define UIPOPUP_OPTION_FULL_YIELDSCROLLVIEWRESET_OFFSET UNITYSDK_OFFSET(0x2723820)
#define UIPOPUP_OPTION_FULL_SETLANGUAGETEXT_OFFSET UNITYSDK_OFFSET(0x27238B0)
#define UIPOPUP_OPTION_FULL_GET_INSERTLANGUAGETABATLAST_OFFSET UNITYSDK_OFFSET(0x2723CE0)
#define UIPOPUP_OPTION_FULL_LOADOPTIONS_OFFSET UNITYSDK_OFFSET(0x2723CF0)
#define UIPOPUP_OPTION_FULL_SHOWMESSAGECHANGELANGUAGE_OFFSET UNITYSDK_OFFSET(0x2722810)
#define UIPOPUP_OPTION_FULL_SAVEANDLOGOUT_OFFSET UNITYSDK_OFFSET(0x2722A40)

	inline static constexpr unsigned int UIPopup_Option_Full_TypeDefinitionIndex = 7165;

	class UIPopup_Option_Full : public Il2CppObject
	{
	public:
		OptionTabController* TabController; // 0x130
		::MX::SaveData::OptionTab* DefaultTab; // 0x138
		::Il2CppArray<::System::Object*>* localJp; // 0x140
		::Il2CppArray<::System::Object*>* localKr; // 0x148
		::Il2CppArray<::System::Object*>* localEn; // 0x150
		::Il2CppArray<::System::Object*>* localTw; // 0x158
		::Il2CppArray<::System::Object*>* localTh; // 0x160
		::FlatData::Language* SelectLanguage; // 0x168
		::FlatData::Nation* SelectVoiceLanguage; // 0x16C

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_FULL_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_FULL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_FULL_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void ChangedOptionExtended(::MX::SaveData::OptionType* arg, ::System::Object* arg2, ::System::Single arg3, bool&* arg4)
		{
			((::System::Void(*)(::MX::SaveData::OptionType*, ::System::Object*, ::System::Single, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_FULL_CHANGEDOPTIONEXTENDED_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SaveOptions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_FULL_SAVEOPTIONS_OFFSET))(nullptr);
		}

		::System::Void InitItemExtended(UIPopup_Option_Item* arg)
		{
			((::System::Void(*)(UIPopup_Option_Item*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_FULL_INITITEMEXTENDED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_FULL_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* YieldScrollViewReset()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_FULL_YIELDSCROLLVIEWRESET_OFFSET))(nullptr);
		}

		::System::Void SetLanguageText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_FULL_SETLANGUAGETEXT_OFFSET))(nullptr);
		}

		::System::Boolean get_InsertLanguageTabAtLast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_FULL_GET_INSERTLANGUAGETABATLAST_OFFSET))(nullptr);
		}

		::System::Void LoadOptions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_FULL_LOADOPTIONS_OFFSET))(nullptr);
		}

		::System::Void ShowMessageChangeLanguage(::MX::SaveData::OptionType* arg, ::System::String* str)
		{
			((::System::Void(*)(::MX::SaveData::OptionType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_FULL_SHOWMESSAGECHANGELANGUAGE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SaveAndLogOut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_FULL_SAVEANDLOGOUT_OFFSET))(nullptr);
		}

	};

