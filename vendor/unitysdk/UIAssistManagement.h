#pragma once
#include "unitysdk.h"

class MXButton;
class UICommonIndicator;
namespace FlatData { class EchelonType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::DBModel { class ClanAssistRewardInfo; }

#define UIASSISTMANAGEMENT_SETTARGETECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x2207D40)
#define UIASSISTMANAGEMENT___N__0_OFFSET UNITYSDK_OFFSET(0x2207EC0)
#define UIASSISTMANAGEMENT_REQUESTMYASSISTLISTANDCALLBACK_OFFSET UNITYSDK_OFFSET(0x2207ED0)
#define UIASSISTMANAGEMENT_HANDLECLANMYASSISTLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2208000)
#define UIASSISTMANAGEMENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2208100)
#define UIASSISTMANAGEMENT_GETECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x2208270)
#define UIASSISTMANAGEMENT_ONASSISTREWARDPOPUP_OFFSET UNITYSDK_OFFSET(0x2208300)
#define UIASSISTMANAGEMENT_SETECHELONSLOTS_OFFSET UNITYSDK_OFFSET(0x2208430)
#define UIASSISTMANAGEMENT_REQUESTMYASSISTLIST_OFFSET UNITYSDK_OFFSET(0x2208A30)
#define UIASSISTMANAGEMENT_ONCLICKPREV_OFFSET UNITYSDK_OFFSET(0x2208A40)
#define UIASSISTMANAGEMENT_SETPAGEBUTTONS_OFFSET UNITYSDK_OFFSET(0x2208AF0)
#define UIASSISTMANAGEMENT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2208B70)
#define UIASSISTMANAGEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2208BB0)
#define UIASSISTMANAGEMENT_SETUIS_OFFSET UNITYSDK_OFFSET(0x2207E30)
#define UIASSISTMANAGEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2208EB0)
#define UIASSISTMANAGEMENT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2208EC0)
#define UIASSISTMANAGEMENT_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0x2208F50)
#define UIASSISTMANAGEMENT_ONASSISTSETSLOTPOPUP_OFFSET UNITYSDK_OFFSET(0x2209000)

	inline static constexpr unsigned int UIAssistManagement_TypeDefinitionIndex = 4348;

	class UIAssistManagement : public Il2CppObject
	{
	public:
		Il2CppObject* assistManagementEchelons; // 0xD8
		Il2CppObject* echelonTypes; // 0xE0
		MXButton* prevPage; // 0xE8
		MXButton* nextPage; // 0xF0
		UICommonIndicator* indicator; // 0xF8
		::System::Int32 MaxPageNumber; // 0x100
		::System::Int32 CurrentPageNumber; // 0x104
		::System::Int32 EchelonSlotCount; // 0x108
		Il2CppObject* assistSlotDBs; // 0x110

		::System::Void SetTargetEchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT_SETTARGETECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT___N__0_OFFSET))(nullptr);
		}

		::System::Void RequestMyAssistListAndCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT_REQUESTMYASSISTLISTANDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleClanMyAssistListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT_HANDLECLANMYASSISTLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT_ONDESTROY_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* GetEchelonType(::System::Int32 arg)
		{
			return ((::FlatData::EchelonType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT_GETECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnAssistRewardPopup(::MX::GameLogic::DBModel::ClanAssistRewardInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT_ONASSISTREWARDPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void SetEchelonSlots()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT_SETECHELONSLOTS_OFFSET))(nullptr);
		}

		::System::Void RequestMyAssistList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT_REQUESTMYASSISTLIST_OFFSET))(nullptr);
		}

		::System::Void OnClickPrev()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT_ONCLICKPREV_OFFSET))(nullptr);
		}

		::System::Void SetPageButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT_SETPAGEBUTTONS_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetUIs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT_SETUIS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnClickNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT_ONCLICKNEXT_OFFSET))(nullptr);
		}

		::System::Void OnAssistSetSlotPopup(::System::Int32 arg, ::FlatData::EchelonType* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTMANAGEMENT_ONASSISTSETSLOTPOPUP_OFFSET))(arg, arg2, nullptr);
		}

	};

