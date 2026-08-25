#pragma once
#include "../unitysdk.h"

namespace NPA { class PlayStationStoreIconPosition; }

#define NPA_GAMESCALESETTINGSSONY_GET_STOREICONPOSITION_OFFSET UNITYSDK_OFFSET(0x9BE5C10)
#define NPA_GAMESCALESETTINGSSONY_GET_USINGAUTHORIZEDAPP_OFFSET UNITYSDK_OFFSET(0x9BE5C20)
#define NPA_GAMESCALESETTINGSSONY_GET_REQUIRESSETUPISSUERIDONSTARTUP_OFFSET UNITYSDK_OFFSET(0x9BE5C30)
#define NPA_GAMESCALESETTINGSSONY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE5C40)

namespace NPA
{
	inline static constexpr unsigned int GameScaleSettingsSony_TypeDefinitionIndex = 25753;

	class GameScaleSettingsSony : public ResultSet
	{
	public:
		::NPA::PlayStationStoreIconPosition* storeIconPosition; // 0x18
		::System::Boolean usingAuthorizedApp; // 0x1C
		::System::Boolean requiresSetupIssuerIdOnStartup; // 0x1D

		::NPA::PlayStationStoreIconPosition* get_StoreIconPosition()
		{
			return (return (::NPA::PlayStationStoreIconPosition*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMESCALESETTINGSSONY_GET_STOREICONPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean get_UsingAuthorizedApp()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMESCALESETTINGSSONY_GET_USINGAUTHORIZEDAPP_OFFSET))(nullptr);
		}

		::System::Boolean get_RequiresSetupIssuerIdOnStartup()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMESCALESETTINGSSONY_GET_REQUIRESSETUPISSUERIDONSTARTUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMESCALESETTINGSSONY_.CTOR_OFFSET))(nullptr);
		}

	};
}

