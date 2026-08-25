#pragma once
#include "unitysdk.h"

class UISprite;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIWORKTICKETREDDOT_AWAKE_OFFSET UNITYSDK_OFFSET(0xBDE400)
#define UIWORKTICKETREDDOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xBDE500)
#define UIWORKTICKETREDDOT_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBDE510)
#define UIWORKTICKETREDDOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBDE660)
#define UIWORKTICKETREDDOT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBDE6E0)
#define UIWORKTICKETREDDOT_SETREDDOT_OFFSET UNITYSDK_OFFSET(0xBDE5E0)

	inline static constexpr unsigned int UIWorkTicketReddot_TypeDefinitionIndex = 8704;

	class UIWorkTicketReddot : public Il2CppObject
	{
	public:
		UISprite* ChaserReddot; // 0x18
		UISprite* SchoolDungeonReddot; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORKTICKETREDDOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORKTICKETREDDOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORKTICKETREDDOT_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORKTICKETREDDOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORKTICKETREDDOT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void SetRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORKTICKETREDDOT_SETREDDOT_OFFSET))(nullptr);
		}

	};

