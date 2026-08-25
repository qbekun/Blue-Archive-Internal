#pragma once
#include "unitysdk.h"

class UISprite;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIMULTIFLOORRAIDREDDOT_HANDLERAIDREDDOT_OFFSET UNITYSDK_OFFSET(0x26A4B50)
#define UIMULTIFLOORRAIDREDDOT_SETREDDOT_OFFSET UNITYSDK_OFFSET(0x26A4B60)
#define UIMULTIFLOORRAIDREDDOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x26A4D50)
#define UIMULTIFLOORRAIDREDDOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26A4D60)

	inline static constexpr unsigned int UIMultiFloorRaidRedDot_TypeDefinitionIndex = 6852;

	class UIMultiFloorRaidRedDot : public Il2CppObject
	{
	public:
		UISprite* redDot; // 0x18

		::System::Boolean HandleRaidRedDot(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDREDDOT_HANDLERAIDREDDOT_OFFSET))(arg, nullptr);
		}

		::System::Void SetRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDREDDOT_SETREDDOT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDREDDOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDREDDOT_.CTOR_OFFSET))(nullptr);
		}

	};

