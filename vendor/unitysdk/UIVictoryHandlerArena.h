#pragma once
#include "unitysdk.h"

namespace FlatData { class OperatorCondition; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Logic::Data { class BattleTypes; }

#define UIVICTORYHANDLERARENA_GET_OPERATORCONDITION_OFFSET UNITYSDK_OFFSET(0xB87BC0)
#define UIVICTORYHANDLERARENA_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0xB87BD0)
#define UIVICTORYHANDLERARENA_HANDLETOLOBBY_OFFSET UNITYSDK_OFFSET(0xB87BE0)
#define UIVICTORYHANDLERARENA_ADDMISSIONPOPUP_OFFSET UNITYSDK_OFFSET(0xB87C70)
#define UIVICTORYHANDLERARENA_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0xB87C80)
#define UIVICTORYHANDLERARENA_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0xB87C90)
#define UIVICTORYHANDLERARENA_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0xB87E40)
#define UIVICTORYHANDLERARENA_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0xB87E50)
#define UIVICTORYHANDLERARENA_.CTOR_OFFSET UNITYSDK_OFFSET(0xB87EF0)
#define UIVICTORYHANDLERARENA_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0xB87F00)

	inline static constexpr unsigned int UIVictoryHandlerArena_TypeDefinitionIndex = 8546;

	class UIVictoryHandlerArena : public Il2CppObject
	{
	public:
		::FlatData::OperatorCondition* get_OperatorCondition()
		{
			return ((::FlatData::OperatorCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERARENA_GET_OPERATORCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERARENA_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void HandleToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERARENA_HANDLETOLOBBY_OFFSET))(nullptr);
		}

		::System::Void AddMissionPopup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERARENA_ADDMISSIONPOPUP_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERARENA_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERARENA_REQUESTRESULT_OFFSET))(nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERARENA_DETACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERARENA_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERARENA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERARENA_ATTACHLISTENER_OFFSET))(nullptr);
		}

	};

