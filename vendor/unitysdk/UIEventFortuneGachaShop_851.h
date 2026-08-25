#pragma once
#include "unitysdk.h"

class UILabel;
class UIScrollView;
namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::NetworkProtocol { class EventContentFortuneGachaPurchaseResponse; }

#define UIEVENTFORTUNEGACHASHOP_851_.CTOR_OFFSET UNITYSDK_OFFSET(0x24AD470)
#define UIEVENTFORTUNEGACHASHOP_851_HANDLEEVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24AD480)
#define UIEVENTFORTUNEGACHASHOP_851_CO_SHOWPURCHASEDRESULT_OFFSET UNITYSDK_OFFSET(0x24AD630)
#define UIEVENTFORTUNEGACHASHOP_851_ONCLICKROLLBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x24AD6E0)
#define UIEVENTFORTUNEGACHASHOP_851_AWAKE_OFFSET UNITYSDK_OFFSET(0x24AD6F0)
#define UIEVENTFORTUNEGACHASHOP_851_FXALLACTIVE_OFFSET UNITYSDK_OFFSET(0x24AD5D0)
#define UIEVENTFORTUNEGACHASHOP_851_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24AD830)

	inline static constexpr unsigned int UIEventFortuneGachaShop_851_TypeDefinitionIndex = 5837;

	class UIEventFortuneGachaShop_851 : public Il2CppObject
	{
	public:
		UILabel* omikujiName; // 0x180
		UILabel* omikujiDescriptionLabel; // 0x188
		UIScrollView* DescriptionLabelScrollView; // 0x190
		::UnityEngine::GameObject* fxResultBestRoot; // 0x198
		::UnityEngine::GameObject* fxResultGoodRoot; // 0x1A0
		::UnityEngine::GameObject* fxResultBadRoot; // 0x1A8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_851_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentFortuneGachaPurchaseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_851_HANDLEEVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowPurchasedResult(::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_851_CO_SHOWPURCHASEDRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRollBarrelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_851_ONCLICKROLLBARRELBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_851_AWAKE_OFFSET))(nullptr);
		}

		::System::Void FxAllActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_851_FXALLACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_851_ONDISABLE_OFFSET))(nullptr);
		}

	};

