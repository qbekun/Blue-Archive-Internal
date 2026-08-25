#pragma once
#include "unitysdk.h"

class IntTabController;
class MXButton;
class UILabel;
namespace MX::Data { class EventContentBuffGroupData; }
namespace MX::GameLogic::DBModel { class EventContentMainStageSaveDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIEVENTBUFFSELECTPOPUP_SETINFO_OFFSET UNITYSDK_OFFSET(0x2420960)
#define UIEVENTBUFFSELECTPOPUP_ONTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x2420C30)
#define UIEVENTBUFFSELECTPOPUP___N__0_OFFSET UNITYSDK_OFFSET(0x2420C40)
#define UIEVENTBUFFSELECTPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2420C50)
#define UIEVENTBUFFSELECTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2420E50)
#define UIEVENTBUFFSELECTPOPUP_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2420E60)
#define UIEVENTBUFFSELECTPOPUP_CLOSE_OFFSET UNITYSDK_OFFSET(0x2420EF0)
#define UIEVENTBUFFSELECTPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2420F10)
#define UIEVENTBUFFSELECTPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2420F80)
#define UIEVENTBUFFSELECTPOPUP_ONCLICKSELECTBUTTON_OFFSET UNITYSDK_OFFSET(0x2420FF0)
#define UIEVENTBUFFSELECTPOPUP_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x24210D0)
#define UIEVENTBUFFSELECTPOPUP_HANDLEEVENTCONTENTSELECTBUFFRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2421240)

	inline static constexpr unsigned int UIEventBuffSelectPopup_TypeDefinitionIndex = 5505;

	class UIEventBuffSelectPopup : public Il2CppObject
	{
	public:
		IntTabController* buffTabController; // 0xD8
		MXButton* selectButton; // 0xE0
		UILabel* buffTitle; // 0xE8
		::Il2CppArray<::System::Object*>* uiEventBuffSelectItem; // 0xF0
		::System::Int32 currentSelectBuffIndex; // 0xF8
		::MX::Data::EventContentBuffGroupData* buffGroupData; // 0x100
		::MX::GameLogic::DBModel::EventContentMainStageSaveDB* eventSaveDB; // 0x108
		Il2CppObject* callDeBuffSelectBonusCheck; // 0x110

		::System::Void SetInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFSELECTPOPUP_SETINFO_OFFSET))(nullptr);
		}

		::System::Void OnToggleChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFSELECTPOPUP_ONTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFSELECTPOPUP___N__0_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFSELECTPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFSELECTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFSELECTPOPUP_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFSELECTPOPUP_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::EventContentMainStageSaveDB* arg, ::MX::Data::EventContentBuffGroupData* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentMainStageSaveDB*, ::MX::Data::EventContentBuffGroupData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFSELECTPOPUP_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFSELECTPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSelectButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFSELECTPOPUP_ONCLICKSELECTBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFSELECTPOPUP_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentSelectBuffResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFSELECTPOPUP_HANDLEEVENTCONTENTSELECTBUFFRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

	};

