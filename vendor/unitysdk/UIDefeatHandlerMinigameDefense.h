#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIDEFEATHANDLERMINIGAMEDEFENSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x23C3750)
#define UIDEFEATHANDLERMINIGAMEDEFENSE_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23C3760)
#define UIDEFEATHANDLERMINIGAMEDEFENSE_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0x23C3770)
#define UIDEFEATHANDLERMINIGAMEDEFENSE_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x23C37A0)
#define UIDEFEATHANDLERMINIGAMEDEFENSE_INITPOPUPLIST_OFFSET UNITYSDK_OFFSET(0x23C37B0)
#define UIDEFEATHANDLERMINIGAMEDEFENSE_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23C3840)
#define UIDEFEATHANDLERMINIGAMEDEFENSE_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0x23C3850)
#define UIDEFEATHANDLERMINIGAMEDEFENSE_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0x23C3860)

	inline static constexpr unsigned int UIDefeatHandlerMinigameDefense_TypeDefinitionIndex = 5261;

	class UIDefeatHandlerMinigameDefense : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERMINIGAMEDEFENSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERMINIGAMEDEFENSE_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERMINIGAMEDEFENSE_HANDLECLOSE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERMINIGAMEDEFENSE_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void InitPopupList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERMINIGAMEDEFENSE_INITPOPUPLIST_OFFSET))(arg, nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERMINIGAMEDEFENSE_DETACHLISTENER_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERMINIGAMEDEFENSE_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERMINIGAMEDEFENSE_REQUESTRESULT_OFFSET))(nullptr);
		}

	};

