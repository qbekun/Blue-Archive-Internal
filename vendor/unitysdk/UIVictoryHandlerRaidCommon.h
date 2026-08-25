#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIVICTORYHANDLERRAIDCOMMON_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0xBAAB70)
#define UIVICTORYHANDLERRAIDCOMMON_CHECKRAIDSCENARIO_OFFSET UNITYSDK_OFFSET(0xBA9A50)
#define UIVICTORYHANDLERRAIDCOMMON_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0xBAAB90)
#define UIVICTORYHANDLERRAIDCOMMON_ADDMISSIONPOPUP_OFFSET UNITYSDK_OFFSET(0xBAABA0)
#define UIVICTORYHANDLERRAIDCOMMON_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0xBAABB0)
#define UIVICTORYHANDLERRAIDCOMMON_.CTOR_OFFSET UNITYSDK_OFFSET(0xBA98C0)
#define UIVICTORYHANDLERRAIDCOMMON_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0xBAABC0)
#define UIVICTORYHANDLERRAIDCOMMON_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0xBAABD0)
#define UIVICTORYHANDLERRAIDCOMMON_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0xBAB300)

	inline static constexpr unsigned int UIVictoryHandlerRaidCommon_TypeDefinitionIndex = 8560;

	class UIVictoryHandlerRaidCommon : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERRAIDCOMMON_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Boolean CheckRaidScenario(::System::Int64 arg, ::System::Action* arg2, ::MX::Logic::Data::BattleTypes* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Action*, ::MX::Logic::Data::BattleTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERRAIDCOMMON_CHECKRAIDSCENARIO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERRAIDCOMMON_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void AddMissionPopup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERRAIDCOMMON_ADDMISSIONPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERRAIDCOMMON_DETACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERRAIDCOMMON_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERRAIDCOMMON_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERRAIDCOMMON_REQUESTRESULT_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERRAIDCOMMON_HANDLECLOSE_OFFSET))(nullptr);
		}

	};

