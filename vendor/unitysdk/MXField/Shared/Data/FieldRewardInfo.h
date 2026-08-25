#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FieldRewardExcel; }

#define MXFIELD_SHARED_DATA_FIELDREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE7DD40)
#define MXFIELD_SHARED_DATA_FIELDREWARDINFO_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xE7DDD0)
#define MXFIELD_SHARED_DATA_FIELDREWARDINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xE7DDE0)
#define MXFIELD_SHARED_DATA_FIELDREWARDINFO_ADDPARCEL_OFFSET UNITYSDK_OFFSET(0xE7DDF0)
#define MXFIELD_SHARED_DATA_FIELDREWARDINFO_SET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xE7DF20)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldRewardInfo_TypeDefinitionIndex = 10599;

	class FieldRewardInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		Il2CppObject* _ParcelInfos_k__BackingField; // 0x18

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDREWARDINFO_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDREWARDINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void AddParcel(::FlatData::FieldRewardExcel* arg)
		{
			((::System::Void(*)(::FlatData::FieldRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDREWARDINFO_ADDPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDREWARDINFO_SET_PARCELINFOS_OFFSET))(arg, nullptr);
		}

	};
}

