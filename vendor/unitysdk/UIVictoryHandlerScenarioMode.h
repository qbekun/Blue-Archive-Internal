#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Logic::Data { class BattleTypes; }

#define UIVICTORYHANDLERSCENARIOMODE_.CTOR_OFFSET UNITYSDK_OFFSET(0xBAB3D0)
#define UIVICTORYHANDLERSCENARIOMODE_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0xBAB3E0)
#define UIVICTORYHANDLERSCENARIOMODE_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0xBAB580)
#define UIVICTORYHANDLERSCENARIOMODE_HANDLETOLOBBY_OFFSET UNITYSDK_OFFSET(0xBAB590)
#define UIVICTORYHANDLERSCENARIOMODE_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0xBAB620)
#define UIVICTORYHANDLERSCENARIOMODE_ADDMISSIONPOPUP_OFFSET UNITYSDK_OFFSET(0xBAB630)
#define UIVICTORYHANDLERSCENARIOMODE_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0xBAB640)
#define UIVICTORYHANDLERSCENARIOMODE_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0xBAB650)
#define UIVICTORYHANDLERSCENARIOMODE_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0xBAB760)

	inline static constexpr unsigned int UIVictoryHandlerScenarioMode_TypeDefinitionIndex = 8561;

	class UIVictoryHandlerScenarioMode : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCENARIOMODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCENARIOMODE_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCENARIOMODE_DETACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void HandleToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCENARIOMODE_HANDLETOLOBBY_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCENARIOMODE_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void AddMissionPopup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCENARIOMODE_ADDMISSIONPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCENARIOMODE_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCENARIOMODE_REQUESTRESULT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCENARIOMODE_GET_BATTLETYPE_OFFSET))(nullptr);
		}

	};

