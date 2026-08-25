#pragma once
#include "unitysdk.h"

class UISprite;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIFREEPRODUCTREDDOT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x26454E0)
#define UIFREEPRODUCTREDDOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x26455E0)
#define UIFREEPRODUCTREDDOT_SET_SHOWREDDOTMANUALLY_OFFSET UNITYSDK_OFFSET(0x2645720)
#define UIFREEPRODUCTREDDOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2645730)
#define UIFREEPRODUCTREDDOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2645830)
#define UIFREEPRODUCTREDDOT_HANDLEREFRESHFREEPRODUCTREDDOTMESSAGE_OFFSET UNITYSDK_OFFSET(0x2645840)
#define UIFREEPRODUCTREDDOT_GET_SHOWREDDOTMANUALLY_OFFSET UNITYSDK_OFFSET(0x26458C0)
#define UIFREEPRODUCTREDDOT_SETREDDOT_OFFSET UNITYSDK_OFFSET(0x2645690)

	inline static constexpr unsigned int UIFreeProductRedDot_TypeDefinitionIndex = 6620;

	class UIFreeProductRedDot : public Il2CppObject
	{
	public:
		UISprite* RedDotSprite; // 0x18
		::System::Boolean _ShowRedDotManually_k__BackingField; // 0x20

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFREEPRODUCTREDDOT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFREEPRODUCTREDDOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_ShowRedDotManually(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFREEPRODUCTREDDOT_SET_SHOWREDDOTMANUALLY_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFREEPRODUCTREDDOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFREEPRODUCTREDDOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleRefreshFreeProductRedDotMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIFREEPRODUCTREDDOT_HANDLEREFRESHFREEPRODUCTREDDOTMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShowRedDotManually()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFREEPRODUCTREDDOT_GET_SHOWREDDOTMANUALLY_OFFSET))(nullptr);
		}

		::System::Void SetRedDot(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFREEPRODUCTREDDOT_SETREDDOT_OFFSET))(arg, nullptr);
		}

	};

