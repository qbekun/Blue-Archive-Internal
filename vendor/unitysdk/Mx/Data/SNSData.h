#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class SNSInfoExcel&; }
namespace MX::Data::Excel { class SNSProfileExcel&; }
namespace MX::Data::Excel { class SNSPostExcel&; }

#define MX_DATA_SNSDATA_TRYGETSNSPOSTEXCELS_OFFSET UNITYSDK_OFFSET(0x195E030)
#define MX_DATA_SNSDATA_TRYGETSNSPOSTEXCELSBYSNSINFOID_OFFSET UNITYSDK_OFFSET(0x195E0E0)
#define MX_DATA_SNSDATA_TRYGETSNSINFOEXCELS_OFFSET UNITYSDK_OFFSET(0x195E140)
#define MX_DATA_SNSDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x195E1F0)
#define MX_DATA_SNSDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x195E270)
#define MX_DATA_SNSDATA_TRYGETSNSINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x195E7B0)
#define MX_DATA_SNSDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x195E8F0)
#define MX_DATA_SNSDATA_TRYGETSNSPROFILEBYPROFILEID_OFFSET UNITYSDK_OFFSET(0x195E970)
#define MX_DATA_SNSDATA_TRYGETSNSPOSTEXCEL_OFFSET UNITYSDK_OFFSET(0x195EAB0)

namespace MX::Data
{
	inline static constexpr unsigned int SNSData_TypeDefinitionIndex = 16411;

	class SNSData : public Il2CppObject
	{
	public:
		Il2CppObject* _snsPostsBySNSInfoId; // 0x28

		::System::Boolean TryGetSNSPostExcels(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SNSDATA_TRYGETSNSPOSTEXCELS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetSNSPostExcelsBySNSInfoId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SNSDATA_TRYGETSNSPOSTEXCELSBYSNSINFOID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSNSInfoExcels(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SNSDATA_TRYGETSNSINFOEXCELS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SNSDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SNSDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSNSInfoExcel(::System::Int64 arg, ::MX::Data::Excel::SNSInfoExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::SNSInfoExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SNSDATA_TRYGETSNSINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SNSDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSNSProfileByProfileId(::System::Int64 arg, ::MX::Data::Excel::SNSProfileExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::SNSProfileExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SNSDATA_TRYGETSNSPROFILEBYPROFILEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSNSPostExcel(::System::Int64 arg, ::MX::Data::Excel::SNSPostExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::SNSPostExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SNSDATA_TRYGETSNSPOSTEXCEL_OFFSET))(arg, arg, nullptr);
		}

	};
}

