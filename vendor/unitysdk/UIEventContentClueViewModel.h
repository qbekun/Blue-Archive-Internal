#pragma once
#include "unitysdk.h"

class IEventContentClueService;
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::Data::Excel { class EventContentClueSearchExcel; }
namespace MX::Data::DataModel { class EventContentClueSearchRoundInfo; }
class ClueRoundProgress;
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace Cysharp::Threading::Tasks { class UniTask; }
class ClueSlotState;
namespace MX::GameLogic::DBModel { class ClueSearchSaveDB; }

#define UIEVENTCONTENTCLUEVIEWMODEL_SETEVENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x249AC20)
#define UIEVENTCONTENTCLUEVIEWMODEL_REMOVE_ONHINTTEXTCHANGED_OFFSET UNITYSDK_OFFSET(0x249AC60)
#define UIEVENTCONTENTCLUEVIEWMODEL_REMOVE_ONROUNDPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x249AD00)
#define UIEVENTCONTENTCLUEVIEWMODEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x249AA40)
#define UIEVENTCONTENTCLUEVIEWMODEL_REMOVE_ONSLOTSCHANGED_OFFSET UNITYSDK_OFFSET(0x249ADA0)
#define UIEVENTCONTENTCLUEVIEWMODEL_ADD_ONSLOTSCHANGED_OFFSET UNITYSDK_OFFSET(0x249AE40)
#define UIEVENTCONTENTCLUEVIEWMODEL_ADD_ONROUNDPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x249AEE0)
#define UIEVENTCONTENTCLUEVIEWMODEL_INITIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x2497590)
#define UIEVENTCONTENTCLUEVIEWMODEL_CALCSLOTSTATE_OFFSET UNITYSDK_OFFSET(0x249AF80)
#define UIEVENTCONTENTCLUEVIEWMODEL_REFRESHALL_OFFSET UNITYSDK_OFFSET(0x249AF90)
#define UIEVENTCONTENTCLUEVIEWMODEL_ADD_ONHINTTEXTCHANGED_OFFSET UNITYSDK_OFFSET(0x249B0A0)
#define UIEVENTCONTENTCLUEVIEWMODEL_SET_LASTREGISTERREWARDS_OFFSET UNITYSDK_OFFSET(0x249B140)
#define UIEVENTCONTENTCLUEVIEWMODEL_SET_LASTROUNDREWARDS_OFFSET UNITYSDK_OFFSET(0x249B160)
#define UIEVENTCONTENTCLUEVIEWMODEL_GET_CLUESEARCHEXCEL_OFFSET UNITYSDK_OFFSET(0x249B180)
#define UIEVENTCONTENTCLUEVIEWMODEL_GET_LASTREGISTERREWARDS_OFFSET UNITYSDK_OFFSET(0x249B190)
#define UIEVENTCONTENTCLUEVIEWMODEL_ADD_ONROUNDCLEARPAGECHANGED_OFFSET UNITYSDK_OFFSET(0x249B1A0)
#define UIEVENTCONTENTCLUEVIEWMODEL_REMOVE_ONSLOTCLUEHINTREQUESTED_OFFSET UNITYSDK_OFFSET(0x249B240)
#define UIEVENTCONTENTCLUEVIEWMODEL_GET_LASTROUNDREWARDS_OFFSET UNITYSDK_OFFSET(0x249B2E0)
#define UIEVENTCONTENTCLUEVIEWMODEL_ADD_ONCLAIMBUTTONINTERACTABLECHANGED_OFFSET UNITYSDK_OFFSET(0x249B2F0)
#define UIEVENTCONTENTCLUEVIEWMODEL_SET_CLUESEARCHEXCEL_OFFSET UNITYSDK_OFFSET(0x249B390)
#define UIEVENTCONTENTCLUEVIEWMODEL_GETOWNEDAMOUNT_OFFSET UNITYSDK_OFFSET(0x249B3B0)
#define UIEVENTCONTENTCLUEVIEWMODEL_ONCLICKCLAIMROUNDREWARDASYNC_OFFSET UNITYSDK_OFFSET(0x2499110)
#define UIEVENTCONTENTCLUEVIEWMODEL_TRYGETTOTALREWARDROUNDINFOS_OFFSET UNITYSDK_OFFSET(0x249B4A0)
#define UIEVENTCONTENTCLUEVIEWMODEL_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x249B550)
#define UIEVENTCONTENTCLUEVIEWMODEL_ONCLICKREGISTERSLOTASYNC_OFFSET UNITYSDK_OFFSET(0x2498960)
#define UIEVENTCONTENTCLUEVIEWMODEL_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x249B7A0)
#define UIEVENTCONTENTCLUEVIEWMODEL_ADD_ONSLOTCLUEHINTREQUESTED_OFFSET UNITYSDK_OFFSET(0x249B7B0)
#define UIEVENTCONTENTCLUEVIEWMODEL_RELOADROUNDASYNC_OFFSET UNITYSDK_OFFSET(0x24998F0)
#define UIEVENTCONTENTCLUEVIEWMODEL_BUILDSLOTSFROMSERVERSTATE_OFFSET UNITYSDK_OFFSET(0x249B850)
#define UIEVENTCONTENTCLUEVIEWMODEL_REMOVE_ONROUNDCLEARPAGECHANGED_OFFSET UNITYSDK_OFFSET(0x249C040)
#define UIEVENTCONTENTCLUEVIEWMODEL_REMOVE_ONCLAIMBUTTONINTERACTABLECHANGED_OFFSET UNITYSDK_OFFSET(0x249C0E0)
#define UIEVENTCONTENTCLUEVIEWMODEL_GET_CURRENTCULPRITIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x249C180)
#define UIEVENTCONTENTCLUEVIEWMODEL_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x249C1A0)
#define UIEVENTCONTENTCLUEVIEWMODEL_REQUESTSHOWSLOTCLUEHINT_OFFSET UNITYSDK_OFFSET(0x249C1B0)

	inline static constexpr unsigned int UIEventContentClueViewModel_TypeDefinitionIndex = 5770;

	class UIEventContentClueViewModel : public Il2CppObject
	{
	public:
		Il2CppObject* OnHintTextChanged; // 0x10
		Il2CppObject* OnSlotClueHintRequested; // 0x18
		Il2CppObject* OnSlotsChanged; // 0x20
		Il2CppObject* OnRoundProgressChanged; // 0x28
		Il2CppObject* OnClaimButtonInteractableChanged; // 0x30
		Il2CppObject* OnRoundClearPageChanged; // 0x38
		IEventContentClueService* _service; // 0x40
		::MX::Data::EventContentSeasonInfo* _SeasonInfo_k__BackingField; // 0x48
		::MX::Data::Excel::EventContentClueSearchExcel* _ClueSearchExcel_k__BackingField; // 0x50
		::System::Int64 _eventContentId; // 0x60
		::MX::Data::DataModel::EventContentClueSearchRoundInfo* _currentRoundConfig; // 0x68
		Il2CppObject* _slots; // 0x70
		ClueRoundProgress* _progress; // 0x78
		::System::Int32 _currentRoundId; // 0x80
		::MX::GameLogic::Parcel::ParcelResultDB* _LastRegisterRewards_k__BackingField; // 0x88
		::MX::GameLogic::Parcel::ParcelResultDB* _LastRoundRewards_k__BackingField; // 0x90

		::System::Void SetEventContext(::MX::Data::EventContentSeasonInfo* arg, ::MX::Data::Excel::EventContentClueSearchExcel* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::MX::Data::Excel::EventContentClueSearchExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_SETEVENTCONTEXT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void remove_OnHintTextChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_REMOVE_ONHINTTEXTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnRoundProgressChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_REMOVE_ONROUNDPROGRESSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(IEventContentClueService* arg)
		{
			((::System::Void(*)(IEventContentClueService*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnSlotsChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_REMOVE_ONSLOTSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnSlotsChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_ADD_ONSLOTSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnRoundProgressChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_ADD_ONROUNDPROGRESSCHANGED_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* InitializeAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_INITIALIZEASYNC_OFFSET))(nullptr);
		}

		ClueSlotState* CalcSlotState(::System::Boolean arg, ::System::Boolean arg2)
		{
			return ((ClueSlotState*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_CALCSLOTSTATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_REFRESHALL_OFFSET))(nullptr);
		}

		::System::Void add_OnHintTextChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_ADD_ONHINTTEXTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void set_LastRegisterRewards(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_SET_LASTREGISTERREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_LastRoundRewards(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_SET_LASTROUNDREWARDS_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentClueSearchExcel* get_ClueSearchExcel()
		{
			return ((::MX::Data::Excel::EventContentClueSearchExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_GET_CLUESEARCHEXCEL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_LastRegisterRewards()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_GET_LASTREGISTERREWARDS_OFFSET))(nullptr);
		}

		::System::Void add_OnRoundClearPageChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_ADD_ONROUNDCLEARPAGECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnSlotClueHintRequested(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_REMOVE_ONSLOTCLUEHINTREQUESTED_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_LastRoundRewards()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_GET_LASTROUNDREWARDS_OFFSET))(nullptr);
		}

		::System::Void add_OnClaimButtonInteractableChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_ADD_ONCLAIMBUTTONINTERACTABLECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClueSearchExcel(::MX::Data::Excel::EventContentClueSearchExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentClueSearchExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_SET_CLUESEARCHEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetOwnedAmount(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_GETOWNEDAMOUNT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnClickClaimRoundRewardAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_ONCLICKCLAIMROUNDREWARDASYNC_OFFSET))(nullptr);
		}

		::System::Boolean TryGetTotalRewardRoundInfos(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_TRYGETTOTALREWARDROUNDINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateProgress()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_UPDATEPROGRESS_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnClickRegisterSlotAsync(::System::Int32 arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_ONCLICKREGISTERSLOTASYNC_OFFSET))(arg, nullptr);
		}

		::MX::Data::EventContentSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::EventContentSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void add_OnSlotClueHintRequested(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_ADD_ONSLOTCLUEHINTREQUESTED_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* ReloadRoundAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_RELOADROUNDASYNC_OFFSET))(nullptr);
		}

		::System::Void BuildSlotsFromServerState(::MX::GameLogic::DBModel::ClueSearchSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClueSearchSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_BUILDSLOTSFROMSERVERSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnRoundClearPageChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_REMOVE_ONROUNDCLEARPAGECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnClaimButtonInteractableChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_REMOVE_ONCLAIMBUTTONINTERACTABLECHANGED_OFFSET))(arg, nullptr);
		}

		::System::String* get_CurrentCulpritImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_GET_CURRENTCULPRITIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void set_SeasonInfo(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void RequestShowSlotClueHint(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEVIEWMODEL_REQUESTSHOWSLOTCLUEHINT_OFFSET))(str, str2, nullptr);
		}

	};

