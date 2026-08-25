#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Logic::Data { class BattleTypes; }

#define UIDEFEATHANDLERSCENARIOMODE_INITPOPUPLIST_OFFSET UNITYSDK_OFFSET(0x23C43C0)
#define UIDEFEATHANDLERSCENARIOMODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x23C43D0)
#define UIDEFEATHANDLERSCENARIOMODE_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0x23C43E0)
#define UIDEFEATHANDLERSCENARIOMODE_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0x23C4400)
#define UIDEFEATHANDLERSCENARIOMODE_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23C45E0)
#define UIDEFEATHANDLERSCENARIOMODE_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23C45F0)
#define UIDEFEATHANDLERSCENARIOMODE_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0x23C4600)
#define UIDEFEATHANDLERSCENARIOMODE_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x23C4610)

	inline static constexpr unsigned int UIDefeatHandlerScenarioMode_TypeDefinitionIndex = 5265;

	class UIDefeatHandlerScenarioMode : public Il2CppObject
	{
	public:
		::System::Void InitPopupList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCENARIOMODE_INITPOPUPLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCENARIOMODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCENARIOMODE_REQUESTRESULT_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCENARIOMODE_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCENARIOMODE_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCENARIOMODE_DETACHLISTENER_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCENARIOMODE_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCENARIOMODE_GET_BATTLETYPE_OFFSET))(nullptr);
		}

	};

