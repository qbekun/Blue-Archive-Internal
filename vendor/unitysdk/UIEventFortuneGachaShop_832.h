#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::NetworkProtocol { class EventContentFortuneGachaPurchaseResponse; }

#define UIEVENTFORTUNEGACHASHOP_832_.CTOR_OFFSET UNITYSDK_OFFSET(0x24AC2E0)
#define UIEVENTFORTUNEGACHASHOP_832_FXALLACTIVE_OFFSET UNITYSDK_OFFSET(0x24AC2F0)
#define UIEVENTFORTUNEGACHASHOP_832_HANDLEEVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24AC350)
#define UIEVENTFORTUNEGACHASHOP_832_AWAKE_OFFSET UNITYSDK_OFFSET(0x24AC530)
#define UIEVENTFORTUNEGACHASHOP_832_CO_SHOWPURCHASEDRESULT_OFFSET UNITYSDK_OFFSET(0x24AC4A0)
#define UIEVENTFORTUNEGACHASHOP_832_ONCLICKROLLBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x24AC690)

	inline static constexpr unsigned int UIEventFortuneGachaShop_832_TypeDefinitionIndex = 5833;

	class UIEventFortuneGachaShop_832 : public Il2CppObject
	{
	public:
		UILabel* omikujiName; // 0x180
		UILabel* omikujiDescriptionLabel; // 0x188
		::UnityEngine::GameObject* fxLuck1_3Root; // 0x190
		::UnityEngine::GameObject* fxLuck4Root; // 0x198
		::UnityEngine::GameObject* fxLuckUnluckRoot; // 0x1A0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_832_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FxAllActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_832_FXALLACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentFortuneGachaPurchaseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_832_HANDLEEVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_832_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowPurchasedResult(::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_832_CO_SHOWPURCHASEDRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRollBarrelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_832_ONCLICKROLLBARRELBUTTON_OFFSET))(nullptr);
		}

	};

