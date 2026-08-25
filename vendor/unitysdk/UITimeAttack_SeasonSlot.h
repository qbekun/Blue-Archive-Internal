#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class UITexture;
namespace UnityEngine { class Transform; }
class MXButton;
namespace FlatData { class TimeAttackDungeonType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UITIMEATTACK_SEASONSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0xB67730)
#define UITIMEATTACK_SEASONSLOT_YIELDSETTIME_OFFSET UNITYSDK_OFFSET(0xB6C3D0)
#define UITIMEATTACK_SEASONSLOT_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0xB6C460)
#define UITIMEATTACK_SEASONSLOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB6C660)
#define UITIMEATTACK_SEASONSLOT_SETTICKETCOUNT_OFFSET UNITYSDK_OFFSET(0xB6C320)
#define UITIMEATTACK_SEASONSLOT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB6C800)
#define UITIMEATTACK_SEASONSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB6C980)
#define UITIMEATTACK_SEASONSLOT_HANDLETIMEATTACKDUNGEONSWEEPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB6CAA0)
#define UITIMEATTACK_SEASONSLOT_SETROOMLIFETIME_OFFSET UNITYSDK_OFFSET(0xB6C1C0)
#define UITIMEATTACK_SEASONSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB6CAB0)

	inline static constexpr unsigned int UITimeAttack_SeasonSlot_TypeDefinitionIndex = 8454;

	class UITimeAttack_SeasonSlot : public Il2CppObject
	{
	public:
		::System::Int32 slotIndex; // 0x18
		::UnityEngine::GameObject* enabledType; // 0x20
		::UnityEngine::GameObject* disabledType; // 0x28
		UILabel* typeLabel; // 0x30
		UITexture* iconTexture; // 0x38
		::UnityEngine::GameObject* currentSeasonDisplay; // 0x40
		::Il2CppArray<::System::Object*>* nextSeasonDisplays; // 0x48
		::UnityEngine::Transform* progressTransform; // 0x50
		UILabel* ticketCountLabel; // 0x58
		::Il2CppArray<::System::Object*>* playCounts; // 0x60
		UILabel* leftTime; // 0x68
		MXButton* enterButton; // 0x70
		UILabel* enterButtonLabel; // 0x78
		::System::Boolean _IsCurrentSeason; // 0x80
		::System::Boolean _IsNextSeason; // 0x81
		::System::Boolean _IsRoomOpened; // 0x82
		::System::DateTime* openedRoomLifeTime; // 0x88
		::FlatData::TimeAttackDungeonType* dungeonType; // 0x90

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_SEASONSLOT_SETDATA_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* YieldSetTime()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_SEASONSLOT_YIELDSETTIME_OFFSET))(nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_SEASONSLOT_ONCLICKENTER_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_SEASONSLOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetTicketCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_SEASONSLOT_SETTICKETCOUNT_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_SEASONSLOT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_SEASONSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleTimeAttackDungeonSweepResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_SEASONSLOT_HANDLETIMEATTACKDUNGEONSWEEPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetRoomLifeTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_SEASONSLOT_SETROOMLIFETIME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_SEASONSLOT_.CTOR_OFFSET))(nullptr);
		}

	};

