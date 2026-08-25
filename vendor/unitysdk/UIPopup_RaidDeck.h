#pragma once
#include "unitysdk.h"

class RaidDeckListScrollViewController;
namespace MX::NetworkProtocol { class RaidGetBestTeamResponse; }

#define UIPOPUP_RAIDDECK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27914E0)
#define UIPOPUP_RAIDDECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2791500)
#define UIPOPUP_RAIDDECK_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2791510)
#define UIPOPUP_RAIDDECK_INITSCROLLLIST_OFFSET UNITYSDK_OFFSET(0x2791530)

	inline static constexpr unsigned int UIPopup_RaidDeck_TypeDefinitionIndex = 7436;

	class UIPopup_RaidDeck : public Il2CppObject
	{
	public:
		RaidDeckListScrollViewController* ScrollView; // 0xD8
		::MX::NetworkProtocol::RaidGetBestTeamResponse* response; // 0xE0

		::System::Void Initialize(::MX::NetworkProtocol::RaidGetBestTeamResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::RaidGetBestTeamResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDDECK_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDDECK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDDECK_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void InitScrollList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDDECK_INITSCROLLLIST_OFFSET))(nullptr);
		}

	};

