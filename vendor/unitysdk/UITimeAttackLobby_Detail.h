#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
class UISprite;
class UITimeAttack_DifficultyListItem;
class UIGrid;
class UIScrollView;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Data { class TimeAttackDungeonSeasonInfo; }

#define UITIMEATTACKLOBBY_DETAIL_ONGIVEUP_OFFSET UNITYSDK_OFFSET(0xB63990)
#define UITIMEATTACKLOBBY_DETAIL_HANDLETIMEATTACKDUNGEONSWEEPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB66E40)
#define UITIMEATTACKLOBBY_DETAIL_ADDUNITS_OFFSET UNITYSDK_OFFSET(0xB66E50)
#define UITIMEATTACKLOBBY_DETAIL_GET_SEASONSLOTS_OFFSET UNITYSDK_OFFSET(0xB66CB0)
#define UITIMEATTACKLOBBY_DETAIL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB67000)
#define UITIMEATTACKLOBBY_DETAIL_SETLIST_OFFSET UNITYSDK_OFFSET(0xB67180)
#define UITIMEATTACKLOBBY_DETAIL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB67570)
#define UITIMEATTACKLOBBY_DETAIL_ONCREATEROOM_OFFSET UNITYSDK_OFFSET(0xB65170)
#define UITIMEATTACKLOBBY_DETAIL_SETDATA_OFFSET UNITYSDK_OFFSET(0xB65E40)
#define UITIMEATTACKLOBBY_DETAIL_SETTICKET_OFFSET UNITYSDK_OFFSET(0xB66D60)
#define UITIMEATTACKLOBBY_DETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0xB67670)

	inline static constexpr unsigned int UITimeAttackLobby_Detail_TypeDefinitionIndex = 8438;

	class UITimeAttackLobby_Detail : public Il2CppObject
	{
	public:
		UILabel* typeLabel; // 0x18
		UITexture* iconTexture; // 0x20
		UILabel* seasonStart; // 0x28
		UILabel* seasonEnd; // 0x30
		UISprite* ticketIcon; // 0x38
		UILabel* ticketLabel; // 0x40
		UITimeAttack_DifficultyListItem* difficultyPref; // 0x48
		UIGrid* difficultyGrid; // 0x50
		UIScrollView* difficuiltyScroll; // 0x58
		Il2CppObject* _DifficultyUnits; // 0x60
		Il2CppObject* _SeasonSlots; // 0x68

		::System::Void OnGiveUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAIL_ONGIVEUP_OFFSET))(nullptr);
		}

		::System::Boolean HandleTimeAttackDungeonSweepResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAIL_HANDLETIMEATTACKDUNGEONSWEEPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void AddUnits(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAIL_ADDUNITS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SeasonSlots()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAIL_GET_SEASONSLOTS_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAIL_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetList(::MX::Data::TimeAttackDungeonSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::TimeAttackDungeonSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAIL_SETLIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAIL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnCreateRoom()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAIL_ONCREATEROOM_OFFSET))(nullptr);
		}

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAIL_SETDATA_OFFSET))(nullptr);
		}

		::System::Void SetTicket()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAIL_SETTICKET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAIL_.CTOR_OFFSET))(nullptr);
		}

	};

