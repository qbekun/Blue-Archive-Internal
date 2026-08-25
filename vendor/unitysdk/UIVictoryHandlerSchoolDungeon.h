#pragma once
#include "unitysdk.h"

class UISchoolDungeonStageSelect;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class ContentType; }
namespace MX::Logic::Data { class BattleTypes; }
namespace FlatData { class OperatorCondition; }

#define UIVICTORYHANDLERSCHOOLDUNGEON_ADDMISSIONPOPUP_OFFSET UNITYSDK_OFFSET(0xBAB770)
#define UIVICTORYHANDLERSCHOOLDUNGEON__HANDLECLOSE_B__11_0_OFFSET UNITYSDK_OFFSET(0xBAB800)
#define UIVICTORYHANDLERSCHOOLDUNGEON_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0xBAB990)
#define UIVICTORYHANDLERSCHOOLDUNGEON_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0xBABA90)
#define UIVICTORYHANDLERSCHOOLDUNGEON_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xBABB60)
#define UIVICTORYHANDLERSCHOOLDUNGEON_.CTOR_OFFSET UNITYSDK_OFFSET(0xBABB70)
#define UIVICTORYHANDLERSCHOOLDUNGEON_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0xBABB80)
#define UIVICTORYHANDLERSCHOOLDUNGEON_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0xBABDE0)
#define UIVICTORYHANDLERSCHOOLDUNGEON_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0xBABEE0)
#define UIVICTORYHANDLERSCHOOLDUNGEON_GET_OPERATORCONDITION_OFFSET UNITYSDK_OFFSET(0xBABEF0)
#define UIVICTORYHANDLERSCHOOLDUNGEON_HANDLETOLOBBY_OFFSET UNITYSDK_OFFSET(0xBABF00)
#define UIVICTORYHANDLERSCHOOLDUNGEON_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0xBABF90)

	inline static constexpr unsigned int UIVictoryHandlerSchoolDungeon_TypeDefinitionIndex = 8563;

	class UIVictoryHandlerSchoolDungeon : public Il2CppObject
	{
	public:
		::System::Void AddMissionPopup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCHOOLDUNGEON_ADDMISSIONPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void _HandleClose_b__11_0(UISchoolDungeonStageSelect* arg)
		{
			((::System::Void(*)(UISchoolDungeonStageSelect*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCHOOLDUNGEON__HANDLECLOSE_B__11_0_OFFSET))(arg, nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCHOOLDUNGEON_ATTACHLISTENER_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCHOOLDUNGEON_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCHOOLDUNGEON_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCHOOLDUNGEON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCHOOLDUNGEON_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCHOOLDUNGEON_DETACHLISTENER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCHOOLDUNGEON_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::FlatData::OperatorCondition* get_OperatorCondition()
		{
			return ((::FlatData::OperatorCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCHOOLDUNGEON_GET_OPERATORCONDITION_OFFSET))(nullptr);
		}

		::System::Void HandleToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCHOOLDUNGEON_HANDLETOLOBBY_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSCHOOLDUNGEON_REQUESTRESULT_OFFSET))(nullptr);
		}

	};

