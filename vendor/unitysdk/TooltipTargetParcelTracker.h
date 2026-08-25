#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
class EquipmentObject;

#define TOOLTIPTARGETPARCELTRACKER_REFRESHCURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x274BE60)
#define TOOLTIPTARGETPARCELTRACKER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x274BDC0)
#define TOOLTIPTARGETPARCELTRACKER_GET_ISPARCELVALID_OFFSET UNITYSDK_OFFSET(0x274C0E0)
#define TOOLTIPTARGETPARCELTRACKER__REFRESHCURRENTCOUNT_B__8_0_OFFSET UNITYSDK_OFFSET(0x274C160)
#define TOOLTIPTARGETPARCELTRACKER_CLEAR_OFFSET UNITYSDK_OFFSET(0x273A0C0)
#define TOOLTIPTARGETPARCELTRACKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x274C1D0)

	inline static constexpr unsigned int TooltipTargetParcelTracker_TypeDefinitionIndex = 7244;

	class TooltipTargetParcelTracker : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelKeyPair* TargetParcel; // 0x10
		::System::Int64 TargetCount; // 0x20
		::System::Int64 CurrentCount; // 0x28

		::System::Void RefreshCurrentCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTARGETPARCELTRACKER_REFRESHCURRENTCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTARGETPARCELTRACKER_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsParcelValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTARGETPARCELTRACKER_GET_ISPARCELVALID_OFFSET))(nullptr);
		}

		::System::Boolean _RefreshCurrentCount_b__8_0(EquipmentObject* arg)
		{
			return ((::System::Boolean(*)(EquipmentObject*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTARGETPARCELTRACKER__REFRESHCURRENTCOUNT_B__8_0_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTARGETPARCELTRACKER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelKeyPair* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPTARGETPARCELTRACKER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

