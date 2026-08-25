#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UICharacterCard;
class UITexture;
class UILabel;
class MXButton;
namespace UnityEngine { class Transform; }
class UIRaidDifficultyTag;
class UIEmblemParcel;
class RaidRankListScrollViewElement_EliminateRaidFilterSet;
namespace MX::GameLogic::DBModel { class RaidUserDB; }
namespace MX::GameLogic::DBModel { class SingleRaidUserDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::DBModel { class EliminateRaidUserDB; }

#define RAIDRANKLISTSCROLLVIEWELEMENT_GET_OTHERUSERDB_OFFSET UNITYSDK_OFFSET(0x2788950)
#define RAIDRANKLISTSCROLLVIEWELEMENT_ONCLICKELIMINATERAIDDETAIL_OFFSET UNITYSDK_OFFSET(0x2788960)
#define RAIDRANKLISTSCROLLVIEWELEMENT_SETSINGLERAIDDATA_OFFSET UNITYSDK_OFFSET(0x2788B70)
#define RAIDRANKLISTSCROLLVIEWELEMENT_HANDLELELIMINATERAIDGETBESTTEAMMESSAGE_OFFSET UNITYSDK_OFFSET(0x2788D30)
#define RAIDRANKLISTSCROLLVIEWELEMENT_ONCLICKDETAIL_OFFSET UNITYSDK_OFFSET(0x2788FE0)
#define RAIDRANKLISTSCROLLVIEWELEMENT_HANDLELRAIDGETBESTTEAMMESSAGE_OFFSET UNITYSDK_OFFSET(0x2789190)
#define RAIDRANKLISTSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27893F0)
#define RAIDRANKLISTSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2789430)
#define RAIDRANKLISTSCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2789DF0)
#define RAIDRANKLISTSCROLLVIEWELEMENT_ONCLICKOPENPRESET_OFFSET UNITYSDK_OFFSET(0x278A250)
#define RAIDRANKLISTSCROLLVIEWELEMENT_SETELIMINATERAIDDATA_OFFSET UNITYSDK_OFFSET(0x2789970)
#define RAIDRANKLISTSCROLLVIEWELEMENT_SET_OTHERUSERDB_OFFSET UNITYSDK_OFFSET(0x278A340)

	inline static constexpr unsigned int RaidRankListScrollViewElement_TypeDefinitionIndex = 7412;

	class RaidRankListScrollViewElement : public ::System::Xml::Serialization::KeyHelper
	{
	public:
		::UnityEngine::GameObject* RankSet; // 0x28
		::UnityEngine::GameObject* FilterSet; // 0x30
		::UnityEngine::GameObject* singleRaidSet; // 0x38
		::UnityEngine::GameObject* eliminateRaidSet; // 0x40
		UICharacterCard* characterCard; // 0x48
		UITexture* rankIcon; // 0x50
		UILabel* levelLabel; // 0x58
		UILabel* nameLabel; // 0x60
		UILabel* rankLabel; // 0x68
		UILabel* pointLabel; // 0x70
		::Il2CppArray<::System::Object*>* mainCards; // 0x78
		::Il2CppArray<::System::Object*>* supporterCards; // 0x80
		MXButton* DetailButton; // 0x88
		::Il2CppArray<::System::Object*>* TypeRecordInfos_EliminateRaid; // 0x90
		MXButton* DetailButton_EliminateRaid; // 0x98
		::UnityEngine::Transform* difficultyLabelTransform; // 0xA0
		UIRaidDifficultyTag* difficultyTag; // 0xA8
		UIEmblemParcel* emblemParcel; // 0xB0
		MXButton* openPreset; // 0xB8
		RaidRankListScrollViewElement_EliminateRaidFilterSet* EliminateRaidFilterSet; // 0xC0
		::MX::GameLogic::DBModel::RaidUserDB* _OtherUserDB_k__BackingField; // 0xC8

		::MX::GameLogic::DBModel::RaidUserDB* get_OtherUserDB()
		{
			return ((::MX::GameLogic::DBModel::RaidUserDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWELEMENT_GET_OTHERUSERDB_OFFSET))(nullptr);
		}

		::System::Void OnClickEliminateRaidDetail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWELEMENT_ONCLICKELIMINATERAIDDETAIL_OFFSET))(nullptr);
		}

		::System::Void SetSingleRaidData(::MX::GameLogic::DBModel::SingleRaidUserDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::SingleRaidUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWELEMENT_SETSINGLERAIDDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandlelEliminateRaidGetBestTeamMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWELEMENT_HANDLELELIMINATERAIDGETBESTTEAMMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickDetail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWELEMENT_ONCLICKDETAIL_OFFSET))(nullptr);
		}

		::System::Boolean HandlelRaidGetBestTeamMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWELEMENT_HANDLELRAIDGETBESTTEAMMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::RaidUserDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickOpenPreset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWELEMENT_ONCLICKOPENPRESET_OFFSET))(nullptr);
		}

		::System::Void SetEliminateRaidData(::MX::GameLogic::DBModel::EliminateRaidUserDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EliminateRaidUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWELEMENT_SETELIMINATERAIDDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_OtherUserDB(::MX::GameLogic::DBModel::RaidUserDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKLISTSCROLLVIEWELEMENT_SET_OTHERUSERDB_OFFSET))(arg, nullptr);
		}

	};

