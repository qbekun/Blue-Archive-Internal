#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::NetworkProtocol { class EventContentFortuneGachaPurchaseResponse; }

#define UIEVENTFORTUNEGACHASHOP_809_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24AB700)
#define UIEVENTFORTUNEGACHASHOP_809_FXALLACTIVE_OFFSET UNITYSDK_OFFSET(0x24AB750)
#define UIEVENTFORTUNEGACHASHOP_809_ONCLICKROLLBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x24AB7A0)
#define UIEVENTFORTUNEGACHASHOP_809___N__0_OFFSET UNITYSDK_OFFSET(0x24AB7B0)
#define UIEVENTFORTUNEGACHASHOP_809_AWAKE_OFFSET UNITYSDK_OFFSET(0x24AB820)
#define UIEVENTFORTUNEGACHASHOP_809_HANDLEEVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24AB960)
#define UIEVENTFORTUNEGACHASHOP_809_.CTOR_OFFSET UNITYSDK_OFFSET(0x24ABB20)
#define UIEVENTFORTUNEGACHASHOP_809_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x24ABB30)
#define UIEVENTFORTUNEGACHASHOP_809_CO_SHOWPURCHASEDRESULT_OFFSET UNITYSDK_OFFSET(0x24ABA90)

	inline static constexpr unsigned int UIEventFortuneGachaShop_809_TypeDefinitionIndex = 5831;

	class UIEventFortuneGachaShop_809 : public Il2CppObject
	{
	public:
		UILabel* omikujiDescriptionLabel; // 0x180
		::UnityEngine::GameObject* fxLuck1_4Root; // 0x188
		::UnityEngine::GameObject* fxLuck5Root; // 0x190

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_809_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void FxAllActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_809_FXALLACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRollBarrelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_809_ONCLICKROLLBARRELBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_809___N__0_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_809_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentFortuneGachaPurchaseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_809_HANDLEEVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_809_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_809_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowPurchasedResult(::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_809_CO_SHOWPURCHASEDRESULT_OFFSET))(arg, nullptr);
		}

	};

