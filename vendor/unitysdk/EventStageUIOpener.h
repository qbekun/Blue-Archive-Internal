#pragma once
#include "unitysdk.h"

class TooltipTargetParcelTracker;
namespace FlatData { class RewardTag; }
namespace FlatData { class StageDifficulty; }
namespace MX::GameLogic::DBModel { class EventContentChangeDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
namespace MX::Data { class EventContentSeasonInfo; }

#define EVENTSTAGEUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26BC520)
#define EVENTSTAGEUIOPENER_SET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0x26BCE30)
#define EVENTSTAGEUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26BCE40)
#define EVENTSTAGEUIOPENER_GET_MYSTAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x26BCE50)
#define EVENTSTAGEUIOPENER_HANDLEEVENTCONTENTSUBEVENTLOBBYRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x26BCE60)
#define EVENTSTAGEUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26BCFE0)
#define EVENTSTAGEUIOPENER_SET_MYREWARDTAG_OFFSET UNITYSDK_OFFSET(0x26BD090)
#define EVENTSTAGEUIOPENER_GET_MYREWARDTAG_OFFSET UNITYSDK_OFFSET(0x26BD0A0)
#define EVENTSTAGEUIOPENER_GET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0x26BD0B0)
#define EVENTSTAGEUIOPENER_SUBEVENTCHECK_OFFSET UNITYSDK_OFFSET(0x26BC7B0)
#define EVENTSTAGEUIOPENER_SET_MYSTAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x26BD0D0)

	inline static constexpr unsigned int EventStageUIOpener_TypeDefinitionIndex = 6929;

	class EventStageUIOpener : public Il2CppObject
	{
	public:
		TooltipTargetParcelTracker* _ParcelTracker_k__BackingField; // 0x18
		::FlatData::RewardTag* _MyRewardTag_k__BackingField; // 0x20
		::FlatData::StageDifficulty* _MyStageDifficulty_k__BackingField; // 0x24
		::MX::GameLogic::DBModel::EventContentChangeDB* eventContentChangeDB; // 0x28

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTSTAGEUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void set_ParcelTracker(TooltipTargetParcelTracker* arg)
		{
			((::System::Void(*)(TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTSTAGEUIOPENER_SET_PARCELTRACKER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTSTAGEUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_MyStageDifficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTSTAGEUIOPENER_GET_MYSTAGEDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentSubEventLobbyResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTSTAGEUIOPENER_HANDLEEVENTCONTENTSUBEVENTLOBBYRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2, ::System::Int64 arg3, ::FlatData::RewardTag* arg4, ::FlatData::StageDifficulty* arg5)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Int64, ::FlatData::RewardTag*, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTSTAGEUIOPENER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void set_MyRewardTag(::FlatData::RewardTag* arg)
		{
			((::System::Void(*)(::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTSTAGEUIOPENER_SET_MYREWARDTAG_OFFSET))(arg, nullptr);
		}

		::FlatData::RewardTag* get_MyRewardTag()
		{
			return ((::FlatData::RewardTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTSTAGEUIOPENER_GET_MYREWARDTAG_OFFSET))(nullptr);
		}

		TooltipTargetParcelTracker* get_ParcelTracker()
		{
			return ((TooltipTargetParcelTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTSTAGEUIOPENER_GET_PARCELTRACKER_OFFSET))(nullptr);
		}

		::System::Void SubEventCheck(::MX::Data::EventContentSeasonInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTSTAGEUIOPENER_SUBEVENTCHECK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_MyStageDifficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTSTAGEUIOPENER_SET_MYSTAGEDIFFICULTY_OFFSET))(arg, nullptr);
		}

	};

