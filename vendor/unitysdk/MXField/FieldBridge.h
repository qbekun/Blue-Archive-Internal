#pragma once
#include "../unitysdk.h"

namespace MXField::Core::Save { class FieldSaveRepository; }
namespace MXField::Shared::NetworkProtocol { class FieldInteractionResponse; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Data { class FieldContentStageInfo; }
namespace MX::GameLogic::DBModel { class ContentSaveDB; }
namespace FlatData { class EventContentType; }
class LoginTask;
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }

#define MXFIELD_FIELDBRIDGE_SYNCREQUIRED_OFFSET UNITYSDK_OFFSET(0xE62C10)
#define MXFIELD_FIELDBRIDGE_GETCONTENTNAME_OFFSET UNITYSDK_OFFSET(0xE62CA0)
#define MXFIELD_FIELDBRIDGE_SET_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0xE62DB0)
#define MXFIELD_FIELDBRIDGE_COLOADTABLE_OFFSET UNITYSDK_OFFSET(0xE62DC0)
#define MXFIELD_FIELDBRIDGE_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xE62E50)
#define MXFIELD_FIELDBRIDGE_OPENCONTENTLOBBY_OFFSET UNITYSDK_OFFSET(0xE62E60)
#define MXFIELD_FIELDBRIDGE_HANDLEENTERFIELDLOBBYMESSAGE_OFFSET UNITYSDK_OFFSET(0xE63080)
#define MXFIELD_FIELDBRIDGE_SET_SAVEREPOSITORY_OFFSET UNITYSDK_OFFSET(0xE63410)
#define MXFIELD_FIELDBRIDGE_OPENPOPUPONSTAGECLEAR_OFFSET UNITYSDK_OFFSET(0xE63420)
#define MXFIELD_FIELDBRIDGE_CO_EVENTLOBBYLOADING_OFFSET UNITYSDK_OFFSET(0xE634D0)
#define MXFIELD_FIELDBRIDGE_SET_PREVMASTERYEXP_OFFSET UNITYSDK_OFFSET(0xE63570)
#define MXFIELD_FIELDBRIDGE_SET_PREVMASTERYLEVEL_OFFSET UNITYSDK_OFFSET(0xE63580)
#define MXFIELD_FIELDBRIDGE_COOPENFIELDLOBBY_OFFSET UNITYSDK_OFFSET(0xE63390)
#define MXFIELD_FIELDBRIDGE_GETCURRENTEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xE635B0)
#define MXFIELD_FIELDBRIDGE_COTRYLOADTABLE_OFFSET UNITYSDK_OFFSET(0xE63720)
#define MXFIELD_FIELDBRIDGE_GET_SYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0xE637B0)
#define MXFIELD_FIELDBRIDGE_OPENFIELDLOBBYUI_OFFSET UNITYSDK_OFFSET(0xE637C0)
#define MXFIELD_FIELDBRIDGE_HANDLEFIELDSYNCRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xE63C00)
#define MXFIELD_FIELDBRIDGE_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xE63E50)
#define MXFIELD_FIELDBRIDGE_GET_SAVEREPOSITORY_OFFSET UNITYSDK_OFFSET(0xE63E60)
#define MXFIELD_FIELDBRIDGE_SET_UCWINRESPONSE_OFFSET UNITYSDK_OFFSET(0xE63E70)
#define MXFIELD_FIELDBRIDGE_GET_PREVMASTERYEXP_OFFSET UNITYSDK_OFFSET(0xE63E80)
#define MXFIELD_FIELDBRIDGE_ISALREADYCLEAR_OFFSET UNITYSDK_OFFSET(0xE63E90)
#define MXFIELD_FIELDBRIDGE_GET_PREVMASTERYLEVEL_OFFSET UNITYSDK_OFFSET(0xE63F80)
#define MXFIELD_FIELDBRIDGE_SET_HISTORIES_OFFSET UNITYSDK_OFFSET(0xE63F90)
#define MXFIELD_FIELDBRIDGE_REQUESTSYNC_OFFSET UNITYSDK_OFFSET(0xE62F80)
#define MXFIELD_FIELDBRIDGE_SET_SYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0xE63FB0)
#define MXFIELD_FIELDBRIDGE_RELEASETABLE_OFFSET UNITYSDK_OFFSET(0xE63FC0)
#define MXFIELD_FIELDBRIDGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE64180)
#define MXFIELD_FIELDBRIDGE_SET_NEEDMASTERYLEVELUP_OFFSET UNITYSDK_OFFSET(0xE64190)
#define MXFIELD_FIELDBRIDGE_SET_SERVERSYNCED_OFFSET UNITYSDK_OFFSET(0xE641A0)
#define MXFIELD_FIELDBRIDGE_SET_PROHIBITINITQUESTTRACKERONSTART_OFFSET UNITYSDK_OFFSET(0xE641B0)
#define MXFIELD_FIELDBRIDGE_GET_NEEDMASTERYLEVELUP_OFFSET UNITYSDK_OFFSET(0xE641C0)
#define MXFIELD_FIELDBRIDGE_GET_PROHIBITINITQUESTTRACKERONSTART_OFFSET UNITYSDK_OFFSET(0xE641D0)
#define MXFIELD_FIELDBRIDGE__OPENCONTENTLOBBY_B__61_0_OFFSET UNITYSDK_OFFSET(0xE641E0)
#define MXFIELD_FIELDBRIDGE_GET_HISTORIES_OFFSET UNITYSDK_OFFSET(0xE641F0)
#define MXFIELD_FIELDBRIDGE_COCONTINUEFIELDCONTENTSTAGE_OFFSET UNITYSDK_OFFSET(0xE64200)
#define MXFIELD_FIELDBRIDGE_OPENFIELDLOBBY_OFFSET UNITYSDK_OFFSET(0xE642D0)
#define MXFIELD_FIELDBRIDGE_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xE62D80)
#define MXFIELD_FIELDBRIDGE_GET_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xE64460)
#define MXFIELD_FIELDBRIDGE_TRYCONTINUE_OFFSET UNITYSDK_OFFSET(0xE64470)
#define MXFIELD_FIELDBRIDGE_ISFIELDLOBBYOPENED_OFFSET UNITYSDK_OFFSET(0xE649E0)
#define MXFIELD_FIELDBRIDGE_GET_SERVERSYNCED_OFFSET UNITYSDK_OFFSET(0xE64C20)
#define MXFIELD_FIELDBRIDGE_TRYGETSTAGEINFO_OFFSET UNITYSDK_OFFSET(0xE64C30)
#define MXFIELD_FIELDBRIDGE_GETSTAGEHISTORY_OFFSET UNITYSDK_OFFSET(0xE64D30)
#define MXFIELD_FIELDBRIDGE_SETDATA_OFFSET UNITYSDK_OFFSET(0xE63D80)
#define MXFIELD_FIELDBRIDGE_GET_UCWINRESPONSE_OFFSET UNITYSDK_OFFSET(0xE64E00)
#define MXFIELD_FIELDBRIDGE_SETSYNCREQUIRED_OFFSET UNITYSDK_OFFSET(0xE64E10)
#define MXFIELD_FIELDBRIDGE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE64E20)
#define MXFIELD_FIELDBRIDGE_GET_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0xE65030)

