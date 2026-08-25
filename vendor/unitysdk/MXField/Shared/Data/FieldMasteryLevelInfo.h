#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_SHARED_DATA_FIELDMASTERYLEVELINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE7B8A0)
#define MXFIELD_SHARED_DATA_FIELDMASTERYLEVELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE7B8B0)
#define MXFIELD_SHARED_DATA_FIELDMASTERYLEVELINFO_GET_EXP_OFFSET UNITYSDK_OFFSET(0xE7B900)
#define MXFIELD_SHARED_DATA_FIELDMASTERYLEVELINFO_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xE7B910)
#define MXFIELD_SHARED_DATA_FIELDMASTERYLEVELINFO_GET_TOTALEXP_OFFSET UNITYSDK_OFFSET(0xE7B920)
#define MXFIELD_SHARED_DATA_FIELDMASTERYLEVELINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xE7B930)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldMasteryLevelInfo_TypeDefinitionIndex = 10588;

	class FieldMasteryLevelInfo : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::Int32 _Level_k__BackingField; // 0x18
		::System::Int64 _Exp_k__BackingField; // 0x20
		::System::Int64 _TotalExp_k__BackingField; // 0x28
		::System::Int64 _RewardId_k__BackingField; // 0x30

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYLEVELINFO_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYLEVELINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int64 get_Exp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYLEVELINFO_GET_EXP_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYLEVELINFO_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYLEVELINFO_GET_TOTALEXP_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYLEVELINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};
}

