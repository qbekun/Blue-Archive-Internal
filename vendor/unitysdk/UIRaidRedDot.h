#pragma once
#include "unitysdk.h"

class UISprite;
class RedDotRaidType;
namespace FlatData { class ContentType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIRAIDREDDOT_SETRAIDREDDOT_OFFSET UNITYSDK_OFFSET(0x279AB80)
#define UIRAIDREDDOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27A8E20)
#define UIRAIDREDDOT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x27A8E30)
#define UIRAIDREDDOT_HANDLERAIDREDDOT_OFFSET UNITYSDK_OFFSET(0x27A9260)
#define UIRAIDREDDOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27A9270)
#define UIRAIDREDDOT_SET_CURRENTRAIDTYPE_OFFSET UNITYSDK_OFFSET(0x27A9670)
#define UIRAIDREDDOT_GET_CURRENTRAIDTYPE_OFFSET UNITYSDK_OFFSET(0x27A9680)

	inline static constexpr unsigned int UIRaidRedDot_TypeDefinitionIndex = 7494;

	class UIRaidRedDot : public Il2CppObject
	{
	public:
		UISprite* redDot; // 0x18
		::System::Boolean onlyRedDot; // 0x20
		RedDotRaidType* raidType; // 0x24
		::FlatData::ContentType* _CurrentRaidType_k__BackingField; // 0x28

		::System::Void SetRaidRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDREDDOT_SETRAIDREDDOT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDREDDOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDREDDOT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleRaidRedDot(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDREDDOT_HANDLERAIDREDDOT_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDREDDOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentRaidType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDREDDOT_SET_CURRENTRAIDTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_CurrentRaidType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDREDDOT_GET_CURRENTRAIDTYPE_OFFSET))(nullptr);
		}

	};

