#pragma once
#include "unitysdk.h"

class UIPopupList;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class FontStyle; }
namespace UnityEngine { class Sprite; }
class Position;
class Selection;
class Alignment;
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Color; }
class Modifier;
class OpenOn;
class UIPanel;
class UIBasicSprite;
class UILabel;
namespace UnityEngine { class Vector3; }
class LegacyEvent;
class INGUIFont;
namespace UnityEngine { class KeyCode; }
class UIWidget;

#define UIPOPUPLIST_GET_FONT_OFFSET UNITYSDK_OFFSET(0xA0C460)
#define UIPOPUPLIST_SET_FONT_OFFSET UNITYSDK_OFFSET(0xA0C520)
#define UIPOPUPLIST_GET_AMBIGIOUSFONT_OFFSET UNITYSDK_OFFSET(0xA0C5F0)
#define UIPOPUPLIST_SET_AMBIGIOUSFONT_OFFSET UNITYSDK_OFFSET(0xA0C6D0)
#define UIPOPUPLIST_GET_ONSELECTIONCHANGE_OFFSET UNITYSDK_OFFSET(0xA0C7C0)
#define UIPOPUPLIST_SET_ONSELECTIONCHANGE_OFFSET UNITYSDK_OFFSET(0xA0C7D0)
#define UIPOPUPLIST_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xA09120)
#define UIPOPUPLIST_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA0C7F0)
#define UIPOPUPLIST_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA0C800)
#define UIPOPUPLIST_GET_DATA_OFFSET UNITYSDK_OFFSET(0xA0C8F0)
#define UIPOPUPLIST_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0xA0C990)
#define UIPOPUPLIST_GET_ISCOLLIDERENABLED_OFFSET UNITYSDK_OFFSET(0xA0CA30)
#define UIPOPUPLIST_SET_ISCOLLIDERENABLED_OFFSET UNITYSDK_OFFSET(0xA0CB20)
#define UIPOPUPLIST_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA0CC20)
#define UIPOPUPLIST_GET_ACTIVEFONTSIZE_OFFSET UNITYSDK_OFFSET(0xA0CC80)
#define UIPOPUPLIST_GET_ACTIVEFONTSCALE_OFFSET UNITYSDK_OFFSET(0xA0CD60)
#define UIPOPUPLIST_GET_FITSCALE_OFFSET UNITYSDK_OFFSET(0xA0CE60)
#define UIPOPUPLIST_SET_OFFSET UNITYSDK_OFFSET(0xA0C870)
#define UIPOPUPLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0xA0D220)
#define UIPOPUPLIST_ADDITEM_OFFSET UNITYSDK_OFFSET(0xA0D2F0)
#define UIPOPUPLIST_ADDITEM_OFFSET UNITYSDK_OFFSET(0xA0D480)
#define UIPOPUPLIST_ADDITEM_OFFSET UNITYSDK_OFFSET(0xA0D5A0)
#define UIPOPUPLIST_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0xA0D740)
#define UIPOPUPLIST_REMOVEITEMBYDATA_OFFSET UNITYSDK_OFFSET(0xA0D820)
#define UIPOPUPLIST_TRIGGERCALLBACKS_OFFSET UNITYSDK_OFFSET(0xA0D040)
#define UIPOPUPLIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA0D900)
#define UIPOPUPLIST_START_OFFSET UNITYSDK_OFFSET(0xA0DCC0)
#define UIPOPUPLIST_ONLOCALIZE_OFFSET UNITYSDK_OFFSET(0xA0DE50)
#define UIPOPUPLIST_HIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xA0DE60)
#define UIPOPUPLIST_GETHIGHLIGHTPOSITION_OFFSET UNITYSDK_OFFSET(0xA0DFE0)
#define UIPOPUPLIST_UPDATETWEENPOSITION_OFFSET UNITYSDK_OFFSET(0xA0E200)
#define UIPOPUPLIST_ONITEMHOVER_OFFSET UNITYSDK_OFFSET(0xA0E270)
#define UIPOPUPLIST_ONITEMPRESS_OFFSET UNITYSDK_OFFSET(0xA0E2F0)
#define UIPOPUPLIST_ONITEMCLICK_OFFSET UNITYSDK_OFFSET(0xA0E310)
#define UIPOPUPLIST_SELECT_OFFSET UNITYSDK_OFFSET(0xA0E4C0)
#define UIPOPUPLIST_ONNAVIGATE_OFFSET UNITYSDK_OFFSET(0xA0E4E0)
#define UIPOPUPLIST_ONKEY_OFFSET UNITYSDK_OFFSET(0xA0E630)
#define UIPOPUPLIST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA0E760)
#define UIPOPUPLIST_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA0E780)
#define UIPOPUPLIST_CLOSE_OFFSET UNITYSDK_OFFSET(0xA0E950)
#define UIPOPUPLIST_CLOSESELF_OFFSET UNITYSDK_OFFSET(0xA0EA20)
#define UIPOPUPLIST_ANIMATECOLOR_OFFSET UNITYSDK_OFFSET(0xA0EDF0)
#define UIPOPUPLIST_ANIMATEPOSITION_OFFSET UNITYSDK_OFFSET(0xA0EE90)
#define UIPOPUPLIST_ANIMATESCALE_OFFSET UNITYSDK_OFFSET(0xA0EF80)
#define UIPOPUPLIST_ANIMATE_OFFSET UNITYSDK_OFFSET(0xA0F190)
#define UIPOPUPLIST_ONCLICK_OFFSET UNITYSDK_OFFSET(0xA0F1F0)
#define UIPOPUPLIST_ONDOUBLECLICK_OFFSET UNITYSDK_OFFSET(0xA0F350)
#define UIPOPUPLIST_CLOSEIFUNSELECTED_OFFSET UNITYSDK_OFFSET(0xA0F370)
#define UIPOPUPLIST_SHOW_OFFSET UNITYSDK_OFFSET(0xA0F3E0)
#define UIPOPUPLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA11630)

	inline static constexpr unsigned int UIPopupList_TypeDefinitionIndex = 61;

	class UIPopupList : public Il2CppObject
	{
	public:
		UIPopupList* current; // 0x0
		::UnityEngine::GameObject* mChild; // 0x8
		::System::Single mFadeOutComplete; // 0x10
		::System::Single animSpeed; // 0x0
		::UnityEngine::Object* atlas; // 0x18
		::UnityEngine::Object* bitmapFont; // 0x20
		::UnityEngine::Font* trueTypeFont; // 0x28
		::System::Int32 fontSize; // 0x30
		::UnityEngine::FontStyle* fontStyle; // 0x34
		::System::String* backgroundSprite; // 0x38
		::System::String* highlightSprite; // 0x40
		::UnityEngine::Sprite* background2DSprite; // 0x48
		::UnityEngine::Sprite* highlight2DSprite; // 0x50
		Position* position; // 0x58
		Selection* selection; // 0x5C
		Alignment* alignment; // 0x60
		Il2CppObject* items; // 0x68
		Il2CppObject* itemData; // 0x70
		Il2CppObject* itemCallbacks; // 0x78
		::UnityEngine::Vector2* padding; // 0x80
		::UnityEngine::Color* textColor; // 0x88
		::UnityEngine::Color* backgroundColor; // 0x98
		::UnityEngine::Color* highlightColor; // 0xA8
		::System::Boolean isAnimated; // 0xB8
		::System::Boolean isLocalized; // 0xB9
		Modifier* textModifier; // 0xBC
		::System::Boolean separatePanel; // 0xC0
		::System::Int32 overlap; // 0xC4
		OpenOn* openOn; // 0xC8
		Il2CppObject* onChange; // 0xD0
		::System::String* mSelectedItem; // 0xD8
		UIPanel* mPanel; // 0xE0
		UIBasicSprite* mBackground; // 0xE8
		UIBasicSprite* mHighlight; // 0xF0
		UILabel* mHighlightedLabel; // 0xF8
		Il2CppObject* mLabelList; // 0x100
		::System::Single mBgBorder; // 0x108
		::System::Boolean keepValue; // 0x10C
		::UnityEngine::GameObject* mSelection; // 0x110
		::System::Int32 mOpenFrame; // 0x118
		::UnityEngine::GameObject* eventReceiver; // 0x120
		::System::String* functionName; // 0x128
		::System::Single textScale; // 0x130
		UILabel* textLabel; // 0x138
		::UnityEngine::Vector3* startingPosition; // 0x140
		LegacyEvent* mLegacyEvent; // 0x150
		::System::Boolean mExecuting; // 0x158
		::System::Boolean mStarted; // 0x159
		::System::Boolean mTweening; // 0x15A
		::UnityEngine::GameObject* source; // 0x160

		INGUIFont* get_font()
		{
			return ((INGUIFont*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_GET_FONT_OFFSET))(nullptr);
		}

		::System::Void set_font(INGUIFont* arg)
		{
			((::System::Void(*)(INGUIFont*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_SET_FONT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* get_ambigiousFont()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_GET_AMBIGIOUSFONT_OFFSET))(nullptr);
		}

		::System::Void set_ambigiousFont(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_SET_AMBIGIOUSFONT_OFFSET))(arg, nullptr);
		}

		LegacyEvent* get_onSelectionChange()
		{
			return ((LegacyEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_GET_ONSELECTIONCHANGE_OFFSET))(nullptr);
		}

		::System::Void set_onSelectionChange(LegacyEvent* arg)
		{
			((::System::Void(*)(LegacyEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_SET_ONSELECTIONCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_GET_ISOPEN_OFFSET))(nullptr);
		}

		::System::String* get_value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Object* get_data()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_GET_DATA_OFFSET))(nullptr);
		}

		::System::Action* get_callback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_GET_CALLBACK_OFFSET))(nullptr);
		}

		::System::Boolean get_isColliderEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_GET_ISCOLLIDERENABLED_OFFSET))(nullptr);
		}

		::System::Void set_isColliderEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_SET_ISCOLLIDERENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Int32 get_activeFontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_GET_ACTIVEFONTSIZE_OFFSET))(nullptr);
		}

		::System::Single get_activeFontScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_GET_ACTIVEFONTSCALE_OFFSET))(nullptr);
		}

		::System::Single get_fitScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_GET_FITSCALE_OFFSET))(nullptr);
		}

		::System::Void Set(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_SET_OFFSET))(str, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_CLEAR_OFFSET))(nullptr);
		}

		::System::Void AddItem(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ADDITEM_OFFSET))(str, nullptr);
		}

		::System::Void AddItem(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ADDITEM_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddItem(::System::String* str, ::System::Object* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ADDITEM_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void RemoveItem(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_REMOVEITEM_OFFSET))(str, nullptr);
		}

		::System::Void RemoveItemByData(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_REMOVEITEMBYDATA_OFFSET))(arg, nullptr);
		}

		::System::Void TriggerCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_TRIGGERCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_START_OFFSET))(nullptr);
		}

		::System::Void OnLocalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ONLOCALIZE_OFFSET))(nullptr);
		}

		::System::Void Highlight(UILabel* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(UILabel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_HIGHLIGHT_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector3* GetHighlightPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_GETHIGHLIGHTPOSITION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* UpdateTweenPosition()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_UPDATETWEENPOSITION_OFFSET))(nullptr);
		}

		::System::Void OnItemHover(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ONITEMHOVER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnItemPress(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ONITEMPRESS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnItemClick(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ONITEMCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void Select(UILabel* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(UILabel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_SELECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnNavigate(::UnityEngine::KeyCode* arg)
		{
			((::System::Void(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ONNAVIGATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnKey(::UnityEngine::KeyCode* arg)
		{
			((::System::Void(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ONKEY_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_CLOSE_OFFSET))(nullptr);
		}

		::System::Void CloseSelf()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_CLOSESELF_OFFSET))(nullptr);
		}

		::System::Void AnimateColor(UIWidget* arg)
		{
			((::System::Void(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ANIMATECOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void AnimatePosition(UIWidget* arg, ::System::Boolean arg2, ::System::Single arg3)
		{
			((::System::Void(*)(UIWidget*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ANIMATEPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AnimateScale(UIWidget* arg, ::System::Boolean arg2, ::System::Single arg3)
		{
			((::System::Void(*)(UIWidget*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ANIMATESCALE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Animate(UIWidget* arg, ::System::Boolean arg2, ::System::Single arg3)
		{
			((::System::Void(*)(UIWidget*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ANIMATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnDoubleClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_ONDOUBLECLICK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CloseIfUnselected()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_CLOSEIFUNSELECTED_OFFSET))(nullptr);
		}

		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_SHOW_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPLIST_.CTOR_OFFSET))(nullptr);
		}

	};

