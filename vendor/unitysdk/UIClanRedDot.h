#pragma once
#include "unitysdk.h"

class UISprite;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UICLANREDDOT_SETREDDOT_OFFSET UNITYSDK_OFFSET(0x2644B30)
#define UICLANREDDOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2644D30)
#define UICLANREDDOT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2644D40)
#define UICLANREDDOT_HANDLEREDDOTCHANGEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x2644EC0)
#define UICLANREDDOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2644F30)
#define UICLANREDDOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2645030)

	inline static constexpr unsigned int UIClanRedDot_TypeDefinitionIndex = 6616;

	class UIClanRedDot : public Il2CppObject
	{
	public:
		UISprite* redDot; // 0x18

		::System::Void SetRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANREDDOT_SETREDDOT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANREDDOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANREDDOT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean HandleRedDotChangedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANREDDOT_HANDLEREDDOTCHANGEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANREDDOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANREDDOT_.CTOR_OFFSET))(nullptr);
		}

	};

