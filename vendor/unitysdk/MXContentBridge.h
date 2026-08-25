#pragma once
#include "unitysdk.h"

class LoginTask;
namespace FlatData { class EventContentType; }
namespace FlatData { class ContentType; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::NetworkProtocol { class RequestPacket; }

#define MXCONTENTBRIDGE_GETCURRENTSEASONPREFABNAMEPOSTFIX_OFFSET UNITYSDK_OFFSET(0x1EC2500)
#define MXCONTENTBRIDGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EC2530)
#define MXCONTENTBRIDGE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXCONTENTBRIDGE_OPENPOPUPONSTAGECLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXCONTENTBRIDGE_TRYCONTINUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXCONTENTBRIDGE_GET_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXCONTENTBRIDGE_OPENCONTENTLOBBY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXCONTENTBRIDGE_REQUESTCONTENTSAVEDISCARD_OFFSET UNITYSDK_OFFSET(0x1EC2540)
#define MXCONTENTBRIDGE_CONTINUEAFTEROTHERCONTENT_OFFSET UNITYSDK_OFFSET(0x1EC2570)
#define MXCONTENTBRIDGE_GETSTAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1EC2580)
#define MXCONTENTBRIDGE_CO_EVENTLOBBYLOADING_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXCONTENTBRIDGE_TRYGETSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x1EC2590)
#define MXCONTENTBRIDGE_SYNCOTHERCONTENTRESULT_OFFSET UNITYSDK_OFFSET(0x1EC25B0)
#define MXCONTENTBRIDGE_GETCURRENTEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int MXContentBridge_TypeDefinitionIndex = 1758;

	class MXContentBridge : public Il2CppObject
	{
	public:
		::System::String* GetCurrentSeasonPrefabNamePostfix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXCONTENTBRIDGE_GETCURRENTSEASONPREFABNAMEPOSTFIX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXCONTENTBRIDGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXCONTENTBRIDGE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* OpenPopupOnStageClear(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXCONTENTBRIDGE_OPENPOPUPONSTAGECLEAR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryContinue(LoginTask* arg)
		{
			return ((::System::Boolean(*)(LoginTask*, ::PVOID))((::PBYTE)hIl2Cpp + MXCONTENTBRIDGE_TRYCONTINUE_OFFSET))(arg, nullptr);
		}

		::FlatData::EventContentType* get_EventContentType()
		{
			return ((::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXCONTENTBRIDGE_GET_EVENTCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void OpenContentLobby(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXCONTENTBRIDGE_OPENCONTENTLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Void RequestContentSaveDiscard(LoginTask* arg, ::FlatData::ContentType* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(LoginTask*, ::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXCONTENTBRIDGE_REQUESTCONTENTSAVEDISCARD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ContinueAfterOtherContent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXCONTENTBRIDGE_CONTINUEAFTEROTHERCONTENT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* GetStageHistory(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXCONTENTBRIDGE_GETSTAGEHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_EventLobbyLoading(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXCONTENTBRIDGE_CO_EVENTLOBBYLOADING_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetStageInfo(::System::Int64 arg, ::MX::Data::CampaignStageInfo&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::Data::CampaignStageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXCONTENTBRIDGE_TRYGETSTAGEINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncOtherContentResult(::System::Boolean arg, ::MX::NetworkProtocol::RequestPacket* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::MX::NetworkProtocol::RequestPacket*, ::PVOID))((::PBYTE)hIl2Cpp + MXCONTENTBRIDGE_SYNCOTHERCONTENTRESULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetCurrentEventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXCONTENTBRIDGE_GETCURRENTEVENTCONTENTID_OFFSET))(nullptr);
		}

	};

