#pragma once
#include "unitysdk.h"

class UIAdmissionDisplay;
class MXButton;
class UILabel;
namespace UnityEngine { class Transform; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class ContentType; }
namespace FlatData { class Difficulty; }
namespace MX::Data { class WorldRaidStageInfo; }

#define UIPOPUP_RAIDENTERCHECK_AWAKE_OFFSET UNITYSDK_OFFSET(0x2796EE0)
#define UIPOPUP_RAIDENTERCHECK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2796370)
#define UIPOPUP_RAIDENTERCHECK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2797400)
#define UIPOPUP_RAIDENTERCHECK_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2797880)
#define UIPOPUP_RAIDENTERCHECK_SETADMISSIONDISPLAY_OFFSET UNITYSDK_OFFSET(0x27978D0)
#define UIPOPUP_RAIDENTERCHECK_REFRESHCOMPENSATELABEL_OFFSET UNITYSDK_OFFSET(0x2797010)
#define UIPOPUP_RAIDENTERCHECK_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x2797910)
#define UIPOPUP_RAIDENTERCHECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x27979A0)

	inline static constexpr unsigned int UIPopup_RaidEnterCheck_TypeDefinitionIndex = 7451;

	class UIPopup_RaidEnterCheck : public Il2CppObject
	{
	public:
		UIAdmissionDisplay* AdmissionDisplay; // 0xD8
		MXButton* OkButton; // 0xE0
		UILabel* OkButtonLabel; // 0xE8
		UILabel* Message; // 0xF0
		UILabel* Difficulty; // 0xF8
		::UnityEngine::Transform* CompensateChanceNotice; // 0x100
		::System::Action* okAction; // 0x108
		::MX::GameLogic::Parcel::ParcelInfo* parcelInfo; // 0x110
		::System::Int64 costPerRound; // 0x118

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTERCHECK_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::FlatData::ContentType* arg, ::System::Int64 arg2, ::FlatData::Difficulty* arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, ::FlatData::Difficulty*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTERCHECK_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Initialize(::MX::Data::WorldRaidStageInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Data::WorldRaidStageInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTERCHECK_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTERCHECK_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetAdmissionDisplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTERCHECK_SETADMISSIONDISPLAY_OFFSET))(nullptr);
		}

		::System::Void RefreshCompensateLabel(::FlatData::ContentType* arg, ::System::Int64 arg2, ::FlatData::Difficulty* arg3)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, ::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTERCHECK_REFRESHCOMPENSATELABEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTERCHECK_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDENTERCHECK_.CTOR_OFFSET))(nullptr);
		}

	};

