#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
class UIWidget;
namespace UnityEngine { class Animation; }

#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x262D540)
#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x262D550)
#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_ADD_ONNOWPLAYINGELEMENTHIDDEN_OFFSET UNITYSDK_OFFSET(0x262D6D0)
#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x262D770)
#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_DESELECT_OFFSET UNITYSDK_OFFSET(0x262D800)
#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x262D8B0)
#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_SET_ISNOWPLAYING_OFFSET UNITYSDK_OFFSET(0x262D9E0)
#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_ADD_ONSELECTED_OFFSET UNITYSDK_OFFSET(0x262D9F0)
#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_REMOVE_ONNOWPLAYINGELEMENTSHOWN_OFFSET UNITYSDK_OFFSET(0x262DA90)
#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x262DB30)
#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_ADD_ONNOWPLAYINGELEMENTSHOWN_OFFSET UNITYSDK_OFFSET(0x262DB40)
#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x262DBE0)
#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_ONBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x262DBF0)
#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_REMOVE_ONSELECTED_OFFSET UNITYSDK_OFFSET(0x262DC00)
#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_SELECT_OFFSET UNITYSDK_OFFSET(0x262D900)
#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_GET_ISNOWPLAYING_OFFSET UNITYSDK_OFFSET(0x262DCA0)
#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_REMOVE_ONNOWPLAYINGELEMENTHIDDEN_OFFSET UNITYSDK_OFFSET(0x262DCB0)
#define UIINTERACTIVEWORLDRAIDREPLAYELEMENT_GET_WIDGET_OFFSET UNITYSDK_OFFSET(0x262DD50)

	inline static constexpr unsigned int UIInteractiveWorldRaidReplayElement_TypeDefinitionIndex = 6559;

	class UIInteractiveWorldRaidReplayElement : public Il2CppObject
	{
	public:
		::System::Boolean _IsNowPlaying_k__BackingField; // 0x18
		Il2CppObject* OnSelected; // 0x20
		Il2CppObject* OnNowPlayingElementHidden; // 0x28
		::System::Action* OnNowPlayingElementShown; // 0x30
		::System::Int64 groupId; // 0x38
		MXButton* button; // 0x40
		::Il2CppArray<::System::Object*>* onObjects; // 0x48
		::UnityEngine::GameObject* nowPlayingLabel; // 0x50
		UILabel* chapterNameLabel; // 0x58
		UILabel* chapterContentLabel; // 0x60
		::System::Boolean _isVisible; // 0x68
		UIWidget* _widget; // 0x70
		::UnityEngine::Animation* _animation; // 0x78
		::System::String* OnAnimationName; // 0x0
		::System::String* OffAnimationName; // 0x0

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void add_OnNowPlayingElementHidden(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_ADD_ONNOWPLAYINGELEMENTHIDDEN_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsVisible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_SET_ISVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Void Deselect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_DESELECT_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsNowPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_SET_ISNOWPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnSelected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_ADD_ONSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnNowPlayingElementShown(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_REMOVE_ONNOWPLAYINGELEMENTSHOWN_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_GET_ISVISIBLE_OFFSET))(nullptr);
		}

		::System::Void add_OnNowPlayingElementShown(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_ADD_ONNOWPLAYINGELEMENTSHOWN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_ONBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void remove_OnSelected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_REMOVE_ONSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Select()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_SELECT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNowPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_GET_ISNOWPLAYING_OFFSET))(nullptr);
		}

		::System::Void remove_OnNowPlayingElementHidden(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_REMOVE_ONNOWPLAYINGELEMENTHIDDEN_OFFSET))(arg, nullptr);
		}

		UIWidget* get_Widget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDREPLAYELEMENT_GET_WIDGET_OFFSET))(nullptr);
		}

	};

