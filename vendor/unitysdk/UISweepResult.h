#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class TooltipTargetParcelDisplay;
class UITweener;
class UISweepResultTotalRewards;
class UISweepResultScrollController;
class AccountLevelExpIndicator;
namespace FlatData { class ContentType; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
class ContentSweepResponseMessage;
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
class ConquestManageBaseResponseMessage;
class ContentSweepMultiSweepResponseMessage;

#define UISWEEPRESULT_GET_SCROLLCONTROLLER_OFFSET UNITYSDK_OFFSET(0xB297A0)
#define UISWEEPRESULT_GET_LEVELEXPINDICATOR_OFFSET UNITYSDK_OFFSET(0xB29810)
#define UISWEEPRESULT_GET_ADDEDTARGETPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0xB29880)
#define UISWEEPRESULT_SET_ADDEDTARGETPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0xB298A0)
#define UISWEEPRESULT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB298D0)
#define UISWEEPRESULT_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB29AE0)
#define UISWEEPRESULT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xB29DA0)
#define UISWEEPRESULT_SETDATA_OFFSET UNITYSDK_OFFSET(0xB295E0)
#define UISWEEPRESULT_SETDATA_OFFSET UNITYSDK_OFFSET(0xB292E0)
#define UISWEEPRESULT_SETDATA_OFFSET UNITYSDK_OFFSET(0xB2A5D0)
#define UISWEEPRESULT_SETDATA_OFFSET UNITYSDK_OFFSET(0xB290C0)
#define UISWEEPRESULT_SETDATA_OFFSET UNITYSDK_OFFSET(0xB29E00)
#define UISWEEPRESULT_SUMMARIZEALLPARCELINFOS_OFFSET UNITYSDK_OFFSET(0xB2A6D0)
#define UISWEEPRESULT_SUBEVENTITEMREMOVE_OFFSET UNITYSDK_OFFSET(0xB2A9B0)
#define UISWEEPRESULT_SETTITLELABEL_OFFSET UNITYSDK_OFFSET(0xB2BC30)
#define UISWEEPRESULT_CLOSE_OFFSET UNITYSDK_OFFSET(0xB2BEB0)
#define UISWEEPRESULT_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xB2C270)
#define UISWEEPRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB2C280)
#define UISWEEPRESULT__ONOPENED_B__21_0_OFFSET UNITYSDK_OFFSET(0xB2C300)
#define UISWEEPRESULT__SUMMARIZEALLPARCELINFOS_G__SUMMARIZE|28_0_OFFSET UNITYSDK_OFFSET(0xB2BDF0)

	inline static constexpr unsigned int UISweepResult_TypeDefinitionIndex = 8267;

	class UISweepResult : public Il2CppObject
	{
	public:
		UILabel* titleLabel; // 0xD8
		MXButton* confirmButton; // 0xE0
		MXButton* backButton; // 0xE8
		TooltipTargetParcelDisplay* tooltipTargetParcelDisplay; // 0xF0
		UITweener* totalRewardsTweener; // 0xF8
		UISweepResultTotalRewards* totalRewards; // 0x100
		UISweepResultScrollController* scrollController; // 0x108
		AccountLevelExpIndicator* levelExpIndicator; // 0x110
		::FlatData::ContentType* ContentType; // 0x118
		::System::Int64 StageId; // 0x120
		Il2CppObject* totalRewardDict; // 0x128
		::MX::GameLogic::Parcel::ParcelKeyPair* targetParcel; // 0x130
		::System::Int32 sweepPlayCount; // 0x140

		UISweepResultScrollController* get_ScrollController()
		{
			return ((UISweepResultScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_GET_SCROLLCONTROLLER_OFFSET))(nullptr);
		}

		AccountLevelExpIndicator* get_LevelExpIndicator()
		{
			return ((AccountLevelExpIndicator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_GET_LEVELEXPINDICATOR_OFFSET))(nullptr);
		}

		::System::Int64 get_addedTargetParcelAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_GET_ADDEDTARGETPARCELAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_addedTargetParcelAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_SET_ADDEDTARGETPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void SetData(::FlatData::ContentType* arg, ::System::Int64 arg2, ContentSweepResponseMessage* arg3, ::MX::GameLogic::Parcel::ParcelKeyPair* arg4, ::System::Int64 arg5, ::System::Int64 arg6)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, ContentSweepResponseMessage*, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_SETDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void SetData(::FlatData::ContentType* arg, ::System::Int64 arg2, ::MX::GameLogic::Parcel::ParcelResultDB* arg3, Il2CppObject* arg4, ::MX::GameLogic::Parcel::ParcelKeyPair* arg5, ::System::Int64 arg6, ::System::Int64 arg7)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, ::MX::GameLogic::Parcel::ParcelResultDB*, Il2CppObject*, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_SETDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void SetData(ConquestManageBaseResponseMessage* arg)
		{
			((::System::Void(*)(ConquestManageBaseResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(ContentSweepMultiSweepResponseMessage* arg)
		{
			((::System::Void(*)(ContentSweepMultiSweepResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::FlatData::ContentType* arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::System::Int64 arg6, Il2CppObject* arg7, Il2CppObject* arg8, Il2CppObject* arg9)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Int64, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_SETDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void SummarizeAllParcelInfos(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_SUMMARIZEALLPARCELINFOS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SubEventItemRemove(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_SUBEVENTITEMREMOVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetTitleLabel(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_SETTITLELABEL_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_CLOSE_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_b__21_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT__ONOPENED_B__21_0_OFFSET))(nullptr);
		}

		::System::Void _SummarizeAllParcelInfos_g__Summarize|28_0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULT__SUMMARIZEALLPARCELINFOS_G__SUMMARIZE|28_0_OFFSET))(arg, nullptr);
		}

	};

