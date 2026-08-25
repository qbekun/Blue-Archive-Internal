#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AudioListener; }
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class AudioClip; }
class UIPanel;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ColorSpace; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class BoxCollider; }
class UIWidget;
namespace UnityEngine { class BoxCollider2D; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
class UISprite;
class INGUIAtlas;
namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class KeyCode; }
class INGUIFont;

#define NGUITOOLS_GET_SOUNDVOLUME_OFFSET UNITYSDK_OFFSET(0x1F39F20)
#define NGUITOOLS_SET_SOUNDVOLUME_OFFSET UNITYSDK_OFFSET(0x1F3A020)
#define NGUITOOLS_GET_FILEACCESS_OFFSET UNITYSDK_OFFSET(0x1F3A0E0)
#define NGUITOOLS_PLAYSOUND_OFFSET UNITYSDK_OFFSET(0x1F3A100)
#define NGUITOOLS_PLAYSOUND_OFFSET UNITYSDK_OFFSET(0x1F3A940)
#define NGUITOOLS_PLAYSOUND_OFFSET UNITYSDK_OFFSET(0x1F3A160)
#define NGUITOOLS_RANDOMRANGE_OFFSET UNITYSDK_OFFSET(0x1F3AAB0)
#define NGUITOOLS_GETHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1F3AAD0)
#define NGUITOOLS_FINDACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGUITOOLS_FINDCAMERAFORLAYER_OFFSET UNITYSDK_OFFSET(0x1F3AC10)
#define NGUITOOLS_ADDWIDGETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1F3AF40)
#define NGUITOOLS_ADDWIDGETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1F3AF90)
#define NGUITOOLS_UPDATEWIDGETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1F3BA70)
#define NGUITOOLS_UPDATEWIDGETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1F3BAC0)
#define NGUITOOLS_UPDATEWIDGETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1F3B310)
#define NGUITOOLS_UPDATEWIDGETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1F3BC10)
#define NGUITOOLS_UPDATEWIDGETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1F3BD40)
#define NGUITOOLS_UPDATEWIDGETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1F3C0C0)
#define NGUITOOLS_UPDATEWIDGETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1F3B630)
#define NGUITOOLS_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGUITOOLS_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x1F3C420)
#define NGUITOOLS_REGISTERUNDO_OFFSET UNITYSDK_OFFSET(0x1F3C520)
#define NGUITOOLS_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1F3C410)
#define NGUITOOLS_CHECKFORPREFABSTAGE_OFFSET UNITYSDK_OFFSET(0x1F3C530)
#define NGUITOOLS_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1F3C540)
#define NGUITOOLS_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1F3C760)
#define NGUITOOLS_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1F3C7B0)
#define NGUITOOLS_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1F3C590)
#define NGUITOOLS_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1F3C800)
#define NGUITOOLS_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1F3C9A0)
#define NGUITOOLS_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1F3CA00)
#define NGUITOOLS_CALCULATERAYCASTDEPTH_OFFSET UNITYSDK_OFFSET(0x1F3CC20)
#define NGUITOOLS_CALCULATENEXTDEPTH_OFFSET UNITYSDK_OFFSET(0x1F3CD50)
#define NGUITOOLS_CALCULATENEXTDEPTH_OFFSET UNITYSDK_OFFSET(0x1F3CE20)
#define NGUITOOLS_ADJUSTDEPTH_OFFSET UNITYSDK_OFFSET(0x1F3D020)
#define NGUITOOLS_BRINGFORWARD_OFFSET UNITYSDK_OFFSET(0x1F3D280)
#define NGUITOOLS_PUSHBACK_OFFSET UNITYSDK_OFFSET(0x1F3D560)
#define NGUITOOLS_NORMALIZEDEPTHS_OFFSET UNITYSDK_OFFSET(0x1F3D670)
#define NGUITOOLS_NORMALIZEWIDGETDEPTHS_OFFSET UNITYSDK_OFFSET(0x1F3D500)
#define NGUITOOLS_NORMALIZEWIDGETDEPTHS_OFFSET UNITYSDK_OFFSET(0x1F3D840)
#define NGUITOOLS_NORMALIZEWIDGETDEPTHS_OFFSET UNITYSDK_OFFSET(0x1F3D730)
#define NGUITOOLS_NORMALIZEPANELDEPTHS_OFFSET UNITYSDK_OFFSET(0x1F3D390)
#define NGUITOOLS_CREATEUI_OFFSET UNITYSDK_OFFSET(0x1F3D8C0)
#define NGUITOOLS_CREATEUI_OFFSET UNITYSDK_OFFSET(0x1F3E590)
#define NGUITOOLS_CREATEUI_OFFSET UNITYSDK_OFFSET(0x1F3D910)
#define NGUITOOLS_SETCHILDLAYER_OFFSET UNITYSDK_OFFSET(0x1F3E610)
#define NGUITOOLS_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGUITOOLS_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGUITOOLS_ADDWIDGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGUITOOLS_ADDSPRITE_OFFSET UNITYSDK_OFFSET(0x1F3E6D0)
#define NGUITOOLS_GETROOT_OFFSET UNITYSDK_OFFSET(0x1F3E830)
#define NGUITOOLS_FINDINPARENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGUITOOLS_FINDINPARENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGUITOOLS_DESTROY_OFFSET UNITYSDK_OFFSET(0x1F3E8D0)
#define NGUITOOLS_DESTROYCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F3EAA0)
#define NGUITOOLS_DESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1F3EBF0)
#define NGUITOOLS_BROADCAST_OFFSET UNITYSDK_OFFSET(0x1F3EC90)
#define NGUITOOLS_BROADCAST_OFFSET UNITYSDK_OFFSET(0x1F3ED90)
#define NGUITOOLS_ISCHILD_OFFSET UNITYSDK_OFFSET(0x1F3E5E0)
#define NGUITOOLS_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1F3EEA0)
#define NGUITOOLS_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1F3EF60)
#define NGUITOOLS_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1F3F0C0)
#define NGUITOOLS_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1F3F130)
#define NGUITOOLS_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1F3F180)
#define NGUITOOLS_CALLCREATEPANEL_OFFSET UNITYSDK_OFFSET(0x1F3F2E0)
#define NGUITOOLS_SETACTIVECHILDREN_OFFSET UNITYSDK_OFFSET(0x1F3F3E0)
#define NGUITOOLS_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1F3F560)
#define NGUITOOLS_GETACTIVE_OFFSET UNITYSDK_OFFSET(0x1F3A9B0)
#define NGUITOOLS_GETACTIVE_OFFSET UNITYSDK_OFFSET(0x1F3AA40)
#define NGUITOOLS_SETACTIVESELF_OFFSET UNITYSDK_OFFSET(0x1F3F0A0)
#define NGUITOOLS_SETLAYER_OFFSET UNITYSDK_OFFSET(0x1F3F5F0)
#define NGUITOOLS_ROUND_OFFSET UNITYSDK_OFFSET(0x1F3F6C0)
#define NGUITOOLS_MAKEPIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x1F3F910)
#define NGUITOOLS_FITONSCREEN_OFFSET UNITYSDK_OFFSET(0x1F3FB40)
#define NGUITOOLS_FITONSCREEN_OFFSET UNITYSDK_OFFSET(0x1F3FD80)
#define NGUITOOLS_FITONSCREEN_OFFSET UNITYSDK_OFFSET(0x1F3FE50)
#define NGUITOOLS_FITONSCREEN_OFFSET UNITYSDK_OFFSET(0x1F3FEF0)
#define NGUITOOLS_SAVE_OFFSET UNITYSDK_OFFSET(0x1F40460)
#define NGUITOOLS_LOAD_OFFSET UNITYSDK_OFFSET(0x1F40640)
#define NGUITOOLS_APPLYPMA_OFFSET UNITYSDK_OFFSET(0x1F40700)
#define NGUITOOLS_MARKPARENTASCHANGED_OFFSET UNITYSDK_OFFSET(0x1F40740)
#define NGUITOOLS_GET_CLIPBOARD_OFFSET UNITYSDK_OFFSET(0x1F407D0)
#define NGUITOOLS_SET_CLIPBOARD_OFFSET UNITYSDK_OFFSET(0x1F40830)
#define NGUITOOLS_ENCODECOLOR_OFFSET UNITYSDK_OFFSET(0x1F408B0)
#define NGUITOOLS_PARSECOLOR_OFFSET UNITYSDK_OFFSET(0x1F40910)
#define NGUITOOLS_STRIPSYMBOLS_OFFSET UNITYSDK_OFFSET(0x1F40970)
#define NGUITOOLS_ADDMISSINGCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGUITOOLS_GETSIDES_OFFSET UNITYSDK_OFFSET(0x1F409C0)
#define NGUITOOLS_GETSIDES_OFFSET UNITYSDK_OFFSET(0x1F415A0)
#define NGUITOOLS_GETSIDES_OFFSET UNITYSDK_OFFSET(0x1F41600)
#define NGUITOOLS_GETSIDES_OFFSET UNITYSDK_OFFSET(0x1F40A60)
#define NGUITOOLS_GETWORLDCORNERS_OFFSET UNITYSDK_OFFSET(0x1F418C0)
#define NGUITOOLS_GETWORLDCORNERS_OFFSET UNITYSDK_OFFSET(0x1F42210)
#define NGUITOOLS_GETWORLDCORNERS_OFFSET UNITYSDK_OFFSET(0x1F42270)
#define NGUITOOLS_GETWORLDCORNERS_OFFSET UNITYSDK_OFFSET(0x1F41960)
#define NGUITOOLS_GETFUNCNAME_OFFSET UNITYSDK_OFFSET(0x1F42310)
#define NGUITOOLS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGUITOOLS_EXECUTEALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGUITOOLS_IMMEDIATELYCREATEDRAWCALLS_OFFSET UNITYSDK_OFFSET(0x1F423E0)
#define NGUITOOLS_GET_SCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1F416A0)
#define NGUITOOLS_KEYTOCAPTION_OFFSET UNITYSDK_OFFSET(0x1F424D0)
#define NGUITOOLS_CAPTIONTOKEY_OFFSET UNITYSDK_OFFSET(0x1F433B0)
#define NGUITOOLS_DRAW_OFFSET UNITYSDK_OFFSET(0x000000)
#define NGUITOOLS_GAMMATOLINEARSPACE_OFFSET UNITYSDK_OFFSET(0x1F44CC0)
#define NGUITOOLS_LINEARTOGAMMASPACE_OFFSET UNITYSDK_OFFSET(0x1F44E40)
#define NGUITOOLS_CHECKIFRELATED_OFFSET UNITYSDK_OFFSET(0x1F44FC0)
#define NGUITOOLS_REPLACE_OFFSET UNITYSDK_OFFSET(0x1F450E0)
#define NGUITOOLS_CHECKIFRELATED_OFFSET UNITYSDK_OFFSET(0x1F45380)
#define NGUITOOLS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1F456B0)

	inline static constexpr unsigned int NGUITools_TypeDefinitionIndex = 116;

	class NGUITools : public Il2CppObject
	{
	public:
		::UnityEngine::AudioListener* mListener; // 0x0
		::UnityEngine::AudioSource* audioSource; // 0x8
		::System::Boolean mLoaded; // 0x10
		::System::Single mGlobalVolume; // 0x14
		::System::Single mLastTimestamp; // 0x18
		::UnityEngine::AudioClip* mLastClip; // 0x20
		Il2CppObject* mTypeNames; // 0x28
		::Il2CppArray<::System::Object*>* mSides; // 0x30
		::Il2CppArray<::System::Object*>* keys; // 0x38
		Il2CppObject* mWidgets; // 0x40
		UIPanel* mRoot; // 0x48
		::UnityEngine::GameObject* mGo; // 0x50
		::UnityEngine::ColorSpace* mColorSpace; // 0x58

		::System::Single get_soundVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GET_SOUNDVOLUME_OFFSET))(nullptr);
		}

		::System::Void set_soundVolume(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_SET_SOUNDVOLUME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_fileAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GET_FILEACCESS_OFFSET))(nullptr);
		}

		::UnityEngine::AudioSource* PlaySound(::UnityEngine::AudioClip* arg)
		{
			return ((::UnityEngine::AudioSource*(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_PLAYSOUND_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioSource* PlaySound(::UnityEngine::AudioClip* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::AudioSource*(*)(::UnityEngine::AudioClip*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_PLAYSOUND_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::AudioSource* PlaySound(::UnityEngine::AudioClip* arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::UnityEngine::AudioSource*(*)(::UnityEngine::AudioClip*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_PLAYSOUND_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 RandomRange(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_RANDOMRANGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetHierarchy(::UnityEngine::GameObject* arg)
		{
			return ((::System::String*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GETHIERARCHY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindActive()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_FINDACTIVE_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* FindCameraForLayer(::System::Int32 arg)
		{
			return ((::UnityEngine::Camera*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_FINDCAMERAFORLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void AddWidgetCollider(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ADDWIDGETCOLLIDER_OFFSET))(arg, nullptr);
		}

		::System::Void AddWidgetCollider(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ADDWIDGETCOLLIDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateWidgetCollider(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_UPDATEWIDGETCOLLIDER_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateWidgetCollider(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_UPDATEWIDGETCOLLIDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateWidgetCollider(::UnityEngine::BoxCollider* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::BoxCollider*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_UPDATEWIDGETCOLLIDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateWidgetCollider(UIWidget* arg)
		{
			((::System::Void(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_UPDATEWIDGETCOLLIDER_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateWidgetCollider(UIWidget* arg, ::UnityEngine::BoxCollider* arg2)
		{
			((::System::Void(*)(UIWidget*, ::UnityEngine::BoxCollider*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_UPDATEWIDGETCOLLIDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateWidgetCollider(UIWidget* arg, ::UnityEngine::BoxCollider2D* arg2)
		{
			((::System::Void(*)(UIWidget*, ::UnityEngine::BoxCollider2D*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_UPDATEWIDGETCOLLIDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateWidgetCollider(::UnityEngine::BoxCollider2D* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::BoxCollider2D*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_UPDATEWIDGETCOLLIDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GETTYPENAME_OFFSET))(nullptr);
		}

		::System::String* GetTypeName(::UnityEngine::Object* arg)
		{
			return ((::System::String*(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GETTYPENAME_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterUndo(::UnityEngine::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_REGISTERUNDO_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetDirty(::UnityEngine::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_SETDIRTY_OFFSET))(arg, str, nullptr);
		}

		::System::Void CheckForPrefabStage(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_CHECKFORPREFABSTAGE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* AddChild(::UnityEngine::GameObject* arg)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ADDCHILD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* AddChild(::UnityEngine::GameObject* arg, ::System::Int32 arg2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ADDCHILD_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::GameObject* AddChild(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ADDCHILD_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::GameObject* AddChild(::UnityEngine::GameObject* arg, ::System::Boolean arg2, ::System::Int32 arg3)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ADDCHILD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::GameObject* AddChild(::UnityEngine::Transform* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Transform*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ADDCHILD_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::GameObject* AddChild(::UnityEngine::GameObject* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ADDCHILD_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::GameObject* AddChild(::UnityEngine::GameObject* arg, ::UnityEngine::GameObject* arg2, ::System::Int32 arg3)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ADDCHILD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 CalculateRaycastDepth(::UnityEngine::GameObject* arg)
		{
			return ((::System::Int32(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_CALCULATERAYCASTDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalculateNextDepth(::UnityEngine::GameObject* arg)
		{
			return ((::System::Int32(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_CALCULATENEXTDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalculateNextDepth(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_CALCULATENEXTDEPTH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 AdjustDepth(::UnityEngine::GameObject* arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ADJUSTDEPTH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void BringForward(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_BRINGFORWARD_OFFSET))(arg, nullptr);
		}

		::System::Void PushBack(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_PUSHBACK_OFFSET))(arg, nullptr);
		}

		::System::Void NormalizeDepths()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_NORMALIZEDEPTHS_OFFSET))(nullptr);
		}

		::System::Void NormalizeWidgetDepths()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_NORMALIZEWIDGETDEPTHS_OFFSET))(nullptr);
		}

		::System::Void NormalizeWidgetDepths(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_NORMALIZEWIDGETDEPTHS_OFFSET))(arg, nullptr);
		}

		::System::Void NormalizeWidgetDepths(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_NORMALIZEWIDGETDEPTHS_OFFSET))(arg, nullptr);
		}

		::System::Void NormalizePanelDepths()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_NORMALIZEPANELDEPTHS_OFFSET))(nullptr);
		}

		UIPanel* CreateUI(::System::Boolean arg)
		{
			return ((UIPanel*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_CREATEUI_OFFSET))(arg, nullptr);
		}

		UIPanel* CreateUI(::System::Boolean arg, ::System::Int32 arg2)
		{
			return ((UIPanel*(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_CREATEUI_OFFSET))(arg, arg2, nullptr);
		}

		UIPanel* CreateUI(::UnityEngine::Transform* arg, ::System::Boolean arg2, ::System::Int32 arg3)
		{
			return ((UIPanel*(*)(::UnityEngine::Transform*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_CREATEUI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetChildLayer(::UnityEngine::Transform* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_SETCHILDLAYER_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* AddChild(::UnityEngine::GameObject* arg)
		{
			return ((Il2CppObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ADDCHILD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AddChild(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ADDCHILD_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* AddWidget(::UnityEngine::GameObject* arg, ::System::Int32 arg2)
		{
			return ((Il2CppObject*(*)(::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ADDWIDGET_OFFSET))(arg, arg2, nullptr);
		}

		UISprite* AddSprite(::UnityEngine::GameObject* arg, INGUIAtlas* arg2, ::System::String* str, ::System::Int32 arg3)
		{
			return ((UISprite*(*)(::UnityEngine::GameObject*, INGUIAtlas*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ADDSPRITE_OFFSET))(arg, arg2, str, arg3, nullptr);
		}

		::UnityEngine::GameObject* GetRoot(::UnityEngine::GameObject* arg)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GETROOT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindInParents(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_FINDINPARENTS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* FindInParents(::UnityEngine::Transform* arg)
		{
			return ((Il2CppObject*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_FINDINPARENTS_OFFSET))(arg, nullptr);
		}

		::System::Void Destroy(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_DESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyChildren(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_DESTROYCHILDREN_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyImmediate(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_DESTROYIMMEDIATE_OFFSET))(arg, nullptr);
		}

		::System::Void Broadcast(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_BROADCAST_OFFSET))(str, nullptr);
		}

		::System::Void Broadcast(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_BROADCAST_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsChild(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ISCHILD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Activate(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ACTIVATE_OFFSET))(arg, nullptr);
		}

		::System::Void Activate(::UnityEngine::Transform* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ACTIVATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deactivate(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_DEACTIVATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetActive(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_SETACTIVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetActive(::UnityEngine::GameObject* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_SETACTIVE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void CallCreatePanel(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_CALLCREATEPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void SetActiveChildren(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_SETACTIVECHILDREN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsActive(::UnityEngine::Behaviour* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Behaviour*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ISACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetActive(::UnityEngine::Behaviour* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Behaviour*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GETACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetActive(::UnityEngine::GameObject* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GETACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetActiveSelf(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_SETACTIVESELF_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetLayer(::UnityEngine::GameObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_SETLAYER_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector3* Round(::UnityEngine::Vector3* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Void MakePixelPerfect(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_MAKEPIXELPERFECT_OFFSET))(arg, nullptr);
		}

		::System::Void FitOnScreen(::UnityEngine::Camera* arg, ::UnityEngine::Transform* arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_FITONSCREEN_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void FitOnScreen(::UnityEngine::Camera* arg, ::UnityEngine::Transform* arg2, ::UnityEngine::Vector3* arg3)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_FITONSCREEN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void FitOnScreen(::UnityEngine::Camera* arg, ::UnityEngine::Transform* arg2, ::UnityEngine::Transform* arg3, ::UnityEngine::Vector3* arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_FITONSCREEN_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void FitOnScreen(::UnityEngine::Camera* arg, ::UnityEngine::Transform* arg2, ::UnityEngine::Transform* arg3, ::UnityEngine::Vector3* arg4, ::UnityEngine::Bounds&* arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::UnityEngine::Bounds&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_FITONSCREEN_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean Save(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_SAVE_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Load(::System::String* str)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_LOAD_OFFSET))(str, nullptr);
		}

		::UnityEngine::Color* ApplyPMA(::UnityEngine::Color* arg)
		{
			return ((::UnityEngine::Color*(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_APPLYPMA_OFFSET))(arg, nullptr);
		}

		::System::Void MarkParentAsChanged(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_MARKPARENTASCHANGED_OFFSET))(arg, nullptr);
		}

		::System::String* get_clipboard()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GET_CLIPBOARD_OFFSET))(nullptr);
		}

		::System::Void set_clipboard(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_SET_CLIPBOARD_OFFSET))(str, nullptr);
		}

		::System::String* EncodeColor(::UnityEngine::Color* arg)
		{
			return ((::System::String*(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ENCODECOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* ParseColor(::System::String* str, ::System::Int32 arg)
		{
			return ((::UnityEngine::Color*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_PARSECOLOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* StripSymbols(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_STRIPSYMBOLS_OFFSET))(str, nullptr);
		}

		Il2CppObject* AddMissingComponent(::UnityEngine::GameObject* arg)
		{
			return ((Il2CppObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_ADDMISSINGCOMPONENT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSides(::UnityEngine::Camera* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GETSIDES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSides(::UnityEngine::Camera* arg, ::System::Single arg2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Camera*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GETSIDES_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSides(::UnityEngine::Camera* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Camera*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GETSIDES_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSides(::UnityEngine::Camera* arg, ::System::Single arg2, ::UnityEngine::Transform* arg3)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Camera*, ::System::Single, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GETSIDES_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetWorldCorners(::UnityEngine::Camera* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GETWORLDCORNERS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetWorldCorners(::UnityEngine::Camera* arg, ::System::Single arg2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Camera*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GETWORLDCORNERS_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetWorldCorners(::UnityEngine::Camera* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Camera*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GETWORLDCORNERS_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetWorldCorners(::UnityEngine::Camera* arg, ::System::Single arg2, ::UnityEngine::Transform* arg3)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Camera*, ::System::Single, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GETWORLDCORNERS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* GetFuncName(::System::Object* arg, ::System::String* str)
		{
			return ((::System::String*(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GETFUNCNAME_OFFSET))(arg, str, nullptr);
		}

		::System::Void Execute(::UnityEngine::GameObject* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_EXECUTE_OFFSET))(arg, str, nullptr);
		}

		::System::Void ExecuteAll(::UnityEngine::GameObject* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_EXECUTEALL_OFFSET))(arg, str, nullptr);
		}

		::System::Void ImmediatelyCreateDrawCalls(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_IMMEDIATELYCREATEDRAWCALLS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_screenSize()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GET_SCREENSIZE_OFFSET))(nullptr);
		}

		::System::String* KeyToCaption(::UnityEngine::KeyCode* arg)
		{
			return ((::System::String*(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_KEYTOCAPTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::KeyCode* CaptionToKey(::System::String* str)
		{
			return ((::UnityEngine::KeyCode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_CAPTIONTOKEY_OFFSET))(str, nullptr);
		}

		Il2CppObject* Draw(::System::String* str, Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_DRAW_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Color* GammaToLinearSpace(::UnityEngine::Color* arg)
		{
			return ((::UnityEngine::Color*(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_GAMMATOLINEARSPACE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* LinearToGammaSpace(::UnityEngine::Color* arg)
		{
			return ((::UnityEngine::Color*(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_LINEARTOGAMMASPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckIfRelated(INGUIAtlas* arg, INGUIAtlas* arg2)
		{
			return ((::System::Boolean(*)(INGUIAtlas*, INGUIAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_CHECKIFRELATED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Replace(INGUIAtlas* arg, INGUIAtlas* arg2)
		{
			((::System::Void(*)(INGUIAtlas*, INGUIAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_REPLACE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckIfRelated(INGUIFont* arg, INGUIFont* arg2)
		{
			return ((::System::Boolean(*)(INGUIFont*, INGUIFont*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_CHECKIFRELATED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITOOLS_.CCTOR_OFFSET))(nullptr);
		}

	};

