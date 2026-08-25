#pragma once
#include "unitysdk.h"

class UISprite;
class UIWorldRaidRoomlistInfo;

#define UIINTERACTIVEWORLDRAIDROOMLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x262EA00)
#define UIINTERACTIVEWORLDRAIDROOMLIST_ONCLICKROOM_OFFSET UNITYSDK_OFFSET(0x262EA10)
#define UIINTERACTIVEWORLDRAIDROOMLIST_SETDATA_OFFSET UNITYSDK_OFFSET(0x262ECC0)

	inline static constexpr unsigned int UIInteractiveWorldRaidRoomlist_TypeDefinitionIndex = 6562;

	class UIInteractiveWorldRaidRoomlist : public Il2CppObject
	{
	public:
		UISprite* difficultySprite; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDROOMLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickRoom()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDROOMLIST_ONCLICKROOM_OFFSET))(nullptr);
		}

		::System::Void SetData(UIWorldRaidRoomlistInfo* arg)
		{
			((::System::Void(*)(UIWorldRaidRoomlistInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDROOMLIST_SETDATA_OFFSET))(arg, nullptr);
		}

	};

