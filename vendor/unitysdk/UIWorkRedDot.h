#pragma once
#include "unitysdk.h"

class UISprite;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIWORKREDDOT_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2682020)
#define UIWORKREDDOT_SETREDDOT_OFFSET UNITYSDK_OFFSET(0x2682090)
#define UIWORKREDDOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2682680)
#define UIWORKREDDOT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2682690)
#define UIWORKREDDOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2682810)

	inline static constexpr unsigned int UIWorkRedDot_TypeDefinitionIndex = 6748;

	class UIWorkRedDot : public Il2CppObject
	{
	public:
		UISprite* redDot; // 0x18

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORKREDDOT_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORKREDDOT_SETREDDOT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORKREDDOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORKREDDOT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORKREDDOT_ONENABLE_OFFSET))(nullptr);
		}

	};