namespace MXField
{
	inline static constexpr unsigned int FieldBridge_TypeDefinitionIndex = 10500;

	class FieldBridge : public Il2CppObject
	{
	public:
		::MXField::Core::Save::FieldSaveRepository* _SaveRepository_k__BackingField; // 0x18
		Il2CppObject* _Histories_k__BackingField; // 0x20
		::System::Action* _SyncCallback_k__BackingField; // 0x28
		::System::Boolean _IsDataLoaded_k__BackingField; // 0x30
		::System::Boolean _ServerSynced_k__BackingField; // 0x31
		::System::Boolean _ProhibitInitQuestTrackerOnStart_k__BackingField; // 0x32
		::System::Boolean _IsWin_k__BackingField; // 0x33
		::MXField::Shared::NetworkProtocol::FieldInteractionResponse* _UCWinResponse_k__BackingField; // 0x38
		::System::Boolean _NeedMasteryLevelup_k__BackingField; // 0x40
		::System::Int64 _PrevMasteryLevel_k__BackingField; // 0x48
		::System::Int64 _PrevMasteryExp_k__BackingField; // 0x50

		::System::Boolean SyncRequired(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_SYNCREQUIRED_OFFSET))(arg, nullptr);
		}

		::System::String* GetContentName(::System::Int64 arg)
		{
			return ((::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_GETCONTENTNAME_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsDataLoaded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_SET_ISDATALOADED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoLoadTable()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_COLOADTABLE_OFFSET))(nullptr);
		}

		::System::Void set_IsWin(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_SET_ISWIN_OFFSET))(arg, nullptr);
		}

		::System::Void OpenContentLobby(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_OPENCONTENTLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEnterFieldLobbyMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_HANDLEENTERFIELDLOBBYMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SaveRepository(::MXField::Core::Save::FieldSaveRepository* arg)
		{
			((::System::Void(*)(::MXField::Core::Save::FieldSaveRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_SET_SAVEREPOSITORY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* OpenPopupOnStageClear(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_OPENPOPUPONSTAGECLEAR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* Co_EventLobbyLoading(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_CO_EVENTLOBBYLOADING_OFFSET))(arg, nullptr);
		}

		::System::Void set_PrevMasteryExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_SET_PREVMASTERYEXP_OFFSET))(arg, nullptr);
		}

		::System::Void set_PrevMasteryLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_SET_PREVMASTERYLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoOpenFieldLobby(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_COOPENFIELDLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetCurrentEventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_GETCURRENTEVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoTryLoadTable()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_COTRYLOADTABLE_OFFSET))(nullptr);
		}

		::System::Action* get_SyncCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_GET_SYNCCALLBACK_OFFSET))(nullptr);
		}

		::System::Void OpenFieldLobbyUI(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_OPENFIELDLOBBYUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleFieldSyncResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_HANDLEFIELDSYNCRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_GET_ISWIN_OFFSET))(nullptr);
		}

		::MXField::Core::Save::FieldSaveRepository* get_SaveRepository()
		{
			return ((::MXField::Core::Save::FieldSaveRepository*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_GET_SAVEREPOSITORY_OFFSET))(nullptr);
		}

		::System::Void set_UCWinResponse(::MXField::Shared::NetworkProtocol::FieldInteractionResponse* arg)
		{
			((::System::Void(*)(::MXField::Shared::NetworkProtocol::FieldInteractionResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_SET_UCWINRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PrevMasteryExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_GET_PREVMASTERYEXP_OFFSET))(nullptr);
		}

		::System::Boolean IsAlreadyClear(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_ISALREADYCLEAR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PrevMasteryLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_GET_PREVMASTERYLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Histories(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_SET_HISTORIES_OFFSET))(arg, nullptr);
		}

		::System::Void RequestSync(::System::Int64 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_REQUESTSYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_SyncCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_SET_SYNCCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_RELEASETABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_NeedMasteryLevelup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_SET_NEEDMASTERYLEVELUP_OFFSET))(arg, nullptr);
		}

		::System::Void set_ServerSynced(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_SET_SERVERSYNCED_OFFSET))(arg, nullptr);
		}

		::System::Void set_ProhibitInitQuestTrackerOnStart(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_SET_PROHIBITINITQUESTTRACKERONSTART_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_NeedMasteryLevelup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_GET_NEEDMASTERYLEVELUP_OFFSET))(nullptr);
		}

		::System::Boolean get_ProhibitInitQuestTrackerOnStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_GET_PROHIBITINITQUESTTRACKERONSTART_OFFSET))(nullptr);
		}

		::System::Void _OpenContentLobby_b__61_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE__OPENCONTENTLOBBY_B__61_0_OFFSET))(nullptr);
		}

		Il2CppObject* get_Histories()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_GET_HISTORIES_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoContinueFieldContentStage(::MX::Data::FieldContentStageInfo* arg, ::MX::GameLogic::DBModel::ContentSaveDB* arg2, ::System::Int64 arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::FieldContentStageInfo*, ::MX::GameLogic::DBModel::ContentSaveDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_COCONTINUEFIELDCONTENTSTAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OpenFieldLobby(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_OPENFIELDLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_GET_SEASONID_OFFSET))(nullptr);
		}

		::FlatData::EventContentType* get_EventContentType()
		{
			return ((::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_GET_EVENTCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean TryContinue(LoginTask* arg)
		{
			return ((::System::Boolean(*)(LoginTask*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_TRYCONTINUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFieldLobbyOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_ISFIELDLOBBYOPENED_OFFSET))(nullptr);
		}

		::System::Boolean get_ServerSynced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_GET_SERVERSYNCED_OFFSET))(nullptr);
		}

		::System::Boolean TryGetStageInfo(::System::Int64 arg, ::MX::Data::CampaignStageInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::Data::CampaignStageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_TRYGETSTAGEINFO_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* GetStageHistory(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_GETSTAGEHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MXField::Core::Save::FieldSaveRepository* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MXField::Core::Save::FieldSaveRepository*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::MXField::Shared::NetworkProtocol::FieldInteractionResponse* get_UCWinResponse()
		{
			return ((::MXField::Shared::NetworkProtocol::FieldInteractionResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_GET_UCWINRESPONSE_OFFSET))(nullptr);
		}

		::System::Void SetSyncRequired(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_SETSYNCREQUIRED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDataLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDBRIDGE_GET_ISDATALOADED_OFFSET))(nullptr);
		}

	};
}

