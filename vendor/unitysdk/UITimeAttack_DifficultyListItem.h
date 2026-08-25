#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class MXButton;
class UIGrid;
class UILabel;
namespace MX::Data { class TimeAttackDungeonGeasInfo; }

#define UITIMEATTACK_DIFFICULTYLISTITEM_SET_GEASID_OFFSET UNITYSDK_OFFSET(0xB6AE60)
#define UITIMEATTACK_DIFFICULTYLISTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xB6AE70)
#define UITIMEATTACK_DIFFICULTYLISTITEM_OPENENTERPOPUP_OFFSET UNITYSDK_OFFSET(0xB6B0B0)
#define UITIMEATTACK_DIFFICULTYLISTITEM_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0xB6B3A0)
#define UITIMEATTACK_DIFFICULTYLISTITEM_CHANGEBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0xB67F00)
#define UITIMEATTACK_DIFFICULTYLISTITEM_SET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0xB6B3B0)
#define UITIMEATTACK_DIFFICULTYLISTITEM_SETDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xB6B3C0)
#define UITIMEATTACK_DIFFICULTYLISTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xB6B4A0)
#define UITIMEATTACK_DIFFICULTYLISTITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0xB67420)
#define UITIMEATTACK_DIFFICULTYLISTITEM_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0xB6B6A0)
#define UITIMEATTACK_DIFFICULTYLISTITEM_GET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0xB6B6B0)
#define UITIMEATTACK_DIFFICULTYLISTITEM_SETGEAS_OFFSET UNITYSDK_OFFSET(0xB6B4B0)
#define UITIMEATTACK_DIFFICULTYLISTITEM_GET_GEASID_OFFSET UNITYSDK_OFFSET(0xB6B6C0)

	inline static constexpr unsigned int UITimeAttack_DifficultyListItem_TypeDefinitionIndex = 8449;

	class UITimeAttack_DifficultyListItem : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* stateChangeAni; // 0x18
		MXButton* infoButton; // 0x20
		MXButton* enterButton; // 0x28
		UIGrid* geasIconGrid; // 0x30
		UILabel* difficultyNumberLabel; // 0x38
		UILabel* difficultyNameLabel; // 0x40
		::Il2CppArray<::System::Object*>* geasIcons; // 0x48
		::System::Int64 _GeasId_k__BackingField; // 0x50
		::System::Int64 _DungeonId_k__BackingField; // 0x58

		::System::Void set_GeasId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_DIFFICULTYLISTITEM_SET_GEASID_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_DIFFICULTYLISTITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OpenEnterPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_DIFFICULTYLISTITEM_OPENENTERPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_DIFFICULTYLISTITEM_ONCLICKENTER_OFFSET))(nullptr);
		}

		::System::Void ChangeButtonState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_DIFFICULTYLISTITEM_CHANGEBUTTONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_DungeonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_DIFFICULTYLISTITEM_SET_DUNGEONID_OFFSET))(arg, nullptr);
		}

		::System::Void SetDifficulty(::MX::Data::TimeAttackDungeonGeasInfo* arg)
		{
			((::System::Void(*)(::MX::Data::TimeAttackDungeonGeasInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_DIFFICULTYLISTITEM_SETDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_DIFFICULTYLISTITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_DIFFICULTYLISTITEM_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_DIFFICULTYLISTITEM_ONCLICKINFO_OFFSET))(nullptr);
		}

		::System::Int64 get_DungeonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_DIFFICULTYLISTITEM_GET_DUNGEONID_OFFSET))(nullptr);
		}

		::System::Void SetGeas(::MX::Data::TimeAttackDungeonGeasInfo* arg)
		{
			((::System::Void(*)(::MX::Data::TimeAttackDungeonGeasInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_DIFFICULTYLISTITEM_SETGEAS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GeasId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_DIFFICULTYLISTITEM_GET_GEASID_OFFSET))(nullptr);
		}

	};

