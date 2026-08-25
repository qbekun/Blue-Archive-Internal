#pragma once
#include "unitysdk.h"

namespace FlatData { class OperatorCondition; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace Assets::_MX::Program::Scripts::Network { class TaskState; }
namespace MX::Logic::Data { class BattleTypes; }

#define UIDEFEATHANDLERWEEKDUNGEON_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23C54C0)
#define UIDEFEATHANDLERWEEKDUNGEON_GET_OPERATORCONDITION_OFFSET UNITYSDK_OFFSET(0x23C55C0)
#define UIDEFEATHANDLERWEEKDUNGEON_INITPOPUPLIST_OFFSET UNITYSDK_OFFSET(0x23C55D0)
#define UIDEFEATHANDLERWEEKDUNGEON_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0x23C56D0)
#define UIDEFEATHANDLERWEEKDUNGEON_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0x23C5820)
#define UIDEFEATHANDLERWEEKDUNGEON_.CTOR_OFFSET UNITYSDK_OFFSET(0x23C5920)
#define UIDEFEATHANDLERWEEKDUNGEON__REQUESTRESULT_B__4_0_OFFSET UNITYSDK_OFFSET(0x23C5930)
#define UIDEFEATHANDLERWEEKDUNGEON_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0x23C5950)
#define UIDEFEATHANDLERWEEKDUNGEON_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0x23C5A70)
#define UIDEFEATHANDLERWEEKDUNGEON_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x23C5B70)

	inline static constexpr unsigned int UIDefeatHandlerWeekDungeon_TypeDefinitionIndex = 5275;

	class UIDefeatHandlerWeekDungeon : public Il2CppObject
	{
	public:
		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERWEEKDUNGEON_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::FlatData::OperatorCondition* get_OperatorCondition()
		{
			return ((::FlatData::OperatorCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERWEEKDUNGEON_GET_OPERATORCONDITION_OFFSET))(nullptr);
		}

		::System::Void InitPopupList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERWEEKDUNGEON_INITPOPUPLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERWEEKDUNGEON_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERWEEKDUNGEON_DETACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERWEEKDUNGEON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _RequestResult_b__4_0(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERWEEKDUNGEON__REQUESTRESULT_B__4_0_OFFSET))(arg, nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERWEEKDUNGEON_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERWEEKDUNGEON_REQUESTRESULT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERWEEKDUNGEON_GET_BATTLETYPE_OFFSET))(nullptr);
		}

	};

