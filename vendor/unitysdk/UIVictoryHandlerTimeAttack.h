#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }
namespace FlatData { class ContentType; }
namespace FlatData { class OperatorCondition; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIVICTORYHANDLERTIMEATTACK_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0xBAC3A0)
#define UIVICTORYHANDLERTIMEATTACK_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xBAC3B0)
#define UIVICTORYHANDLERTIMEATTACK_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0xBAC3C0)
#define UIVICTORYHANDLERTIMEATTACK_GET_OPERATORCONDITION_OFFSET UNITYSDK_OFFSET(0xBAC520)
#define UIVICTORYHANDLERTIMEATTACK_HANDLETOLOBBY_OFFSET UNITYSDK_OFFSET(0xBAC530)
#define UIVICTORYHANDLERTIMEATTACK_ADDMISSIONPOPUP_OFFSET UNITYSDK_OFFSET(0xBAC5C0)
#define UIVICTORYHANDLERTIMEATTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xBAC5D0)
#define UIVICTORYHANDLERTIMEATTACK_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0xBAC5E0)
#define UIVICTORYHANDLERTIMEATTACK_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0xBACA50)
#define UIVICTORYHANDLERTIMEATTACK_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0xBACA60)
#define UIVICTORYHANDLERTIMEATTACK_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0xBACA70)

	inline static constexpr unsigned int UIVictoryHandlerTimeAttack_TypeDefinitionIndex = 8566;

	class UIVictoryHandlerTimeAttack : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERTIMEATTACK_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERTIMEATTACK_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERTIMEATTACK_HANDLECLOSE_OFFSET))(nullptr);
		}

		::FlatData::OperatorCondition* get_OperatorCondition()
		{
			return ((::FlatData::OperatorCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERTIMEATTACK_GET_OPERATORCONDITION_OFFSET))(nullptr);
		}

		::System::Void HandleToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERTIMEATTACK_HANDLETOLOBBY_OFFSET))(nullptr);
		}

		::System::Void AddMissionPopup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERTIMEATTACK_ADDMISSIONPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERTIMEATTACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERTIMEATTACK_REQUESTRESULT_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERTIMEATTACK_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERTIMEATTACK_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERTIMEATTACK_DETACHLISTENER_OFFSET))(nullptr);
		}

	};

