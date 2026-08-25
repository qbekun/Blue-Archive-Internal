#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelProcessActionType; }

#define MX_GAMELOGIC_PARCEL_PARCELRESULTSTEPINFO_SET_PARCELPROCESSACTIONTYPE_OFFSET UNITYSDK_OFFSET(0xFDDB00)
#define MX_GAMELOGIC_PARCEL_PARCELRESULTSTEPINFO_GET_STEPPARCELDETAILS_OFFSET UNITYSDK_OFFSET(0xFDDB10)
#define MX_GAMELOGIC_PARCEL_PARCELRESULTSTEPINFO_GET_PARCELPROCESSACTIONTYPE_OFFSET UNITYSDK_OFFSET(0xFDDB20)
#define MX_GAMELOGIC_PARCEL_PARCELRESULTSTEPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDDB30)
#define MX_GAMELOGIC_PARCEL_PARCELRESULTSTEPINFO_SHOULDSERIALIZESTEPPARCELDETAILS_OFFSET UNITYSDK_OFFSET(0xFDDB40)
#define MX_GAMELOGIC_PARCEL_PARCELRESULTSTEPINFO_SET_STEPPARCELDETAILS_OFFSET UNITYSDK_OFFSET(0xFDDB80)

namespace MX::GameLogic::Parcel
{
	inline static constexpr unsigned int ParcelResultStepInfo_TypeDefinitionIndex = 12443;

	class ParcelResultStepInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelProcessActionType* _ParcelProcessActionType_k__BackingField; // 0x10
		Il2CppObject* _StepParcelDetails_k__BackingField; // 0x18

		::System::Void set_ParcelProcessActionType(::MX::GameLogic::Parcel::ParcelProcessActionType* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelProcessActionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELRESULTSTEPINFO_SET_PARCELPROCESSACTIONTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_StepParcelDetails()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELRESULTSTEPINFO_GET_STEPPARCELDETAILS_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelProcessActionType* get_ParcelProcessActionType()
		{
			return ((::MX::GameLogic::Parcel::ParcelProcessActionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELRESULTSTEPINFO_GET_PARCELPROCESSACTIONTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELRESULTSTEPINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeStepParcelDetails()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELRESULTSTEPINFO_SHOULDSERIALIZESTEPPARCELDETAILS_OFFSET))(nullptr);
		}

		::System::Void set_StepParcelDetails(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELRESULTSTEPINFO_SET_STEPPARCELDETAILS_OFFSET))(arg, nullptr);
		}

	};
}

