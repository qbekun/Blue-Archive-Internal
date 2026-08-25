#pragma once
#include "unitysdk.h"

class MXButton;
class UISprite;
class UILabel;
namespace MX::Data { class EventContentSeasonInfo; }

#define UIEVENTLOBBYMENUITEM_ADD_CLICKED_OFFSET UNITYSDK_OFFSET(0x2456BA0)
#define UIEVENTLOBBYMENUITEM_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x24584C0)
#define UIEVENTLOBBYMENUITEM_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x24584E0)
#define UIEVENTLOBBYMENUITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x24584F0)
#define UIEVENTLOBBYMENUITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x24573A0)
#define UIEVENTLOBBYMENUITEM_REMOVE_CLICKED_OFFSET UNITYSDK_OFFSET(0x2458610)
#define UIEVENTLOBBYMENUITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x24586B0)
#define UIEVENTLOBBYMENUITEM_UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x2457810)
#define UIEVENTLOBBYMENUITEM_SETREDDOT_OFFSET UNITYSDK_OFFSET(0x2457C90)
#define UIEVENTLOBBYMENUITEM_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x24586C0)

	inline static constexpr unsigned int UIEventLobbyMenuItem_TypeDefinitionIndex = 5579;

	class UIEventLobbyMenuItem : public Il2CppObject
	{
	public:
		MXButton* button; // 0x18
		UISprite* iconSprite; // 0x20
		UILabel* nameLabel; // 0x28
		UISprite* reddotSprite; // 0x30
		::MX::Data::EventContentSeasonInfo* _SeasonInfo_k__BackingField; // 0x38
		Il2CppObject* Clicked; // 0x40

		::System::Void add_Clicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUITEM_ADD_CLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUITEM_ONCLICKBUTTON_OFFSET))(nullptr);
		}

		::MX::Data::EventContentSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::EventContentSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUITEM_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUITEM_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Clicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUITEM_REMOVE_CLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateReddot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUITEM_UPDATEREDDOT_OFFSET))(nullptr);
		}

		::System::Void SetReddot(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUITEM_SETREDDOT_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonInfo(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYMENUITEM_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

	};

