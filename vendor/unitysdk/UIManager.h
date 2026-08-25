#pragma once
#include "unitysdk.h"

class UIColor;
namespace UnityEngine { class Camera; }
class BattleGroundCamera;
class TweenAlpha;
class UIPanel;
class UISprite;
namespace UnityEngine { class Coroutine; }
class UIRepeater;
class UIRoot;
class WorldSpaceUIRoot;
class UILetterBox;
class CameraFovScaler;
namespace UnityEngine { class MeshRenderer; }
class UIBase;
namespace UnityEngine { class Vector3; }
class UICamera;
namespace UnityEngine { class Color; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class ContentType; }
namespace UnityEngine { class GameObject; }
namespace MX::Logic::Battles { class GroundCommandBattleAdditionalUISet; }
class UIFromHistory;

#define UIMANAGER_GET_BATTLEGROUNDCAMERA0_OFFSET UNITYSDK_OFFSET(0x2688970)
#define UIMANAGER_SET_BATTLEGROUNDCAMERA0_OFFSET UNITYSDK_OFFSET(0x2688980)
#define UIMANAGER_GET_BATTLEGROUNDCAMERACURRENT_OFFSET UNITYSDK_OFFSET(0x2688990)
#define UIMANAGER_GET_CURRENTCAMERA_OFFSET UNITYSDK_OFFSET(0x2688BA0)
#define UIMANAGER_SET_CURRENTCAMERA_OFFSET UNITYSDK_OFFSET(0x2688BB0)
#define UIMANAGER_GET_OPENUILIST_OFFSET UNITYSDK_OFFSET(0x2688DA0)
#define UIMANAGER_GET_FADESPRITE_OFFSET UNITYSDK_OFFSET(0x2688DB0)
#define UIMANAGER_GET_LASTOPENUI_OFFSET UNITYSDK_OFFSET(0x2688E80)
#define UIMANAGER_SET_LASTOPENUI_OFFSET UNITYSDK_OFFSET(0x2688E90)
#define UIMANAGER_GET_ISFIRSTENTERLOBBYAFTERLOGIN_OFFSET UNITYSDK_OFFSET(0x2688EB0)
#define UIMANAGER_SET_ISFIRSTENTERLOBBYAFTERLOGIN_OFFSET UNITYSDK_OFFSET(0x2688F00)
#define UIMANAGER_GET_DONTSHOWREPURCHASETODAY_OFFSET UNITYSDK_OFFSET(0x2688F50)
#define UIMANAGER_SET_DONTSHOWREPURCHASETODAY_OFFSET UNITYSDK_OFFSET(0x2688FA0)
#define UIMANAGER_GET_SWIPEOFF_OFFSET UNITYSDK_OFFSET(0x2688FF0)
#define UIMANAGER_SET_SWIPEOFF_OFFSET UNITYSDK_OFFSET(0x2689000)
#define UIMANAGER_ADD_ONSCREENCONFIGCHANGED_OFFSET UNITYSDK_OFFSET(0x2689010)
#define UIMANAGER_REMOVE_ONSCREENCONFIGCHANGED_OFFSET UNITYSDK_OFFSET(0x26890B0)
#define UIMANAGER_GET_CACHEDUICAMERA_OFFSET UNITYSDK_OFFSET(0x2689150)
#define UIMANAGER_SET_CACHEDUICAMERA_OFFSET UNITYSDK_OFFSET(0x2689160)
#define UIMANAGER_GET_ENABLESWIPE_OFFSET UNITYSDK_OFFSET(0x2689180)
#define UIMANAGER_SET_ENABLESWIPE_OFFSET UNITYSDK_OFFSET(0x2689190)
#define UIMANAGER_GET_ISPORTRAIT_OFFSET UNITYSDK_OFFSET(0x26891A0)
#define UIMANAGER_SET_ISPORTRAIT_OFFSET UNITYSDK_OFFSET(0x26891B0)
#define UIMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x26892A0)
#define UIMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x2689500)
#define UIMANAGER_GETASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIMANAGER_GETASYNC_OFFSET UNITYSDK_OFFSET(0x2689580)
#define UIMANAGER_ISANDROIDBACKBUTTONCONTINUEUI_OFFSET UNITYSDK_OFFSET(0x268A020)
#define UIMANAGER_ISRESOURCESUI_OFFSET UNITYSDK_OFFSET(0x2689850)
#define UIMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x268A160)
#define UIMANAGER_GETOROPENASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIMANAGER_OPENASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIMANAGER_OPENASYNC_OFFSET UNITYSDK_OFFSET(0x268A1E0)
#define UIMANAGER_OPENASYNC_OFFSET UNITYSDK_OFFSET(0x268AFB0)
#define UIMANAGER_FADEINOROUT_OFFSET UNITYSDK_OFFSET(0x268B090)
#define UIMANAGER_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x268AED0)
#define UIMANAGER_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x268B1E0)
#define UIMANAGER_ADDTOSTACK_OFFSET UNITYSDK_OFFSET(0x268B2A0)
#define UIMANAGER_REGISTERUISONSTACK_OFFSET UNITYSDK_OFFSET(0x268B9B0)
#define UIMANAGER_ONBACK_OFFSET UNITYSDK_OFFSET(0x268BA60)
#define UIMANAGER_NEEDCLEARCOMPLETELY_OFFSET UNITYSDK_OFFSET(0x268C1A0)
#define UIMANAGER_GET_MEMORYCLEARBYUI_OFFSET UNITYSDK_OFFSET(0x268C1B0)
#define UIMANAGER_ISCLEARTARGETUI_OFFSET UNITYSDK_OFFSET(0x268C280)
#define UIMANAGER_CLEARCOMPLETELY_OFFSET UNITYSDK_OFFSET(0x268C440)
#define UIMANAGER_CO_LOADINGONBACK_OFFSET UNITYSDK_OFFSET(0x268C0E0)
#define UIMANAGER_TOLOBBY_OFFSET UNITYSDK_OFFSET(0x268BD60)
#define UIMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x268C500)
#define UIMANAGER_CLOSEALL_OFFSET UNITYSDK_OFFSET(0x268C570)
#define UIMANAGER_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x268C6B0)
#define UIMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x268BCD0)
#define UIMANAGER_SHOW_OFFSET UNITYSDK_OFFSET(0x268CBC0)
#define UIMANAGER_HIDE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIMANAGER_HIDE_OFFSET UNITYSDK_OFFSET(0x268B890)
#define UIMANAGER_REFRESH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIMANAGER_ADDOPENEDLIST_OFFSET UNITYSDK_OFFSET(0x268BF80)
#define UIMANAGER_REMOVEOPENEDLIST_OFFSET UNITYSDK_OFFSET(0x268CF90)
#define UIMANAGER_SETOPENEDUISVISIBILITY_OFFSET UNITYSDK_OFFSET(0x268D010)
#define UIMANAGER_REMOVEUI_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIMANAGER_REMOVEUI_OFFSET UNITYSDK_OFFSET(0x268C960)
#define UIMANAGER_ISOPENED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIMANAGER_ISOPENED_OFFSET UNITYSDK_OFFSET(0x268B800)
#define UIMANAGER_GETIFOPENED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIMANAGER_ISTOPUI_OFFSET UNITYSDK_OFFSET(0x268D1F0)
#define UIMANAGER_ISLOADED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIMANAGER_ISLOADED_OFFSET UNITYSDK_OFFSET(0x26897A0)
#define UIMANAGER_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIMANAGER_LOAD_OFFSET UNITYSDK_OFFSET(0x2689EE0)
#define UIMANAGER_LOADSYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIMANAGER_LOADSYNC_OFFSET UNITYSDK_OFFSET(0x2689CF0)
#define UIMANAGER_CLEARUI_OFFSET UNITYSDK_OFFSET(0x268D2A0)
#define UIMANAGER_CLEARNONSTACKEDUI_OFFSET UNITYSDK_OFFSET(0x268D4C0)
#define UIMANAGER_RESET3DCAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0x268D610)
#define UIMANAGER_WORLDTOUI3DCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x268D750)
#define UIMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x268D830)
#define UIMANAGER_PROCESSANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x268DD10)
#define UIMANAGER_OPENQUITPOPUP_OFFSET UNITYSDK_OFFSET(0x268E370)
#define UIMANAGER_OPENQUITPOPUP_PCXBUTTON_OFFSET UNITYSDK_OFFSET(0x268E490)
#define UIMANAGER_CANNOTUSEBACKBUTTONTOAST_OFFSET UNITYSDK_OFFSET(0x268E130)
#define UIMANAGER_GET_FADEINOUTTWEENISACTIVEINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x268E5B0)
#define UIMANAGER_GET_FADEINOUTTWEENDURATION_OFFSET UNITYSDK_OFFSET(0x268E5E0)
#define UIMANAGER_GET_FADEINOUTPANELSTARTINGRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x268E600)
#define UIMANAGER_GET_FADEINOUTPANELDEPTH_OFFSET UNITYSDK_OFFSET(0x268E630)
#define UIMANAGER_COFADEINOROUT_OFFSET UNITYSDK_OFFSET(0x268B130)
#define UIMANAGER_FADEINOROUTV2_OFFSET UNITYSDK_OFFSET(0x268E680)
#define UIMANAGER_COFADEINOROUTV2_OFFSET UNITYSDK_OFFSET(0x268E7C0)
#define UIMANAGER_COFADEPHASE_OFFSET UNITYSDK_OFFSET(0x268E880)
#define UIMANAGER_FADEINIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x268E950)
#define UIMANAGER_FADEINIMMEDIATELYOBSOLETE_OFFSET UNITYSDK_OFFSET(0x268EA50)
#define UIMANAGER_FADEOUTIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x268EAD0)
#define UIMANAGER_COOPENLOADINGUIWITHFADEOUT_OFFSET UNITYSDK_OFFSET(0x268EBD0)
#define UIMANAGER_SETSCREENVISIBILITY_OFFSET UNITYSDK_OFFSET(0x268EC90)
#define UIMANAGER_HIDESCREEN_OFFSET UNITYSDK_OFFSET(0x268ED30)
#define UIMANAGER_CLEARHISTORY_OFFSET UNITYSDK_OFFSET(0x268EF30)
#define UIMANAGER_CHANGECAMERA_OFFSET UNITYSDK_OFFSET(0x268F110)
#define UIMANAGER_HIDEUIS_OFFSET UNITYSDK_OFFSET(0x268F2B0)
#define UIMANAGER_SHOWUIS_OFFSET UNITYSDK_OFFSET(0x268F360)
#define UIMANAGER_ISTOP_OFFSET UNITYSDK_OFFSET(0x268F410)
#define UIMANAGER_OPENPOPUPFORUNDERCONSTRUCTION_OFFSET UNITYSDK_OFFSET(0x268F4A0)
#define UIMANAGER_CHECKOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x268A330)
#define UIMANAGER_CHECKSCREENCONFIGCHANGED_OFFSET UNITYSDK_OFFSET(0x268A890)
#define UIMANAGER_GETBATTLEVIRTUALCAMERACURRENTINDEX_OFFSET UNITYSDK_OFFSET(0x2688A10)
#define UIMANAGER_SETBATTLEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x268F5E0)
#define UIMANAGER_CLEARALLBATTLEVIRTUALCAMERAS_OFFSET UNITYSDK_OFFSET(0x268F770)
#define UIMANAGER_CLEARALLBATTLEVIRTUALCAMERASEXCEPTDEFAULT_OFFSET UNITYSDK_OFFSET(0x268F990)
#define UIMANAGER_REFRESHCAMERA_OFFSET UNITYSDK_OFFSET(0x2688CD0)
#define UIMANAGER_GET_ASPECTGENERATION_OFFSET UNITYSDK_OFFSET(0x268FB50)
#define UIMANAGER_SET_ASPECTGENERATION_OFFSET UNITYSDK_OFFSET(0x268FB60)
#define UIMANAGER_RESETUICAMERAS_OFFSET UNITYSDK_OFFSET(0x268AA80)
#define UIMANAGER_RESETANCHORCAMERA_OFFSET UNITYSDK_OFFSET(0x268FB70)
#define UIMANAGER_SWIPEUPDATE_OFFSET UNITYSDK_OFFSET(0x268D860)
#define UIMANAGER_OPENMESSAGEPOPUP_OFFSET UNITYSDK_OFFSET(0x268FD50)
#define UIMANAGER_OPENMESSAGEPOPUP_OFFSET UNITYSDK_OFFSET(0x268FE50)
#define UIMANAGER_OPENNOTENOUGHINVENTORYMESSAGE_OFFSET UNITYSDK_OFFSET(0x268FF90)
#define UIMANAGER_OPENNOTENOUGHINVENTORYMESSAGEPOPUP_OFFSET UNITYSDK_OFFSET(0x2690040)
#define UIMANAGER_CHECKSTACKANDADDUIS_OFFSET UNITYSDK_OFFSET(0x2690120)
#define UIMANAGER_CO_CHECKSTACKANDADDUIS_OFFSET UNITYSDK_OFFSET(0x26901B0)
#define UIMANAGER_ADDSTACKWEEKDUNGEONCONTINUEUIS_OFFSET UNITYSDK_OFFSET(0x2690260)
#define UIMANAGER_CO_ADDSTACKWEEKDUNGEONUIS_OFFSET UNITYSDK_OFFSET(0x2690300)
#define UIMANAGER_ALLOWMULTITOUCH_OFFSET UNITYSDK_OFFSET(0x26903B0)
#define UIMANAGER_MOVETOPERSPECTIVEUI_OFFSET UNITYSDK_OFFSET(0x2690420)
#define UIMANAGER_MOVETOSCREENSPACEUI_OFFSET UNITYSDK_OFFSET(0x2690620)
#define UIMANAGER_EXISTSLOCALUIFILE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIMANAGER_GETRESOLVEDUINAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIMANAGER_BATTLEADDITIONALUISETRESERVE_OFFSET UNITYSDK_OFFSET(0x26907F0)
#define UIMANAGER_BATTLEADDITIONALUISETRESERVE_OFFSET UNITYSDK_OFFSET(0x2690970)
#define UIMANAGER_WAITBATTLEUIOPENANDSETADDITIONALUI_OFFSET UNITYSDK_OFFSET(0x26908E0)
#define UIMANAGER_WAITBATTLEUIOPENANDSETADDITIONALUI_OFFSET UNITYSDK_OFFSET(0x2690A60)
#define UIMANAGER_REFRESHADDITIONALCAMERABUTTONRESERVE_OFFSET UNITYSDK_OFFSET(0x2690B30)
#define UIMANAGER_WAITBATTLEUIOPENANDREFRESHADDITIONALCAMERABUTTON_OFFSET UNITYSDK_OFFSET(0x2690C00)
#define UIMANAGER_ISLASTOPENUI_OFFSET UNITYSDK_OFFSET(0x2690C90)
#define UIMANAGER_SETUIFROMSTACK_OFFSET UNITYSDK_OFFSET(0x2690D20)
#define UIMANAGER_REMOVEUIFROMSTACK_OFFSET UNITYSDK_OFFSET(0x2690D80)
#define UIMANAGER_GETUIFROMSTACK_OFFSET UNITYSDK_OFFSET(0x2690DD0)
#define UIMANAGER_GETHASFOCUS_OFFSET UNITYSDK_OFFSET(0x2690E20)
#define UIMANAGER_ENDHASFOCUS_OFFSET UNITYSDK_OFFSET(0x2690EA0)
#define UIMANAGER_GET_BLACKSCREENCAMERAFORWINDOWS_OFFSET UNITYSDK_OFFSET(0x2690F20)
#define UIMANAGER_SETACTIVEBLACKSCREENCAMARA_OFFSET UNITYSDK_OFFSET(0x26910A0)
#define UIMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26910D0)
#define UIMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2691410)
#define UIMANAGER__RESET3DCAMERATRANSFORM_G__CORESET3DCAMERATRANSFORM|131_0_OFFSET UNITYSDK_OFFSET(0x268D6E0)
#define UIMANAGER__PROCESSANDROIDBACKBUTTON_G__ISSETUPONANDROIDBACKBUTTONRESULT|134_0_OFFSET UNITYSDK_OFFSET(0x268E230)

	inline static constexpr unsigned int UIManager_TypeDefinitionIndex = 6809;

	class UIManager : public EventType
	{
	public:
		::System::Boolean ignoreUpdateCycle; // 0x20
		Il2CppObject* CanInputLayer; // 0x0
		UIColor* Color; // 0x28
		::UnityEngine::Camera* GameCamera; // 0x30
		::UnityEngine::Camera* DummyCamera; // 0x38
		::UnityEngine::Camera* AnchorCamera; // 0x40
		BattleGroundCamera* _BattleGroundCamera0_k__BackingField; // 0x48
		Il2CppObject* BattleGroundCameras; // 0x50
		::UnityEngine::Camera* currentCamera; // 0x58
		::System::Single cachedAspect; // 0x60
		Il2CppObject* uiDic; // 0x68
		Il2CppObject* openUIList; // 0x70
		Il2CppObject* UIStack; // 0x78
		TweenAlpha* FadeInOutTween; // 0x80
		UIPanel* FadeInOutPanel; // 0x88
		UISprite* _fadeSprite; // 0x90
		::UnityEngine::Coroutine* _fadeInOutV2Coroutine; // 0x98
		UIRepeater* UIRepeater; // 0xA0
		UIRoot* UIRoot; // 0xA8
		WorldSpaceUIRoot* WorldSpaceUIRoot; // 0xB0
		UILetterBox* LetterBox; // 0xB8
		CameraFovScaler* cameraFovScaler; // 0xC0
		::UnityEngine::MeshRenderer* screenBlocker; // 0xC8
		UIBase* _LastOpenUI_k__BackingField; // 0xD0
		::System::Int32 UICullingMask; // 0xD8
		::System::Boolean isFirstEnterLobbyAfterLogin; // 0x8
		::System::Boolean dontShowRepurchaseToday; // 0x9
		::System::Single SafeAreaRatio; // 0xDC
		::System::Single IndicatorBarRatio; // 0xE0
		::System::Boolean isAndroidBackable; // 0xE4
		::System::Single swipeSensitivity; // 0xE8
		::System::Boolean _SwipeOff_k__BackingField; // 0xEC
		::UnityEngine::Vector3* touchBeganPos; // 0xF0
		::UnityEngine::Vector3* touchEndedPos; // 0xFC
		::UnityEngine::Vector3* touchDif; // 0x108
		::System::Boolean touchUp; // 0x114
		::System::Boolean touchDown; // 0x115
		::System::Action* OnScreenConfigChanged; // 0x118
		::System::Single cachedSafeAreaScaleFactor; // 0x120
		UICamera* _CachedUICamera_k__BackingField; // 0x128
		Il2CppObject* uiOverwriteBlacklist; // 0x130
		::System::Boolean _EnableSwipe_k__BackingField; // 0x138
		Il2CppObject* ResolvedNameCache; // 0x10
		::System::Boolean isPortrait; // 0x139
		::UnityEngine::Coroutine* hideScreenCoroutine; // 0x140
		::System::Int32 _AspectGeneration_k__BackingField; // 0x148
		Il2CppObject* UIFromStack; // 0x150
		::System::Boolean PCPortraitMode; // 0x158
		::UnityEngine::Camera* _blackScreenCameraForWindows; // 0x160

		BattleGroundCamera* get_BattleGroundCamera0()
		{
			return ((BattleGroundCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_BATTLEGROUNDCAMERA0_OFFSET))(nullptr);
		}

		::System::Void set_BattleGroundCamera0(BattleGroundCamera* arg)
		{
			((::System::Void(*)(BattleGroundCamera*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SET_BATTLEGROUNDCAMERA0_OFFSET))(arg, nullptr);
		}

		BattleGroundCamera* get_BattleGroundCameraCurrent()
		{
			return ((BattleGroundCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_BATTLEGROUNDCAMERACURRENT_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* get_CurrentCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_CURRENTCAMERA_OFFSET))(nullptr);
		}

		::System::Void set_CurrentCamera(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SET_CURRENTCAMERA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OpenUIList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_OPENUILIST_OFFSET))(nullptr);
		}

		UISprite* get_FadeSprite()
		{
			return ((UISprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_FADESPRITE_OFFSET))(nullptr);
		}

		UIBase* get_LastOpenUI()
		{
			return ((UIBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_LASTOPENUI_OFFSET))(nullptr);
		}

		::System::Void set_LastOpenUI(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SET_LASTOPENUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFirstEnterLobbyAfterLogin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_ISFIRSTENTERLOBBYAFTERLOGIN_OFFSET))(nullptr);
		}

		::System::Void set_IsFirstEnterLobbyAfterLogin(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SET_ISFIRSTENTERLOBBYAFTERLOGIN_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DontShowRepurchaseToday()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_DONTSHOWREPURCHASETODAY_OFFSET))(nullptr);
		}

		::System::Void set_DontShowRepurchaseToday(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SET_DONTSHOWREPURCHASETODAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SwipeOff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_SWIPEOFF_OFFSET))(nullptr);
		}

		::System::Void set_SwipeOff(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SET_SWIPEOFF_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnScreenConfigChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_ADD_ONSCREENCONFIGCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnScreenConfigChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_REMOVE_ONSCREENCONFIGCHANGED_OFFSET))(arg, nullptr);
		}

		UICamera* get_CachedUICamera()
		{
			return ((UICamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_CACHEDUICAMERA_OFFSET))(nullptr);
		}

		::System::Void set_CachedUICamera(UICamera* arg)
		{
			((::System::Void(*)(UICamera*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SET_CACHEDUICAMERA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_EnableSwipe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_ENABLESWIPE_OFFSET))(nullptr);
		}

		::System::Void set_EnableSwipe(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SET_ENABLESWIPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPortrait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_ISPORTRAIT_OFFSET))(nullptr);
		}

		::System::Void set_IsPortrait(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SET_ISPORTRAIT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void GetAsync(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GETASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void GetAsync(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GETASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsAndroidBackButtonContinueUI(UIBase* arg)
		{
			return ((::System::Boolean(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_ISANDROIDBACKBUTTONCONTINUEUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsResourcesUI(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_ISRESOURCESUI_OFFSET))(str, nullptr);
		}

		Il2CppObject* Get()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_OFFSET))(nullptr);
		}

		UIBase* Get(::System::String* str)
		{
			return ((UIBase*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_OFFSET))(str, nullptr);
		}

		::System::Void GetOrOpenAsync(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GETOROPENASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void OpenAsync(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_OPENASYNC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OpenAsync(::System::String* str, Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_OPENASYNC_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Void OpenAsync(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_OPENASYNC_OFFSET))(str, str2, nullptr);
		}

		::System::Void FadeInOrOut(::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_FADEINOROUT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading(::System::String* str, Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CO_LOADING_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading(UIBase* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(UIBase*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CO_LOADING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddToStack(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_ADDTOSTACK_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* RegisterUIsOnStack(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_REGISTERUISONSTACK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBack(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_ONBACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean NeedClearCompletely(::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_NEEDCLEARCOMPLETELY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_MemoryClearByUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_MEMORYCLEARBYUI_OFFSET))(nullptr);
		}

		::System::Boolean IsClearTargetUI(::System::String* str, ::System::String* str2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_ISCLEARTARGETUI_OFFSET))(str, str2, nullptr);
		}

		::System::Collections::IEnumerator* ClearCompletely(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CLEARCOMPLETELY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_LoadingOnBack(UIBase* arg, UIBase* arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(UIBase*, UIBase*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CO_LOADINGONBACK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ToLobby(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_TOLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Close(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CLOSE_OFFSET))(str, nullptr);
		}

		::System::Void CloseAll(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CLOSEALL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* RemoveAll(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_REMOVEALL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Close(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Show(UIBase* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(UIBase*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SHOW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_HIDE_OFFSET))(nullptr);
		}

		::System::Void Hide(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_HIDE_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_REFRESH_OFFSET))(nullptr);
		}

		::System::Void AddOpenedList(UIBase* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(UIBase*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_ADDOPENEDLIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveOpenedList(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_REMOVEOPENEDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SetOpenedUIsVisibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SETOPENEDUISVISIBILITY_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_REMOVEUI_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveUI(UIBase* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(UIBase*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_REMOVEUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_ISOPENED_OFFSET))(nullptr);
		}

		::System::Boolean IsOpened(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_ISOPENED_OFFSET))(str, nullptr);
		}

		::System::Boolean GetIfOpened(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GETIFOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTopUI(UIBase* arg)
		{
			return ((::System::Boolean(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_ISTOPUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_ISLOADED_OFFSET))(nullptr);
		}

		::System::Boolean IsLoaded(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_ISLOADED_OFFSET))(str, nullptr);
		}

		::System::Void Load(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_LOAD_OFFSET))(arg, nullptr);
		}

		::System::Void Load(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_LOAD_OFFSET))(str, arg, nullptr);
		}

		::System::Void Loadsync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_LOADSYNC_OFFSET))(nullptr);
		}

		::System::Void Loadsync(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_LOADSYNC_OFFSET))(str, nullptr);
		}

		::System::Void ClearUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CLEARUI_OFFSET))(nullptr);
		}

		::System::Void ClearNonStackedUI(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CLEARNONSTACKEDUI_OFFSET))(arg, nullptr);
		}

		::System::Void Reset3DCameraTransform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_RESET3DCAMERATRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* WorldToUI3DCameraPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Camera* arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_WORLDTOUI3DCAMERAPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void ProcessAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_PROCESSANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OpenQuitPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_OPENQUITPOPUP_OFFSET))(nullptr);
		}

		::System::Void OpenQuitPopup_PCXButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_OPENQUITPOPUP_PCXBUTTON_OFFSET))(nullptr);
		}

		::System::Void CanNotUseBackButtonToast()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CANNOTUSEBACKBUTTONTOAST_OFFSET))(nullptr);
		}

		::System::Boolean get_FadeInOutTweenIsActiveInHierarchy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_FADEINOUTTWEENISACTIVEINHIERARCHY_OFFSET))(nullptr);
		}

		::System::Single get_FadeInOutTweenDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_FADEINOUTTWEENDURATION_OFFSET))(nullptr);
		}

		::System::Int32 get_FadeInOutPanelStartingRenderQueue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_FADEINOUTPANELSTARTINGRENDERQUEUE_OFFSET))(nullptr);
		}

		::System::Int32 get_FadeInOutPanelDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_FADEINOUTPANELDEPTH_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoFadeInOrOut(::System::Boolean arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_COFADEINOROUT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FadeInOrOutV2(::UnityEngine::Color* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_FADEINOROUTV2_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* CoFadeInOrOutV2(::UnityEngine::Color* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Color*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_COFADEINOROUTV2_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* CoFadePhase(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_COFADEPHASE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void FadeInImmediately()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_FADEINIMMEDIATELY_OFFSET))(nullptr);
		}

		::System::Void FadeInImmediatelyObsolete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_FADEINIMMEDIATELYOBSOLETE_OFFSET))(nullptr);
		}

		::System::Void FadeOutImmediately()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_FADEOUTIMMEDIATELY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenLoadingUIWithFadeOut(::System::Action* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_COOPENLOADINGUIWITHFADEOUT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetScreenVisibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SETSCREENVISIBILITY_OFFSET))(arg, nullptr);
		}

		::System::Void HideScreen(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_HIDESCREEN_OFFSET))(arg, nullptr);
		}

		::System::Void ClearHistory(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CLEARHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeCamera(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CHANGECAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void HideUIs(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_HIDEUIS_OFFSET))(arg, nullptr);
		}

		::System::Void ShowUIs(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SHOWUIS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTop(UIBase* arg)
		{
			return ((::System::Boolean(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_ISTOP_OFFSET))(arg, nullptr);
		}

		::System::Void OpenPopupForUnderConstruction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_OPENPOPUPFORUNDERCONSTRUCTION_OFFSET))(nullptr);
		}

		::System::Boolean CheckOpenCondition(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CHECKOPENCONDITION_OFFSET))(str, nullptr);
		}

		::System::Boolean CheckScreenConfigChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CHECKSCREENCONFIGCHANGED_OFFSET))(nullptr);
		}

		::System::Int32 GetBattleVirtualCameraCurrentIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GETBATTLEVIRTUALCAMERACURRENTINDEX_OFFSET))(nullptr);
		}

		::System::Void SetBattleVirtualCamera(BattleGroundCamera* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(BattleGroundCamera*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SETBATTLEVIRTUALCAMERA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ClearAllBattleVirtualCameras()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CLEARALLBATTLEVIRTUALCAMERAS_OFFSET))(nullptr);
		}

		::System::Void ClearAllBattleVirtualCamerasExceptDefault()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CLEARALLBATTLEVIRTUALCAMERASEXCEPTDEFAULT_OFFSET))(nullptr);
		}

		::System::Void RefreshCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_REFRESHCAMERA_OFFSET))(nullptr);
		}

		::System::Int32 get_AspectGeneration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_ASPECTGENERATION_OFFSET))(nullptr);
		}

		::System::Void set_AspectGeneration(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SET_ASPECTGENERATION_OFFSET))(arg, nullptr);
		}

		::System::Void ResetUICameras(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_RESETUICAMERAS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetAnchorCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_RESETANCHORCAMERA_OFFSET))(nullptr);
		}

		::System::Void SwipeUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SWIPEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OpenMessagePopup(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_OPENMESSAGEPOPUP_OFFSET))(str, arg, nullptr);
		}

		::System::Void OpenMessagePopup(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_OPENMESSAGEPOPUP_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Void OpenNotEnoughInventoryMessage(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_OPENNOTENOUGHINVENTORYMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OpenNotEnoughInventoryMessagePopup(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_OPENNOTENOUGHINVENTORYMESSAGEPOPUP_OFFSET))(str, nullptr);
		}

		::System::Void CheckStackAndAddUIs(::FlatData::ContentType* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CHECKSTACKANDADDUIS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* co_CheckStackAndAddUIs(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CO_CHECKSTACKANDADDUIS_OFFSET))(arg, nullptr);
		}

		::System::Void AddStackWeekDungeonContinueUIs(::System::Int64 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_ADDSTACKWEEKDUNGEONCONTINUEUIS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* co_AddStackWeekDungeonUIs(::System::Int64 arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_CO_ADDSTACKWEEKDUNGEONUIS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AllowMultiTouch(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_ALLOWMULTITOUCH_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToPerspectiveUI(::UnityEngine::GameObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_MOVETOPERSPECTIVEUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void MoveToScreenSpaceUI(::UnityEngine::GameObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_MOVETOSCREENSPACEUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ExistsLocalUIFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_EXISTSLOCALUIFILE_OFFSET))(nullptr);
		}

		::System::String* GetResolvedUIName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GETRESOLVEDUINAME_OFFSET))(nullptr);
		}

		::System::Void BattleAdditionalUISetReserve(::MX::Logic::Battles::GroundCommandBattleAdditionalUISet* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommandBattleAdditionalUISet*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_BATTLEADDITIONALUISETRESERVE_OFFSET))(arg, nullptr);
		}

		::System::Void BattleAdditionalUISetReserve(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_BATTLEADDITIONALUISETRESERVE_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* WaitBattleUIOpenAndSetAdditionalUI(::MX::Logic::Battles::GroundCommandBattleAdditionalUISet* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Battles::GroundCommandBattleAdditionalUISet*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_WAITBATTLEUIOPENANDSETADDITIONALUI_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* WaitBattleUIOpenAndSetAdditionalUI(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_WAITBATTLEUIOPENANDSETADDITIONALUI_OFFSET))(str, nullptr);
		}

		::System::Void RefreshAdditionalCameraButtonReserve()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_REFRESHADDITIONALCAMERABUTTONRESERVE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* WaitBattleUIOpenAndRefreshAdditionalCameraButton()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_WAITBATTLEUIOPENANDREFRESHADDITIONALCAMERABUTTON_OFFSET))(nullptr);
		}

		::System::Boolean IsLastOpenUI(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_ISLASTOPENUI_OFFSET))(str, nullptr);
		}

		::System::Void SetUIFromStack(::System::String* str, UIFromHistory* arg)
		{
			((::System::Void(*)(::System::String*, UIFromHistory*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SETUIFROMSTACK_OFFSET))(str, arg, nullptr);
		}

		::System::Void RemoveUIFromStack(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_REMOVEUIFROMSTACK_OFFSET))(str, nullptr);
		}

		UIFromHistory* GetUIFromStack(::System::String* str)
		{
			return ((UIFromHistory*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GETUIFROMSTACK_OFFSET))(str, nullptr);
		}

		::System::Boolean GetHasFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GETHASFOCUS_OFFSET))(nullptr);
		}

		::System::Void EndHasFocus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_ENDHASFOCUS_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* get_BlackScreenCameraForWindows()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_GET_BLACKSCREENCAMERAFORWINDOWS_OFFSET))(nullptr);
		}

		::System::Void SetActiveBlackScreenCamara(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_SETACTIVEBLACKSCREENCAMARA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _Reset3DCameraTransform_g__CoReset3DCameraTransform|131_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER__RESET3DCAMERATRANSFORM_G__CORESET3DCAMERATRANSFORM|131_0_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessAndroidBackButton_g__IsSetupOnAndroidBackButtonResult|134_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANAGER__PROCESSANDROIDBACKBUTTON_G__ISSETUPONANDROIDBACKBUTTONRESULT|134_0_OFFSET))(nullptr);
		}

	};

