#pragma once
#include "unitysdk.h"

namespace FlatData { class OperatorCondition; }
class UIWeekDungeonStageSelect;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Logic::Data { class BattleTypes; }
namespace FlatData { class ContentType; }

#define UIVICTORYHANDLERWEEKDUNGEON_ADDMISSIONPOPUP_OFFSET UNITYSDK_OFFSET(0xBACD50)
#define UIVICTORYHANDLERWEEKDUNGEON_GET_OPERATORCONDITION_OFFSET UNITYSDK_OFFSET(0xBACDE0)
#define UIVICTORYHANDLERWEEKDUNGEON_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0xBACDF0)
#define UIVICTORYHANDLERWEEKDUNGEON__HANDLECLOSE_B__11_0_OFFSET UNITYSDK_OFFSET(0xBACEF0)
#define UIVICTORYHANDLERWEEKDUNGEON_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0xBAD080)
#define UIVICTORYHANDLERWEEKDUNGEON_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0xBAD180)
#define UIVICTORYHANDLERWEEKDUNGEON_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0xBAD2C0)
#define UIVICTORYHANDLERWEEKDUNGEON_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0xBAD2D0)
#define UIVICTORYHANDLERWEEKDUNGEON_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0xBAD380)
#define UIVICTORYHANDLERWEEKDUNGEON_HANDLETOLOBBY_OFFSET UNITYSDK_OFFSET(0xBAD5C0)
#define UIVICTORYHANDLERWEEKDUNGEON_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xBAD650)
#define UIVICTORYHANDLERWEEKDUNGEON_.CTOR_OFFSET UNITYSDK_OFFSET(0xBAD660)

	inline static constexpr unsigned int UIVictoryHandlerWeekDungeon_TypeDefinitionIndex = 8569;

	class UIVictoryHandlerWeekDungeon : public Il2CppObject
	{
	public:
		::System::Void AddMissionPopup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWEEKDUNGEON_ADDMISSIONPOPUP_OFFSET))(arg, nullptr);
		}

		::FlatData::OperatorCondition* get_OperatorCondition()
		{
			return ((::FlatData::OperatorCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWEEKDUNGEON_GET_OPERATORCONDITION_OFFSET))(nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWEEKDUNGEON_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void _HandleClose_b__11_0(UIWeekDungeonStageSelect* arg)
		{
			((::System::Void(*)(UIWeekDungeonStageSelect*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWEEKDUNGEON__HANDLECLOSE_B__11_0_OFFSET))(arg, nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWEEKDUNGEON_DETACHLISTENER_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWEEKDUNGEON_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWEEKDUNGEON_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWEEKDUNGEON_REQUESTRESULT_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWEEKDUNGEON_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void HandleToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWEEKDUNGEON_HANDLETOLOBBY_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWEEKDUNGEON_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERWEEKDUNGEON_.CTOR_OFFSET))(nullptr);
		}

	};

