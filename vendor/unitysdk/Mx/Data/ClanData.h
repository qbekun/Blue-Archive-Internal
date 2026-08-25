#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ClanRewardType; }
namespace FlatData { class EchelonType; }

#define MX_DATA_CLANDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18A3E00)
#define MX_DATA_CLANDATA_PREPAREINITIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x18A3E60)
#define MX_DATA_CLANDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18A4380)
#define MX_DATA_CLANDATA_TRYGETREWARD_OFFSET UNITYSDK_OFFSET(0x18A4450)
#define MX_DATA_CLANDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x18A4690)

namespace MX::Data
{
	inline static constexpr unsigned int ClanData_TypeDefinitionIndex = 16024;

	class ClanData : public Il2CppObject
	{
	public:
		Il2CppObject* clanRewardExcelDict; // 0x28
		Il2CppObject* clanRewardParcelInfo; // 0x30

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLANDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitializeData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLANDATA_PREPAREINITIALIZEDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLANDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetReward(::FlatData::ClanRewardType* arg, ::FlatData::EchelonType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ClanRewardType*, ::FlatData::EchelonType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLANDATA_TRYGETREWARD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLANDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

	};
}

