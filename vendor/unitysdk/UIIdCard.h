#pragma once
#include "unitysdk.h"

class MXButton;
class UIIdCardObject;
namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIIDCARD_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2574F60)
#define UIIDCARD_HANDLEACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2574FF0)
#define UIIDCARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x25750A0)
#define UIIDCARD_SETIDCARD_OFFSET UNITYSDK_OFFSET(0x2575040)
#define UIIDCARD_ONCLICKENLARGECARD_OFFSET UNITYSDK_OFFSET(0x2576020)
#define UIIDCARD_ONCLICKCOPYFRIENDCODE_OFFSET UNITYSDK_OFFSET(0x25760F0)
#define UIIDCARD_ONCLICKEDITCARD_OFFSET UNITYSDK_OFFSET(0x25762E0)
#define UIIDCARD_ONBACK_OFFSET UNITYSDK_OFFSET(0x2576390)
#define UIIDCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x25763E0)
#define UIIDCARD_HANDLEFRIENDGETIDCARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x25763F0)
#define UIIDCARD_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2576440)
#define UIIDCARD___N__0_OFFSET UNITYSDK_OFFSET(0x2576580)
#define UIIDCARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2576590)

	inline static constexpr unsigned int UIIdCard_TypeDefinitionIndex = 6170;

	class UIIdCard : public Il2CppObject
	{
	public:
		MXButton* copyFriendCodeButton; // 0xD8
		MXButton* enlargeIdCardButton; // 0xE0
		MXButton* editIdCardButton; // 0xE8
		UIIdCardObject* cardObject; // 0xF0
		::UnityEngine::GameObject* idCardEnlarge; // 0xF8

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARD_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Boolean HandleAccountSetRepresentCharacterIdAndCommentResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIIDCARD_HANDLEACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetIdCard(UIIdCardObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(UIIdCardObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIIDCARD_SETIDCARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickEnlargeCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARD_ONCLICKENLARGECARD_OFFSET))(nullptr);
		}

		::System::Void OnClickCopyFriendCode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARD_ONCLICKCOPYFRIENDCODE_OFFSET))(nullptr);
		}

		::System::Void OnClickEditCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARD_ONCLICKEDITCARD_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARD_ONBACK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleFriendGetIdCardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIIDCARD_HANDLEFRIENDGETIDCARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIIDCARD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARD___N__0_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARD_ONDESTROY_OFFSET))(nullptr);
		}

	};

