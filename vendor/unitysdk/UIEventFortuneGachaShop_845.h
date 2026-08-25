#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::NetworkProtocol { class EventContentFortuneGachaPurchaseResponse; }

#define UIEVENTFORTUNEGACHASHOP_845_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24ACB10)
#define UIEVENTFORTUNEGACHASHOP_845_AWAKE_OFFSET UNITYSDK_OFFSET(0x24ACBA0)
#define UIEVENTFORTUNEGACHASHOP_845_HANDLEEVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24ACCE0)
#define UIEVENTFORTUNEGACHASHOP_845_CO_SHOWPURCHASEDRESULT_OFFSET UNITYSDK_OFFSET(0x24ACDF0)
#define UIEVENTFORTUNEGACHASHOP_845_FXALLACTIVE_OFFSET UNITYSDK_OFFSET(0x24ACB30)
#define UIEVENTFORTUNEGACHASHOP_845_ONCLICKROLLBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x24ACEA0)
#define UIEVENTFORTUNEGACHASHOP_845_.CTOR_OFFSET UNITYSDK_OFFSET(0x24ACEB0)

	inline static constexpr unsigned int UIEventFortuneGachaShop_845_TypeDefinitionIndex = 5835;

	class UIEventFortuneGachaShop_845 : public Il2CppObject
	{
	public:
		UILabel* omikujiDescriptionLabel; // 0x180
		UITexture* omikujiPaperSmallTexture; // 0x188
		UITexture* omikujiNameTexture; // 0x190
		::UnityEngine::GameObject* fxBallLightRoot; // 0x198
		::Il2CppArray<::System::Object*>* fxBallLineRoots; // 0x1A0
		::UnityEngine::GameObject* fxResultBadRoot; // 0x1A8
		::UnityEngine::GameObject* fxResultGoodRoot; // 0x1B0
		::UnityEngine::GameObject* fxResultBestRoot; // 0x1B8

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_845_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_845_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentFortuneGachaPurchaseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_845_HANDLEEVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowPurchasedResult(::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_845_CO_SHOWPURCHASEDRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void FxAllActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_845_FXALLACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRollBarrelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_845_ONCLICKROLLBARRELBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_845_.CTOR_OFFSET))(nullptr);
		}

	};

