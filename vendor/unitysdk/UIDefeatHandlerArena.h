#pragma once
#include "unitysdk.h"

namespace FlatData { class OperatorCondition; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Logic::Data { class BattleTypes; }

#define UIDEFEATHANDLERARENA_.CTOR_OFFSET UNITYSDK_OFFSET(0x23BE7F0)
#define UIDEFEATHANDLERARENA_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23BE800)
#define UIDEFEATHANDLERARENA_GET_OPERATORCONDITION_OFFSET UNITYSDK_OFFSET(0x23BE810)
#define UIDEFEATHANDLERARENA_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0x23BE820)
#define UIDEFEATHANDLERARENA_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0x23BE830)
#define UIDEFEATHANDLERARENA_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0x23BE960)
#define UIDEFEATHANDLERARENA_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23BEA00)
#define UIDEFEATHANDLERARENA_INITPOPUPLIST_OFFSET UNITYSDK_OFFSET(0x23BEA10)
#define UIDEFEATHANDLERARENA_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x23BEA20)

	inline static constexpr unsigned int UIDefeatHandlerArena_TypeDefinitionIndex = 5251;

	class UIDefeatHandlerArena : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERARENA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERARENA_DETACHLISTENER_OFFSET))(nullptr);
		}

		::FlatData::OperatorCondition* get_OperatorCondition()
		{
			return ((::FlatData::OperatorCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERARENA_GET_OPERATORCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERARENA_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERARENA_REQUESTRESULT_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERARENA_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERARENA_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void InitPopupList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERARENA_INITPOPUPLIST_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERARENA_GET_BATTLETYPE_OFFSET))(nullptr);
		}

	};

