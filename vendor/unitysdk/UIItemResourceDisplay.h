#pragma once
#include "unitysdk.h"

class UISprite;
class UILabel;
namespace FlatData { class ParcelType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIITEMRESOURCEDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xB77F10)
#define UIITEMRESOURCEDISPLAY_HANDLESYNCINVENTORY_OFFSET UNITYSDK_OFFSET(0xB77F20)
#define UIITEMRESOURCEDISPLAY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB78200)
#define UIITEMRESOURCEDISPLAY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB78310)
#define UIITEMRESOURCEDISPLAY_REFRESH_OFFSET UNITYSDK_OFFSET(0xB77F30)

	inline static constexpr unsigned int UIItemResourceDisplay_TypeDefinitionIndex = 8492;

	class UIItemResourceDisplay : public Il2CppObject
	{
	public:
		UISprite* Image; // 0x18
		UILabel* Text; // 0x20
		::System::Int32 Id; // 0x28
		::FlatData::ParcelType* ParcelType; // 0x2C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIITEMRESOURCEDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleSyncInventory(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIITEMRESOURCEDISPLAY_HANDLESYNCINVENTORY_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIITEMRESOURCEDISPLAY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIITEMRESOURCEDISPLAY_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIITEMRESOURCEDISPLAY_REFRESH_OFFSET))(nullptr);
		}

	};

