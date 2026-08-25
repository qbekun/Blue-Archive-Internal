#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UIGrid;
namespace MX::Data { class AttendanceBookReward; }
class UITexture;
class UIAttendanceSlot;
class UILabel;
namespace UnityEngine { class Transform; }
namespace MX::Data::Excel { class AttendanceExcel; }

#define REWARDSET_SET_REAWARD_OFFSET UNITYSDK_OFFSET(0x2214520)
#define REWARDSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x2214530)
#define REWARDSET_SET_EXCEL_OFFSET UNITYSDK_OFFSET(0x2214540)
#define REWARDSET_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0x2214560)
#define REWARDSET_GET_SLOTLIST_OFFSET UNITYSDK_OFFSET(0x2214570)
#define REWARDSET_SET_SLOTLIST_OFFSET UNITYSDK_OFFSET(0x2214580)
#define REWARDSET_GET_REAWARD_OFFSET UNITYSDK_OFFSET(0x2214590)
#define REWARDSET_GET_DAY_OFFSET UNITYSDK_OFFSET(0x22145A0)
#define REWARDSET_SET_DAY_OFFSET UNITYSDK_OFFSET(0x22145B0)

	inline static constexpr unsigned int RewardSet_TypeDefinitionIndex = 4370;

	class RewardSet : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* RootObject; // 0x10
		UIGrid* Grid; // 0x18
		Il2CppObject* _SlotList_k__BackingField; // 0x20
		::MX::Data::AttendanceBookReward* _Reaward_k__BackingField; // 0x28
		::System::Int64 _Day_k__BackingField; // 0x30
		UITexture* TitleTexture; // 0x38
		UITexture* DecorationTexture; // 0x40
		UITexture* DecorationGarlandTexture; // 0x48
		UIAttendanceSlot* Slot; // 0x50
		UILabel* EventInfoLabel; // 0x58
		::UnityEngine::Transform* RemainDayLabelTransform; // 0x60
		UILabel* RemainDayLabel; // 0x68
		::MX::Data::Excel::AttendanceExcel* _Excel_k__BackingField; // 0x70

		::System::Void set_Reaward(::MX::Data::AttendanceBookReward* arg)
		{
			((::System::Void(*)(::MX::Data::AttendanceBookReward*, ::PVOID))((::PBYTE)hIl2Cpp + REWARDSET_SET_REAWARD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REWARDSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Excel(::MX::Data::Excel::AttendanceExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::AttendanceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + REWARDSET_SET_EXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AttendanceExcel* get_Excel()
		{
			return ((::MX::Data::Excel::AttendanceExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + REWARDSET_GET_EXCEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_SlotList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + REWARDSET_GET_SLOTLIST_OFFSET))(nullptr);
		}

		::System::Void set_SlotList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REWARDSET_SET_SLOTLIST_OFFSET))(arg, nullptr);
		}

		::MX::Data::AttendanceBookReward* get_Reaward()
		{
			return ((::MX::Data::AttendanceBookReward*(*)(::PVOID))((::PBYTE)hIl2Cpp + REWARDSET_GET_REAWARD_OFFSET))(nullptr);
		}

		::System::Int64 get_Day()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + REWARDSET_GET_DAY_OFFSET))(nullptr);
		}

		::System::Void set_Day(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + REWARDSET_SET_DAY_OFFSET))(arg, nullptr);
		}

	};

