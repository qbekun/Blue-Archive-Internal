#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace UnityEngine { class Color; }
class ObjectAnimKeyPair;

#define UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_SHOW_OFFSET UNITYSDK_OFFSET(0x2624F80)
#define UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x26234C0)
#define UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP__SHOW_G__ENDTIMESPANTOTEXT|15_0_OFFSET UNITYSDK_OFFSET(0x262CAA0)
#define UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_HIDE_OFFSET UNITYSDK_OFFSET(0x2626ED0)
#define UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x262D070)
#define UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_GET_ISBOSSSPAWNED_OFFSET UNITYSDK_OFFSET(0x262D090)
#define UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_GET_ISREDDOTACTIVE_OFFSET UNITYSDK_OFFSET(0x2623890)
#define UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_GET_CURRENTBUTTONOBJECT_OFFSET UNITYSDK_OFFSET(0x262CA70)
#define UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2624670)
#define UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x262D0A0)

	inline static constexpr unsigned int UIInteractiveWorldRaidLobby_WorldMap_TypeDefinitionIndex = 6558;

	class UIInteractiveWorldRaidLobby_WorldMap : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* alertLabel; // 0x18
		::Il2CppArray<::System::Object*>* buttonObjects; // 0x20
		::System::Int32 _activeObjectIndex; // 0x28
		::System::Boolean _isHidden; // 0x2C
		::System::Boolean _isBossSpawned; // 0x2D
		::MX::Data::EventContentSeasonInfo* _seasonInfo; // 0x30
		::Il2CppArray<::System::Object*>* _enablers; // 0x38

		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_SHOW_OFFSET))(nullptr);
		}

		::System::Void UpdateRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_UPDATEREDDOT_OFFSET))(nullptr);
		}

		::System::String* _Show_g__EndTimeSpanToText|15_0(::System::TimeSpan* arg, ::UnityEngine::Color* arg2)
		{
			return ((::System::String*(*)(::System::TimeSpan*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP__SHOW_G__ENDTIMESPANTOTEXT|15_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_HIDE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBossSpawned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_GET_ISBOSSSPAWNED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRedDotActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_GET_ISREDDOTACTIVE_OFFSET))(nullptr);
		}

		ObjectAnimKeyPair* get_CurrentButtonObject()
		{
			return ((ObjectAnimKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_GET_CURRENTBUTTONOBJECT_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_WORLDMAP_ONCLICKBUTTON_OFFSET))(nullptr);
		}

	};

