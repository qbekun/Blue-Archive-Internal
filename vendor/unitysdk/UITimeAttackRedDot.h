#pragma once
#include "unitysdk.h"

class UISprite;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UITIMEATTACKREDDOT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB6A460)
#define UITIMEATTACKREDDOT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB6A560)
#define UITIMEATTACKREDDOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB6A6E0)
#define UITIMEATTACKREDDOT_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB6A7D0)
#define UITIMEATTACKREDDOT_SETREDDOT_OFFSET UNITYSDK_OFFSET(0xB6A6F0)
#define UITIMEATTACKREDDOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB6A840)

	inline static constexpr unsigned int UITimeAttackRedDot_TypeDefinitionIndex = 8445;

	class UITimeAttackRedDot : public Il2CppObject
	{
	public:
		UISprite* redDot; // 0x18

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKREDDOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKREDDOT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKREDDOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKREDDOT_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKREDDOT_SETREDDOT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKREDDOT_.CTOR_OFFSET))(nullptr);
		}

	};

