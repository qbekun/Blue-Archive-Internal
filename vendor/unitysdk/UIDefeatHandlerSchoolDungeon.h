#pragma once
#include "unitysdk.h"

namespace FlatData { class OperatorCondition; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace Assets::_MX::Program::Scripts::Network { class TaskState; }
namespace MX::Logic::Data { class BattleTypes; }

#define UIDEFEATHANDLERSCHOOLDUNGEON_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23C4620)
#define UIDEFEATHANDLERSCHOOLDUNGEON_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23C4720)
#define UIDEFEATHANDLERSCHOOLDUNGEON_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0x23C4820)
#define UIDEFEATHANDLERSCHOOLDUNGEON_GET_OPERATORCONDITION_OFFSET UNITYSDK_OFFSET(0x23C4920)
#define UIDEFEATHANDLERSCHOOLDUNGEON_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0x23C4930)
#define UIDEFEATHANDLERSCHOOLDUNGEON__REQUESTRESULT_B__4_0_OFFSET UNITYSDK_OFFSET(0x23C4BF0)
#define UIDEFEATHANDLERSCHOOLDUNGEON_INITPOPUPLIST_OFFSET UNITYSDK_OFFSET(0x23C4C10)
#define UIDEFEATHANDLERSCHOOLDUNGEON_.CTOR_OFFSET UNITYSDK_OFFSET(0x23C4D50)
#define UIDEFEATHANDLERSCHOOLDUNGEON_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x23C4D60)
#define UIDEFEATHANDLERSCHOOLDUNGEON_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0x23C4D70)

	inline static constexpr unsigned int UIDefeatHandlerSchoolDungeon_TypeDefinitionIndex = 5268;

	class UIDefeatHandlerSchoolDungeon : public Il2CppObject
	{
	public:
		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCHOOLDUNGEON_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCHOOLDUNGEON_DETACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCHOOLDUNGEON_REQUESTRESULT_OFFSET))(nullptr);
		}

		::FlatData::OperatorCondition* get_OperatorCondition()
		{
			return ((::FlatData::OperatorCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCHOOLDUNGEON_GET_OPERATORCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCHOOLDUNGEON_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void _RequestResult_b__4_0(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCHOOLDUNGEON__REQUESTRESULT_B__4_0_OFFSET))(arg, nullptr);
		}

		::System::Void InitPopupList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCHOOLDUNGEON_INITPOPUPLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCHOOLDUNGEON_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCHOOLDUNGEON_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERSCHOOLDUNGEON_HANDLECLOSE_OFFSET))(nullptr);
		}

	};

