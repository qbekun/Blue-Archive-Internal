#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
namespace UnityEngine { class GameObject; }
namespace MX::NetworkProtocol { class EventContentFortuneGachaPurchaseResponse; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIEVENTFORTUNEGACHASHOP_853_.CTOR_OFFSET UNITYSDK_OFFSET(0x24ADD70)
#define UIEVENTFORTUNEGACHASHOP_853_FXALLACTIVE_OFFSET UNITYSDK_OFFSET(0x24ADD80)
#define UIEVENTFORTUNEGACHASHOP_853_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x24ADDF0)
#define UIEVENTFORTUNEGACHASHOP_853_CO_SHOWPURCHASEDRESULT_OFFSET UNITYSDK_OFFSET(0x24ADE80)
#define UIEVENTFORTUNEGACHASHOP_853_HANDLEEVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24ADF30)
#define UIEVENTFORTUNEGACHASHOP_853_ONCLICKROLLBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x24AE030)
#define UIEVENTFORTUNEGACHASHOP_853___N__0_OFFSET UNITYSDK_OFFSET(0x24AE040)
#define UIEVENTFORTUNEGACHASHOP_853_AWAKE_OFFSET UNITYSDK_OFFSET(0x24AE0B0)
#define UIEVENTFORTUNEGACHASHOP_853_GRADERESULTFXACTUVE_OFFSET UNITYSDK_OFFSET(0x24AE340)
#define UIEVENTFORTUNEGACHASHOP_853_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24AE4D0)

	inline static constexpr unsigned int UIEventFortuneGachaShop_853_TypeDefinitionIndex = 5841;

	class UIEventFortuneGachaShop_853 : public Il2CppObject
	{
	public:
		UILabel* omikujiName; // 0x180
		UILabel* omikujiDescriptionLabel; // 0x188
		UITexture* logoImageTexture; // 0x190
		UITexture* logoTextImageTexture; // 0x198
		UITexture* brandNameImageTexture; // 0x1A0
		UITexture* completeTextImageTexture; // 0x1A8
		::UnityEngine::GameObject* fxLuck1_2Root; // 0x1B0
		::UnityEngine::GameObject* fxLuck3Root; // 0x1B8
		::UnityEngine::GameObject* fxLuck4Root; // 0x1C0
		::UnityEngine::GameObject* fxLuckUnluckRoot; // 0x1C8
		::UnityEngine::GameObject* gradeCurrentResultFX; // 0x1D0
		::Il2CppArray<::System::Object*>* gradeCurrentResultFxRoots; // 0x1D8
		::System::String* logoImagePath; // 0x0
		::System::String* logoTextImagePath; // 0x0
		::System::String* brandNameTextImagePath; // 0x0
		::System::String* completeTextImagePath; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_853_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FxAllActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_853_FXALLACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_853_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowPurchasedResult(::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_853_CO_SHOWPURCHASEDRESULT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentFortuneGachaPurchaseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_853_HANDLEEVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRollBarrelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_853_ONCLICKROLLBARRELBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_853___N__0_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_853_AWAKE_OFFSET))(nullptr);
		}

		::System::Void GradeResultFxActuve(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_853_GRADERESULTFXACTUVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_853_ONDISABLE_OFFSET))(nullptr);
		}

	};

