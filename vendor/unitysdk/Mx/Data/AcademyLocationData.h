#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class AcademyLocationExcel; }

#define MX_DATA_ACADEMYLOCATIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x180D7C0)
#define MX_DATA_ACADEMYLOCATIONDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x180D7D0)
#define MX_DATA_ACADEMYLOCATIONDATA_GET_OPENCONDITIONS_OFFSET UNITYSDK_OFFSET(0x180D7E0)
#define MX_DATA_ACADEMYLOCATIONDATA_SET_OPENCONDITIONS_OFFSET UNITYSDK_OFFSET(0x180D7F0)
#define MX_DATA_ACADEMYLOCATIONDATA_GET_REWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x180D800)
#define MX_DATA_ACADEMYLOCATIONDATA_SET_REWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x180D810)
#define MX_DATA_ACADEMYLOCATIONDATA_GET_ICONIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x180D820)
#define MX_DATA_ACADEMYLOCATIONDATA_SET_ICONIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x180D830)
#define MX_DATA_ACADEMYLOCATIONDATA_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x180D840)
#define MX_DATA_ACADEMYLOCATIONDATA_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x180D850)
#define MX_DATA_ACADEMYLOCATIONDATA_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x180D860)
#define MX_DATA_ACADEMYLOCATIONDATA_SET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x180D870)
#define MX_DATA_ACADEMYLOCATIONDATA_GET_ZONES_OFFSET UNITYSDK_OFFSET(0x180D880)
#define MX_DATA_ACADEMYLOCATIONDATA_SET_ZONES_OFFSET UNITYSDK_OFFSET(0x180D890)
#define MX_DATA_ACADEMYLOCATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x180D8A0)
#define MX_DATA_ACADEMYLOCATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x180D970)
#define MX_DATA_ACADEMYLOCATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x180DAE0)

namespace MX::Data
{
	inline static constexpr unsigned int AcademyLocationData_TypeDefinitionIndex = 15705;

	class AcademyLocationData : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		Il2CppObject* _OpenConditions_k__BackingField; // 0x18
		::MX::GameLogic::Parcel::ParcelInfo* _RewardParcel_k__BackingField; // 0x20
		::System::String* _IconImagePath_k__BackingField; // 0x28
		::System::String* _PrefabPath_k__BackingField; // 0x30
		::System::UInt32 _LocalizeEtcId_k__BackingField; // 0x38
		Il2CppObject* _Zones_k__BackingField; // 0x40

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYLOCATIONDATA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYLOCATIONDATA_SET_ID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OpenConditions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYLOCATIONDATA_GET_OPENCONDITIONS_OFFSET))(nullptr);
		}

		::System::Void set_OpenConditions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYLOCATIONDATA_SET_OPENCONDITIONS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_RewardParcel()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYLOCATIONDATA_GET_REWARDPARCEL_OFFSET))(nullptr);
		}

		::System::Void set_RewardParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYLOCATIONDATA_SET_REWARDPARCEL_OFFSET))(arg, nullptr);
		}

		::System::String* get_IconImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYLOCATIONDATA_GET_ICONIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void set_IconImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYLOCATIONDATA_SET_ICONIMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_PrefabPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYLOCATIONDATA_GET_PREFABPATH_OFFSET))(nullptr);
		}

		::System::Void set_PrefabPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYLOCATIONDATA_SET_PREFABPATH_OFFSET))(str, nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYLOCATIONDATA_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeEtcId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYLOCATIONDATA_SET_LOCALIZEETCID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Zones()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYLOCATIONDATA_GET_ZONES_OFFSET))(nullptr);
		}

		::System::Void set_Zones(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYLOCATIONDATA_SET_ZONES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYLOCATIONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::AcademyLocationExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::AcademyLocationExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYLOCATIONDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::AcademyLocationExcel* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::AcademyLocationExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYLOCATIONDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

