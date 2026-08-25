#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Logic::Data { class BattleTypes; }
namespace FlatData { class OperatorCondition; }

#define UIDEFEATHANDLERTIMEATTACK_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23C5180)
#define UIDEFEATHANDLERTIMEATTACK_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0x23C5190)
#define UIDEFEATHANDLERTIMEATTACK_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23C52F0)
#define UIDEFEATHANDLERTIMEATTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x23C5300)
#define UIDEFEATHANDLERTIMEATTACK_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0x23C5310)
#define UIDEFEATHANDLERTIMEATTACK_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x23C5320)
#define UIDEFEATHANDLERTIMEATTACK_INITPOPUPLIST_OFFSET UNITYSDK_OFFSET(0x23C5330)
#define UIDEFEATHANDLERTIMEATTACK_GET_OPERATORCONDITION_OFFSET UNITYSDK_OFFSET(0x23C5340)
#define UIDEFEATHANDLERTIMEATTACK_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0x23C5350)

	inline static constexpr unsigned int UIDefeatHandlerTimeAttack_TypeDefinitionIndex = 5271;

	class UIDefeatHandlerTimeAttack : public Il2CppObject
	{
	public:
		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERTIMEATTACK_DETACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERTIMEATTACK_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERTIMEATTACK_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERTIMEATTACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERTIMEATTACK_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERTIMEATTACK_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void InitPopupList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERTIMEATTACK_INITPOPUPLIST_OFFSET))(arg, nullptr);
		}

		::FlatData::OperatorCondition* get_OperatorCondition()
		{
			return ((::FlatData::OperatorCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERTIMEATTACK_GET_OPERATORCONDITION_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERTIMEATTACK_REQUESTRESULT_OFFSET))(nullptr);
		}

	};

