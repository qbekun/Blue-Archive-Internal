#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class Animation; }
class UILabel;
class UIGrid;
class CafeCharacterBubble;
class FunctionalFurnitureBubble;
namespace UnityEngine { class GameObject; }
class UISprite;
class UILobbyScreenshotMode;
class UICafeTimers;
class UICafeTicketInvite;
class UICafeLeftTopMenu;
namespace UnityEngine { class AnimationClip; }
class UICafeTravelUserInfo;
class UICafeBottomCenterMenu;
namespace UnityEngine { class Camera; }
class CafeGiveGiftProcess;
class CafeCharacterLoader;
namespace UnityEngine { class Coroutine; }
class CafeFurnitureLoader;
class FurnitureInteractionPopulator;
class UICafePresentList;
class UICafeCharacterList;
class CafeTerrain;
class CafeInputHandler;
namespace MX::Core::Math { class IRandomService; }
class CafeInputState;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class CafeCharacter;
namespace FlatData { class BubbleType; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }
class FurnitureTimelineType;
class FunctionalFurniture;
class UIPopup_System;

#define UICAFE_HANDLECAFEINFOSYNCMESSAGE_OFFSET UNITYSDK_OFFSET(0x226F180)
#define UICAFE_LOADBUBBLE_OFFSET UNITYSDK_OFFSET(0x226F770)
#define UICAFE_SETCURRENTCAFEDBID_OFFSET UNITYSDK_OFFSET(0x226F890)
#define UICAFE___N__0_OFFSET UNITYSDK_OFFSET(0x226F930)
#define UICAFE_ONFINISHSUMMONCHARACTER_OFFSET UNITYSDK_OFFSET(0x226F940)
#define UICAFE_SET_INPUTHANDLER_OFFSET UNITYSDK_OFFSET(0x226FAF0)
#define UICAFE_SHOWVISITOR_OFFSET UNITYSDK_OFFSET(0x226FB10)
#define UICAFE_ONCLICKMENUOPEN_OFFSET UNITYSDK_OFFSET(0x226FBA0)
#define UICAFE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x226FC70)
#define UICAFE_STOPMONOLOGUETIMER_OFFSET UNITYSDK_OFFSET(0x2270360)
#define UICAFE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x2270380)
#define UICAFE_ONCLICKENDPLACEMODE_OFFSET UNITYSDK_OFFSET(0x22709D0)
#define UICAFE_TRYPICKMONOLOGUECHARACTER_OFFSET UNITYSDK_OFFSET(0x22715C0)
#define UICAFE_ONCLICKPRESET_OFFSET UNITYSDK_OFFSET(0x22717F0)
#define UICAFE_GET_HOVERPRESENTCHARACTERCARDS_OFFSET UNITYSDK_OFFSET(0x2271890)
#define UICAFE_ENTERSCREENSHOTMODE_OFFSET UNITYSDK_OFFSET(0x22718B0)
#define UICAFE_DETACHCHARACTERS_OFFSET UNITYSDK_OFFSET(0x2271AD0)
#define UICAFE_ONFURNITURETIMELINEFINISH_OFFSET UNITYSDK_OFFSET(0x2271B50)
#define UICAFE_SHOWPOPUPS_OFFSET UNITYSDK_OFFSET(0x2271C10)
#define UICAFE_CANHANDLELEFTBOTTOMMENU_OFFSET UNITYSDK_OFFSET(0x2270B00)
#define UICAFE_ATTACHCHARACTERSBYFURNITUREID_OFFSET UNITYSDK_OFFSET(0x2271F00)
#define UICAFE_GETSORTEDCAFECAMERADISTANCEDATA_OFFSET UNITYSDK_OFFSET(0x2272140)
#define UICAFE_ONCLICKCAFECURRENCYSTACKBUTTON_OFFSET UNITYSDK_OFFSET(0x22722D0)
#define UICAFE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22723A0)
#define UICAFE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x22725B0)
#define UICAFE_ONCLICKSTOREALL_OFFSET UNITYSDK_OFFSET(0x2272640)
#define UICAFE_GET_INPUTHANDLER_OFFSET UNITYSDK_OFFSET(0x2272730)
#define UICAFE_ONCLICKCLOSEGIVEPRESENT_OFFSET UNITYSDK_OFFSET(0x2272740)
#define UICAFE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x22727D0)
#define UICAFE_CREATEFUNCTIONALFURNITUREBUBBLE_OFFSET UNITYSDK_OFFSET(0x2272BF0)
#define UICAFE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2272EB0)
#define UICAFE_ONPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0x2272EE0)
#define UICAFE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2273390)
#define UICAFE_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x2273540)
#define UICAFE_HIDEMONOLOGUEBUBBLES_OFFSET UNITYSDK_OFFSET(0x2272F30)
#define UICAFE_HANDLECLOSEFAVORDIRECTINGMESSAGE_OFFSET UNITYSDK_OFFSET(0x2273550)
#define UICAFE_CLEARBEFORECHANGECAFE_OFFSET UNITYSDK_OFFSET(0x2273DC0)
#define UICAFE_ONCLICKINVENTORY_OFFSET UNITYSDK_OFFSET(0x2273E90)
#define UICAFE_HASCURRENTCAFEPURCHASEDTICKET_OFFSET UNITYSDK_OFFSET(0x2274010)
#define UICAFE_ONGIVEPROCESSEND_OFFSET UNITYSDK_OFFSET(0x2274040)
#define UICAFE_GETVISITINGCHARACTER_OFFSET UNITYSDK_OFFSET(0x2274310)
#define UICAFE_REFRESHCAFEINFO_OFFSET UNITYSDK_OFFSET(0x226F250)
#define UICAFE_ONCLICKMENUCLOSE_OFFSET UNITYSDK_OFFSET(0x22745F0)
#define UICAFE_AWAKE_OFFSET UNITYSDK_OFFSET(0x22746C0)
#define UICAFE_GET_SELECTEDFURNITURESERVERID_OFFSET UNITYSDK_OFFSET(0x2275590)
#define UICAFE_SETFURNITUREBUBBLES_OFFSET UNITYSDK_OFFSET(0x2271FB0)
#define UICAFE_SHOWNOSPACEFORVISITOR_OFFSET UNITYSDK_OFFSET(0x22755A0)
#define UICAFE__AWAKE_B__71_0_OFFSET UNITYSDK_OFFSET(0x2275630)
#define UICAFE_SHOWFURNITUREWARNINGS_OFFSET UNITYSDK_OFFSET(0x2275750)
#define UICAFE_CONFIRMSTOREALL_OFFSET UNITYSDK_OFFSET(0x22757E0)
#define UICAFE_SETCAMERABYSAVEDATA_OFFSET UNITYSDK_OFFSET(0x2275880)
#define UICAFE_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x2275B30)
#define UICAFE_CLOSEFURNITUREBUBBLES_OFFSET UNITYSDK_OFFSET(0x2271A50)
#define UICAFE_ONCLICKCAFEINFOBUTTON_OFFSET UNITYSDK_OFFSET(0x2275C80)
#define UICAFE__ONFINISHSUMMONCHARACTER_B__102_0_OFFSET UNITYSDK_OFFSET(0x2275D50)
#define UICAFE_STARTGIVEGIFT_OFFSET UNITYSDK_OFFSET(0x2275E60)
#define UICAFE__CLEANUP3D_G__YIELDDESTROYCAFEROOT|83_0_OFFSET UNITYSDK_OFFSET(0x22760C0)
#define UICAFE_SETCAMERA_OFFSET UNITYSDK_OFFSET(0x2276150)
#define UICAFE__AWAKE_B__71_1_OFFSET UNITYSDK_OFFSET(0x22761E0)
#define UICAFE_ONSTARTSUMMONCHARACTER_OFFSET UNITYSDK_OFFSET(0x2276300)
#define UICAFE_REFRESHRANKUPREDDOT_OFFSET UNITYSDK_OFFSET(0x22744A0)
#define UICAFE_GET_MONOLOGUEINTERVAL_OFFSET UNITYSDK_OFFSET(0x2276400)
#define UICAFE_CO_MONOLOGUETIMER_OFFSET UNITYSDK_OFFSET(0x22764A0)
#define UICAFE_SET_SELECTEDFURNITURESERVERID_OFFSET UNITYSDK_OFFSET(0x2276540)
#define UICAFE_HANDLEREFRESHCAFEBUBBLEORDERMESSAGE_OFFSET UNITYSDK_OFFSET(0x2276550)
#define UICAFE_ONCLOSECAFEINFOPOPUP_OFFSET UNITYSDK_OFFSET(0x2276590)
#define UICAFE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2276610)
#define UICAFE_GET_ISGIVEGIFTPROCESSSTARTED_OFFSET UNITYSDK_OFFSET(0x2276710)
#define UICAFE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2276730)
#define UICAFE_UNLOADBUBBLE_OFFSET UNITYSDK_OFFSET(0x22706B0)
#define UICAFE_ONSCREENSHOTEND_OFFSET UNITYSDK_OFFSET(0x2276A50)
#define UICAFE_CO_LOAD3D_OFFSET UNITYSDK_OFFSET(0x2276A90)
#define UICAFE_ONMONOLOGUEFINISH_OFFSET UNITYSDK_OFFSET(0x226FA00)
#define UICAFE_ONCLICKSTARTPLACEMODE_OFFSET UNITYSDK_OFFSET(0x2276B20)
#define UICAFE_ONBACK_OFFSET UNITYSDK_OFFSET(0x2276C40)
#define UICAFE_SORTBUBBLEORDERS_OFFSET UNITYSDK_OFFSET(0x2276570)
#define UICAFE_SET_CURRENTCAFEDBID_OFFSET UNITYSDK_OFFSET(0x2277100)
#define UICAFE_INITMENUONOPENED_OFFSET UNITYSDK_OFFSET(0x2277110)
#define UICAFE_SHOWNEWCAFEOPEN_OFFSET UNITYSDK_OFFSET(0x22771A0)
#define UICAFE_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x2277220)
#define UICAFE_GET_CANENTERSCREENSHOTMODE_OFFSET UNITYSDK_OFFSET(0x2277230)
#define UICAFE__ENTERSCREENSHOTMODE_B__96_0_OFFSET UNITYSDK_OFFSET(0x2277310)
#define UICAFE_PLAYFURNITUREBGM_OFFSET UNITYSDK_OFFSET(0x2277420)
#define UICAFE_CLEANUP3D_OFFSET UNITYSDK_OFFSET(0x2270790)
#define UICAFE_SETBUBBLEORDERS_OFFSET UNITYSDK_OFFSET(0x2277030)
#define UICAFE_REFRESHCAFECURRENTSTACK_OFFSET UNITYSDK_OFFSET(0x2274340)
#define UICAFE_SETCAFECAMERA_OFFSET UNITYSDK_OFFSET(0x22774D0)
#define UICAFE_INITONCAFEOPEN_OFFSET UNITYSDK_OFFSET(0x2276940)
#define UICAFE_ATTACHCHARACTERS_OFFSET UNITYSDK_OFFSET(0x2275DE0)
#define UICAFE_REFRESHINFOWIDGET_OFFSET UNITYSDK_OFFSET(0x2270B30)
#define UICAFE__ONCLICKSTOREALL_B__133_0_OFFSET UNITYSDK_OFFSET(0x2277910)
#define UICAFE_TRYREQUESTINTERACTION_OFFSET UNITYSDK_OFFSET(0x22779B0)
#define UICAFE_ONCLICKGIVEPRESENT_OFFSET UNITYSDK_OFFSET(0x2277A80)
#define UICAFE_CO_DESTROYINGONBACK_OFFSET UNITYSDK_OFFSET(0x2277BC0)
#define UICAFE_ONCLICKGOTOSCREENSHOT_OFFSET UNITYSDK_OFFSET(0x2277C50)
#define UICAFE_ONCHANGEFURNITUREINTERACTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x2277C60)
#define UICAFE_REMOVEFURNITUREINTERACTION_OFFSET UNITYSDK_OFFSET(0x2277CF0)
#define UICAFE_ONPRESENTHOVERED_OFFSET UNITYSDK_OFFSET(0x2276DB0)
#define UICAFE_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x2277D90)
#define UICAFE_SETMAINCAMERA_OFFSET UNITYSDK_OFFSET(0x2270420)
#define UICAFE_SAVECAFECAMERAINFO_OFFSET UNITYSDK_OFFSET(0x226FED0)
#define UICAFE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x2277DA0)
#define UICAFE_GET_CURRENTCAFEDBID_OFFSET UNITYSDK_OFFSET(0x2277DB0)
#define UICAFE_CHANGECURRENTCAFEDB_OFFSET UNITYSDK_OFFSET(0x2277DC0)

	inline static constexpr unsigned int UICafe_TypeDefinitionIndex = 4644;

	class UICafe : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		::UnityEngine::Animation* menuAnimation; // 0xE0
		MXButton* menuOpenButton; // 0xE8
		MXButton* menuCloseButton; // 0xF0
		MXButton* startPlaceModeButton; // 0xF8
		MXButton* endPlaceModeButton; // 0x100
		MXButton* givePresentButton; // 0x108
		Il2CppObject* inventoryButtons; // 0x110
		MXButton* presetButton; // 0x118
		Il2CppObject* storeAllButtons; // 0x120
		Il2CppObject* infoWidgetsTohide; // 0x128
		UILabel* infoLabel; // 0x130
		UIGrid* editModeGrid; // 0x138
		CafeCharacterBubble* bubblePrefab; // 0x140
		FunctionalFurnitureBubble* FurnitureBubble; // 0x148
		MXButton* cafeInfoButton; // 0x150
		UILabel* cafeComfortLabel; // 0x158
		MXButton* cafeCurrencyStackButton; // 0x160
		UILabel* cafeCurrencyStackRatioLabel; // 0x168
		::UnityEngine::GameObject* cafeCurrentStack_CanReceive; // 0x170
		::UnityEngine::GameObject* cafeCurrentStack_IsMax; // 0x178
		UISprite* cafeCurrentStack_YellowRedDot; // 0x180
		UISprite* cafeRankUpRedDot; // 0x188
		MXButton* goToScreenShot; // 0x190
		MXButton* backFromScreenShot; // 0x198
		UILobbyScreenshotMode* screenshotMode; // 0x1A0
		MXButton* closePresentList; // 0x1A8
		UICafeTimers* timer; // 0x1B0
		UICafeTicketInvite* ticketInvite; // 0x1B8
		UICafeLeftTopMenu* leftTopMenu; // 0x1C0
		::UnityEngine::AnimationClip* myCafeUIAnimClip; // 0x1C8
		::UnityEngine::AnimationClip* travelCafeUIAnimClip; // 0x1D0
		UICafeTravelUserInfo* travelUserInfo; // 0x1D8
		Il2CppObject* bubblePool; // 0x1E0
		::System::Int32 defaultCafeCharacterCount; // 0x1E8
		Il2CppObject* displayedBubbles; // 0x1F0
		UICafeBottomCenterMenu* bottomCenterMenu; // 0x1F8
		::UnityEngine::Camera* cafeCamera; // 0x200
		CafeGiveGiftProcess* cafeGiveGiftProcess; // 0x208
		::UnityEngine::GameObject* cafeRoot; // 0x210
		CafeCharacterLoader* characterLoader; // 0x218
		::UnityEngine::Coroutine* enterScreenshotModeCoroutine; // 0x220
		CafeFurnitureLoader* furnitureLoader; // 0x228
		FurnitureInteractionPopulator* interactionPopulator; // 0x230
		::UnityEngine::Camera* mainCamera; // 0x238
		::UnityEngine::Coroutine* menuAni; // 0x240
		::System::Single monologueInterval; // 0x248
		::UnityEngine::Coroutine* monologueTimer; // 0x250
		UICafePresentList* presentList; // 0x258
		UICafeCharacterList* presentCharacterList; // 0x260
		CafeTerrain* terrain; // 0x268
		CafeInputHandler* _InputHandler_k__BackingField; // 0x270
		::MX::Core::Math::IRandomService* _random_k__BackingField; // 0x278
		::System::Int64 _CurrentCafeDBId_k__BackingField; // 0x280
		::System::Int64 previousCafeDBId; // 0x288
		::System::Int64 _SelectedFurnitureServerId_k__BackingField; // 0x290
		CafeInputState* _CurrentState_k__BackingField; // 0x298
		::System::Int64 interactionUniqueId; // 0x2A0

		::System::Boolean HandleCafeInfoSyncMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_HANDLECAFEINFOSYNCMESSAGE_OFFSET))(arg, nullptr);
		}

		CafeCharacterBubble* LoadBubble(CafeCharacter* arg, ::FlatData::BubbleType* arg2, ::System::Boolean arg3)
		{
			return ((CafeCharacterBubble*(*)(CafeCharacter*, ::FlatData::BubbleType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_LOADBUBBLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetCurrentCafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SETCURRENTCAFEDBID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE___N__0_OFFSET))(nullptr);
		}

		::System::Void OnFinishSummonCharacter(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONFINISHSUMMONCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_InputHandler(CafeInputHandler* arg)
		{
			((::System::Void(*)(CafeInputHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SET_INPUTHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ShowVisitor()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SHOWVISITOR_OFFSET))(nullptr);
		}

		::System::Void OnClickMenuOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONCLICKMENUOPEN_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void StopMonologueTimer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_STOPMONOLOGUETIMER_OFFSET))(nullptr);
		}

		::System::Void CleanUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void OnClickEndPlaceMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONCLICKENDPLACEMODE_OFFSET))(nullptr);
		}

		::System::Boolean TryPickMonologueCharacter(CafeCharacterBubble&* arg)
		{
			return ((::System::Boolean(*)(CafeCharacterBubble&*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_TRYPICKMONOLOGUECHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPreset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONCLICKPRESET_OFFSET))(nullptr);
		}

		Il2CppObject* get_HoverPresentCharacterCards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_GET_HOVERPRESENTCHARACTERCARDS_OFFSET))(nullptr);
		}

		::System::Void EnterScreenshotMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ENTERSCREENSHOTMODE_OFFSET))(nullptr);
		}

		::System::Void DetachCharacters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_DETACHCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void OnFurnitureTimelineFinish(FurnitureTimelineType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(FurnitureTimelineType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONFURNITURETIMELINEFINISH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ShowPopups()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SHOWPOPUPS_OFFSET))(nullptr);
		}

		::System::Boolean CanHandleLeftBottomMenu()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_CANHANDLELEFTBOTTOMMENU_OFFSET))(nullptr);
		}

		::System::Void AttachCharactersByFurnitureId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ATTACHCHARACTERSBYFURNITUREID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetSortedCafeCameraDistanceData()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_GETSORTEDCAFECAMERADISTANCEDATA_OFFSET))(nullptr);
		}

		::System::Void OnClickCafeCurrencyStackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONCLICKCAFECURRENCYSTACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnClickStoreAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONCLICKSTOREALL_OFFSET))(nullptr);
		}

		CafeInputHandler* get_InputHandler()
		{
			return ((CafeInputHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_GET_INPUTHANDLER_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseGivePresent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONCLICKCLOSEGIVEPRESENT_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONCLOSED_OFFSET))(nullptr);
		}

		FunctionalFurnitureBubble* CreateFunctionalFurnitureBubble(FunctionalFurniture* arg)
		{
			return ((FunctionalFurnitureBubble*(*)(FunctionalFurniture*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_CREATEFUNCTIONALFURNITUREBUBBLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnPlayVideo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONPLAYVIDEO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::System::Void HideMonologueBubbles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_HIDEMONOLOGUEBUBBLES_OFFSET))(nullptr);
		}

		::System::Boolean HandleCloseFavorDirectingMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_HANDLECLOSEFAVORDIRECTINGMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ClearBeforeChangeCafe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_CLEARBEFORECHANGECAFE_OFFSET))(nullptr);
		}

		::System::Void OnClickInventory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONCLICKINVENTORY_OFFSET))(nullptr);
		}

		::System::Boolean HasCurrentCafePurchasedTicket()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_HASCURRENTCAFEPURCHASEDTICKET_OFFSET))(nullptr);
		}

		::System::Void OnGiveProcessEnd(CafeCharacter* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(CafeCharacter*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONGIVEPROCESSEND_OFFSET))(arg, arg2, nullptr);
		}

		CafeCharacter* GetVisitingCharacter(::System::Int64 arg)
		{
			return ((CafeCharacter*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_GETVISITINGCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshCafeInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_REFRESHCAFEINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickMenuClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONCLICKMENUCLOSE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_AWAKE_OFFSET))(nullptr);
		}

		::System::Int64 get_SelectedFurnitureServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_GET_SELECTEDFURNITURESERVERID_OFFSET))(nullptr);
		}

		::System::Void SetFurnitureBubbles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SETFURNITUREBUBBLES_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ShowNoSpaceForVisitor()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SHOWNOSPACEFORVISITOR_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__71_0(MXButton* arg)
		{
			((::System::Void(*)(MXButton*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE__AWAKE_B__71_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ShowFurnitureWarnings()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SHOWFURNITUREWARNINGS_OFFSET))(nullptr);
		}

		::System::Void ConfirmStoreAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_CONFIRMSTOREALL_OFFSET))(nullptr);
		}

		::System::Void SetCameraBySaveData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SETCAMERABYSAVEDATA_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void CloseFurnitureBubbles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_CLOSEFURNITUREBUBBLES_OFFSET))(nullptr);
		}

		::System::Void OnClickCafeInfoButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONCLICKCAFEINFOBUTTON_OFFSET))(nullptr);
		}

		::System::Void _OnFinishSummonCharacter_b__102_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE__ONFINISHSUMMONCHARACTER_B__102_0_OFFSET))(nullptr);
		}

		::System::Void StartGiveGift(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_STARTGIVEGIFT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _CleanUp3D_g__YieldDestroyCafeRoot|83_0(::UnityEngine::GameObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE__CLEANUP3D_G__YIELDDESTROYCAFEROOT|83_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetCamera(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SETCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void _Awake_b__71_1(MXButton* arg)
		{
			((::System::Void(*)(MXButton*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE__AWAKE_B__71_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnStartSummonCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONSTARTSUMMONCHARACTER_OFFSET))(nullptr);
		}

		::System::Void RefreshRankUpRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_REFRESHRANKUPREDDOT_OFFSET))(nullptr);
		}

		::System::Single get_MonologueInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_GET_MONOLOGUEINTERVAL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_MonologueTimer(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_CO_MONOLOGUETIMER_OFFSET))(arg, nullptr);
		}

		::System::Void set_SelectedFurnitureServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SET_SELECTEDFURNITURESERVERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleRefreshCafeBubbleOrderMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_HANDLEREFRESHCAFEBUBBLEORDERMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnCloseCafeInfoPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONCLOSECAFEINFOPOPUP_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsGiveGiftProcessStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_GET_ISGIVEGIFTPROCESSSTARTED_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void UnloadBubble(CafeCharacterBubble* arg)
		{
			((::System::Void(*)(CafeCharacterBubble*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_UNLOADBUBBLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnScreenshotEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONSCREENSHOTEND_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Load3D()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_CO_LOAD3D_OFFSET))(nullptr);
		}

		::System::Void OnMonologueFinish(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONMONOLOGUEFINISH_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickStartPlaceMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONCLICKSTARTPLACEMODE_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONBACK_OFFSET))(nullptr);
		}

		::System::Void SortBubbleOrders()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SORTBUBBLEORDERS_OFFSET))(nullptr);
		}

		::System::Void set_CurrentCafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SET_CURRENTCAFEDBID_OFFSET))(arg, nullptr);
		}

		::System::Void InitMenuOnOpened()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_INITMENUONOPENED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ShowNewCafeOpen()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SHOWNEWCAFEOPEN_OFFSET))(nullptr);
		}

		::System::Void set_CurrentState(CafeInputState* arg)
		{
			((::System::Void(*)(CafeInputState*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SET_CURRENTSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanEnterScreenshotMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_GET_CANENTERSCREENSHOTMODE_OFFSET))(nullptr);
		}

		::System::Void _EnterScreenshotMode_b__96_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE__ENTERSCREENSHOTMODE_B__96_0_OFFSET))(nullptr);
		}

		::System::Void PlayFurnitureBGM(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_PLAYFURNITUREBGM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CleanUp3D()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_CLEANUP3D_OFFSET))(nullptr);
		}

		::System::Void SetBubbleOrders(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SETBUBBLEORDERS_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshCafeCurrentStack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_REFRESHCAFECURRENTSTACK_OFFSET))(nullptr);
		}

		::System::Void SetCafeCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SETCAFECAMERA_OFFSET))(nullptr);
		}

		::System::Void InitOnCafeOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_INITONCAFEOPEN_OFFSET))(nullptr);
		}

		::System::Void AttachCharacters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ATTACHCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void RefreshInfoWidget(CafeInputState* arg, ::System::Int64 arg2, ::System::String* str)
		{
			((::System::Void(*)(CafeInputState*, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_REFRESHINFOWIDGET_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::Void _OnClickStoreAll_b__133_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE__ONCLICKSTOREALL_B__133_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryRequestInteraction(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_TRYREQUESTINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickGivePresent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONCLICKGIVEPRESENT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_DestroyingOnBack()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_CO_DESTROYINGONBACK_OFFSET))(nullptr);
		}

		::System::Void OnClickGoToScreenshot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONCLICKGOTOSCREENSHOT_OFFSET))(nullptr);
		}

		::System::Void OnChangeFurnitureInteractionControl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONCHANGEFURNITUREINTERACTIONCONTROL_OFFSET))(nullptr);
		}

		::System::Void RemoveFurnitureInteraction(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_REMOVEFURNITUREINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnPresentHovered(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_ONPRESENTHOVERED_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::IRandomService* get_random()
		{
			return ((::MX::Core::Math::IRandomService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_GET_RANDOM_OFFSET))(nullptr);
		}

		::System::Void SetMainCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SETMAINCAMERA_OFFSET))(nullptr);
		}

		::System::Void SaveCafeCameraInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_SAVECAFECAMERAINFO_OFFSET))(nullptr);
		}

		CafeInputState* get_CurrentState()
		{
			return ((CafeInputState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_GET_CURRENTSTATE_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentCafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFE_GET_CURRENTCAFEDBID_OFFSET))(nullptr);
		}

		::System::Void ChangeCurrentCafeDB(::System::Int64 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFE_CHANGECURRENTCAFEDB_OFFSET))(arg, arg2, nullptr);
		}

	};

