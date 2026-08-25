#pragma once
#include "unitysdk.h"

class UIGachaInfo;
class UIGachaInfo_LegacyPickup;
class UIGachaInfo_SelectGachaNew;
class UIGachaButtonInfo;
class UIRecruitShopInfo;
class UIGachaBannerTabSelector;
class MXButton;
class GachaCharInfo;
namespace UnityEngine::Video { class VideoPlayer; }
namespace UnityEngine { class Coroutine; }
class UIGachaBannerTab;
namespace MX::Data::Excel { class ShopRecruitExcel; }
namespace MX::NetworkProtocol { class ShopPickupSelectionGachaGetResponse; }
class CharacterObject;

#define UIGACHA_CHECKACTIVETICKETGACHA_OFFSET UNITYSDK_OFFSET(0xA86530)
#define UIGACHA_ONBACK_OFFSET UNITYSDK_OFFSET(0xA86920)
#define UIGACHA_CO_REQUESTBILLINGPURCHASELISTBYNEXON_OFFSET UNITYSDK_OFFSET(0xA86B90)
#define UIGACHA___N__0_OFFSET UNITYSDK_OFFSET(0xA86C10)
#define UIGACHA_ONOPENED_OFFSET UNITYSDK_OFFSET(0xA86C20)
#define UIGACHA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA86FC0)
#define UIGACHA__REQUESTBUYGACHA_G__DEFAULTBUYGACHA|47_0_OFFSET UNITYSDK_OFFSET(0xA870B0)
#define UIGACHA_INITOPENLIST_OFFSET UNITYSDK_OFFSET(0xA87570)
#define UIGACHA_PREPAREVIDEOS_OFFSET UNITYSDK_OFFSET(0xA89010)
#define UIGACHA_ONTABSELECTED_OFFSET UNITYSDK_OFFSET(0xA897F0)
#define UIGACHA_ONCLICKNOTICESELETABLEPOOLBUTTON_OFFSET UNITYSDK_OFFSET(0xA89A80)
#define UIGACHA_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0xA89E30)
#define UIGACHA_GET_TARGETEXCEL_OFFSET UNITYSDK_OFFSET(0xA87430)
#define UIGACHA_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xA89FA0)
#define UIGACHA_SELECTINITIALTAB_OFFSET UNITYSDK_OFFSET(0xA8A110)
#define UIGACHA_REQUESTBUYGACHA_OFFSET UNITYSDK_OFFSET(0xA8A360)
#define UIGACHA_ONCLICKNOTICEPICKUPSELECTGACHABUTTON_OFFSET UNITYSDK_OFFSET(0xA8A980)
#define UIGACHA_DETACHEXTENSIONONFILENAME_OFFSET UNITYSDK_OFFSET(0xA86A90)
#define UIGACHA_CO_PLAYVIDEO_OFFSET UNITYSDK_OFFSET(0xA8AAE0)
#define UIGACHA_SENDTOTITLEFORRESYNC_OFFSET UNITYSDK_OFFSET(0xA86DC0)
#define UIGACHA_ONCLICKNOTICESTUDENTBUTTON_OFFSET UNITYSDK_OFFSET(0xA8AB70)
#define UIGACHA_AWAKE_OFFSET UNITYSDK_OFFSET(0xA8B1C0)
#define UIGACHA__SETDATA_G__SETNOTICE|42_0_OFFSET UNITYSDK_OFFSET(0xA8B790)
#define UIGACHA_ATTACHEXTENSIONONFILENAME_OFFSET UNITYSDK_OFFSET(0xA896C0)
#define UIGACHA_ISCANBUYGACHA_OFFSET UNITYSDK_OFFSET(0xA8B980)
#define UIGACHA__CO_SHOPPICKUPSELECTIONGACHAGETREQUEST_B__32_0_OFFSET UNITYSDK_OFFSET(0xA8CDC0)
#define UIGACHA_CHECKDUPLICATETHREESTARTAB_OFFSET UNITYSDK_OFFSET(0xA88840)
#define UIGACHA_ONCLICKNOTICERATIOBUTTON_OFFSET UNITYSDK_OFFSET(0xA8D170)
#define UIGACHA_ISOPENEVENTTHREESTARGACHA_OFFSET UNITYSDK_OFFSET(0xA88270)
#define UIGACHA_PLAYVIDEO_OFFSET UNITYSDK_OFFSET(0xA8D230)
#define UIGACHA_COWAITANDPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0xA8A0A0)
#define UIGACHA_ASKBUYGACHA_OFFSET UNITYSDK_OFFSET(0xA8D330)
#define UIGACHA_REFRESHUI_OFFSET UNITYSDK_OFFSET(0xA86DA0)
#define UIGACHA_GET_ISCOMPLETETUTORIAL_OFFSET UNITYSDK_OFFSET(0xA881C0)
#define UIGACHA_CO_SHOPPICKUPSELECTIONGACHAGETREQUEST_OFFSET UNITYSDK_OFFSET(0xA8E770)
#define UIGACHA_ONVIDEOPLAYERLOOPPOINTREACHED_OFFSET UNITYSDK_OFFSET(0xA8E800)
#define UIGACHA_SHOWRATIONOTICEPOPUP_OFFSET UNITYSDK_OFFSET(0xA89B30)
#define UIGACHA_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xA8EA00)
#define UIGACHA_GET_TARGETGOODSID_OFFSET UNITYSDK_OFFSET(0xA873A0)
#define UIGACHA_SETGACHATAB_OFFSET UNITYSDK_OFFSET(0xA89800)
#define UIGACHA_GET_FREERECRUITID_OFFSET UNITYSDK_OFFSET(0xA874D0)
#define UIGACHA_HANDLEINTERNALSHOPPICKUPSELECTIONRESPONSE_OFFSET UNITYSDK_OFFSET(0xA8D030)
#define UIGACHA_SETDATA_OFFSET UNITYSDK_OFFSET(0xA8EA90)
#define UIGACHA_TRYBUYGACHA_OFFSET UNITYSDK_OFFSET(0xA8EFD0)

	inline static constexpr unsigned int UIGacha_TypeDefinitionIndex = 7933;

	class UIGacha : public Il2CppObject
	{
	public:
		UIGachaInfo* info; // 0xD8
		UIGachaInfo_LegacyPickup* legacyGachaInfo; // 0xE0
		UIGachaInfo_SelectGachaNew* selectGachaNewInfo; // 0xE8
		UIGachaButtonInfo* gachaButtonInfo; // 0xF0
		UIRecruitShopInfo* recruitShopInfo; // 0xF8
		UIGachaBannerTabSelector* gachaBannerTabSelector; // 0x100
		Il2CppObject* videoPlayers; // 0x108
		MXButton* noticeRatioButton; // 0x110
		MXButton* noticeStudentButton; // 0x118
		MXButton* noticeSelectablePoolButton; // 0x120
		MXButton* noticePickupSelectGachaButton; // 0x128
		GachaCharInfo* gachaCharInfo; // 0x130
		::System::Boolean isVideoExist; // 0x138
		Il2CppObject* filePaths; // 0x140
		::UnityEngine::Video::VideoPlayer* videoPlayer; // 0x148
		Il2CppObject* shopRecruitList; // 0x150
		::System::Int32 videoLoopCount; // 0x158
		::UnityEngine::Coroutine* playVideoCoroutine; // 0x160
		::System::Single requestBuyGachaWaitTime; // 0x168
		::System::Single requestBuyGachaLastTime; // 0x16C

		::System::Void CheckActiveTicketGacha()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_CHECKACTIVETICKETGACHA_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_ONBACK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_RequestBillingPurchaseListByNexon(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_CO_REQUESTBILLINGPURCHASELISTBYNEXON_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA___N__0_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _RequestBuyGacha_g__DefaultBuyGacha|47_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA__REQUESTBUYGACHA_G__DEFAULTBUYGACHA|47_0_OFFSET))(nullptr);
		}

		::System::Void InitOpenList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_INITOPENLIST_OFFSET))(nullptr);
		}

		::System::Void PrepareVideos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_PREPAREVIDEOS_OFFSET))(nullptr);
		}

		::System::Void OnTabSelected(UIGachaBannerTab* arg)
		{
			((::System::Void(*)(UIGachaBannerTab*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_ONTABSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickNoticeSeletablePoolButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_ONCLICKNOTICESELETABLEPOOLBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ShopRecruitExcel* get_targetExcel()
		{
			return ((::MX::Data::Excel::ShopRecruitExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_GET_TARGETEXCEL_OFFSET))(nullptr);
		}

		::System::Void OnApplicationPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_ONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void SelectInitialTab(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_SELECTINITIALTAB_OFFSET))(arg, nullptr);
		}

		::System::Void RequestBuyGacha()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_REQUESTBUYGACHA_OFFSET))(nullptr);
		}

		::System::Void OnClickNoticePickupSelectGachaButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_ONCLICKNOTICEPICKUPSELECTGACHABUTTON_OFFSET))(nullptr);
		}

		::System::Void DetachExtensionOnFileName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_DETACHEXTENSIONONFILENAME_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayVideo()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_CO_PLAYVIDEO_OFFSET))(nullptr);
		}

		::System::Void SendToTitleForResync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_SENDTOTITLEFORRESYNC_OFFSET))(nullptr);
		}

		::System::Void OnClickNoticeStudentButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_ONCLICKNOTICESTUDENTBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _SetData_g__SetNotice|42_0(<>c__DisplayClass42_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass42_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHA__SETDATA_G__SETNOTICE|42_0_OFFSET))(arg, nullptr);
		}

		::System::Void AttachExtensionOnFileName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_ATTACHEXTENSIONONFILENAME_OFFSET))(str, nullptr);
		}

		::System::Boolean IsCanBuyGacha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_ISCANBUYGACHA_OFFSET))(nullptr);
		}

		::System::Void _Co_ShopPickupSelectionGachaGetRequest_b__32_0(::MX::NetworkProtocol::ShopPickupSelectionGachaGetResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ShopPickupSelectionGachaGetResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHA__CO_SHOPPICKUPSELECTIONGACHAGETREQUEST_B__32_0_OFFSET))(arg, nullptr);
		}

		::System::Void CheckDuplicateThreeStarTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_CHECKDUPLICATETHREESTARTAB_OFFSET))(nullptr);
		}

		::System::Void OnClickNoticeRatioButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_ONCLICKNOTICERATIOBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean IsOpenEventThreeStarGacha(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_ISOPENEVENTTHREESTARGACHA_OFFSET))(arg, nullptr);
		}

		::System::Void PlayVideo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_PLAYVIDEO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoWaitAndPlayVideo()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_COWAITANDPLAYVIDEO_OFFSET))(nullptr);
		}

		::System::Void AskBuyGacha()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_ASKBUYGACHA_OFFSET))(nullptr);
		}

		::System::Void RefreshUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_REFRESHUI_OFFSET))(nullptr);
		}

		::System::Boolean get_isCompleteTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_GET_ISCOMPLETETUTORIAL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_ShopPickupSelectionGachaGetRequest()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_CO_SHOPPICKUPSELECTIONGACHAGETREQUEST_OFFSET))(nullptr);
		}

		::System::Void OnVideoPlayerLoopPointReached(::UnityEngine::Video::VideoPlayer* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_ONVIDEOPLAYERLOOPPOINTREACHED_OFFSET))(arg, nullptr);
		}

		::System::Void ShowRatioNoticePopup(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_SHOWRATIONOTICEPOPUP_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Int64 get_targetGoodsId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_GET_TARGETGOODSID_OFFSET))(nullptr);
		}

		::System::Void SetGachaTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_SETGACHATAB_OFFSET))(nullptr);
		}

		Il2CppObject* get_freeRecruitId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_GET_FREERECRUITID_OFFSET))(nullptr);
		}

		::System::Void HandleInternalShopPickupSelectionResponse(::MX::Data::Excel::ShopRecruitExcel* arg, CharacterObject* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_HANDLEINTERNALSHOPPICKUPSELECTIONRESPONSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void TryBuyGacha(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHA_TRYBUYGACHA_OFFSET))(arg, arg2, nullptr);
		}

	};

