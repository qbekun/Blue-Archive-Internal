#pragma once
#include "unitysdk.h"

class UIRewardInfo;
class MXButton;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define AIRDROPPOPUP_OPEN_OFFSET UNITYSDK_OFFSET(0x2293B20)
#define AIRDROPPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2293CA0)
#define AIRDROPPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2293EA0)
#define AIRDROPPOPUP_CLOSE_OFFSET UNITYSDK_OFFSET(0x2293EB0)

	inline static constexpr unsigned int AirDropPopup_TypeDefinitionIndex = 4711;

	class AirDropPopup : public Il2CppObject
	{
	public:
		UIRewardInfo* RewardInfo; // 0x18
		MXButton* ButtonOk; // 0x20
		MXButton* ButtonX; // 0x28
		::System::Action* closeCB; // 0x30

		::System::Void Open(::MX::GameLogic::Parcel::ParcelInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + AIRDROPPOPUP_OPEN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIRDROPPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIRDROPPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIRDROPPOPUP_CLOSE_OFFSET))(nullptr);
		}

	};

