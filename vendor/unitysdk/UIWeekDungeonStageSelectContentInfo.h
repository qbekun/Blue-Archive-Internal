#pragma once
#include "unitysdk.h"

class ChaseContentInfo;
class WeekContentInfo;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class WeekDungeonType; }

#define UIWEEKDUNGEONSTAGESELECTCONTENTINFO_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBCF6F0)
#define UIWEEKDUNGEONSTAGESELECTCONTENTINFO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBCF790)
#define UIWEEKDUNGEONSTAGESELECTCONTENTINFO_SET_OFFSET UNITYSDK_OFFSET(0xBCBBC0)
#define UIWEEKDUNGEONSTAGESELECTCONTENTINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0xBCF910)
#define UIWEEKDUNGEONSTAGESELECTCONTENTINFO_REFRESHTICKET_OFFSET UNITYSDK_OFFSET(0xBCF740)
#define UIWEEKDUNGEONSTAGESELECTCONTENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xBCFB00)

	inline static constexpr unsigned int UIWeekDungeonStageSelectContentInfo_TypeDefinitionIndex = 8663;

	class UIWeekDungeonStageSelectContentInfo : public Il2CppObject
	{
	public:
		ChaseContentInfo* Chase; // 0x18
		WeekContentInfo* Week; // 0x20

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECTCONTENTINFO_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECTCONTENTINFO_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Set(::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECTCONTENTINFO_SET_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECTCONTENTINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RefreshTicket()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECTCONTENTINFO_REFRESHTICKET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECTCONTENTINFO_.CTOR_OFFSET))(nullptr);
		}

	};

