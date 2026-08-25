#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class DuplicateBonusExcel; }

#define MX_DATA_DUPLICATEBONUSINFO_SET_REWARDPARCELINFO_OFFSET UNITYSDK_OFFSET(0x183CDE0)
#define MX_DATA_DUPLICATEBONUSINFO_GET_SOURCEITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0x183CDF0)
#define MX_DATA_DUPLICATEBONUSINFO_GET_USINGRESULTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x183CE00)
#define MX_DATA_DUPLICATEBONUSINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x183CE10)
#define MX_DATA_DUPLICATEBONUSINFO_GET_REWARDPARCELINFO_OFFSET UNITYSDK_OFFSET(0x183CEE0)
#define MX_DATA_DUPLICATEBONUSINFO_SET_USINGRESULTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x183CEF0)
#define MX_DATA_DUPLICATEBONUSINFO_SET_SOURCEITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0x183CF00)

namespace MX::Data
{
	inline static constexpr unsigned int DuplicateBonusInfo_TypeDefinitionIndex = 15774;

	class DuplicateBonusInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SourceItemUniqueId_k__BackingField; // 0x10
		::System::Int64 _UsingResultCharacterUniqueId_k__BackingField; // 0x18
		::MX::GameLogic::Parcel::ParcelInfo* _RewardParcelInfo_k__BackingField; // 0x20

		::System::Void set_RewardParcelInfo(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DUPLICATEBONUSINFO_SET_REWARDPARCELINFO_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SourceItemUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DUPLICATEBONUSINFO_GET_SOURCEITEMUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_UsingResultCharacterUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DUPLICATEBONUSINFO_GET_USINGRESULTCHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::DuplicateBonusExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::DuplicateBonusExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DUPLICATEBONUSINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_RewardParcelInfo()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DUPLICATEBONUSINFO_GET_REWARDPARCELINFO_OFFSET))(nullptr);
		}

		::System::Void set_UsingResultCharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DUPLICATEBONUSINFO_SET_USINGRESULTCHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SourceItemUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DUPLICATEBONUSINFO_SET_SOURCEITEMUNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

