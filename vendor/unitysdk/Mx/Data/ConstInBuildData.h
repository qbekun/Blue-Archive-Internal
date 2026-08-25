#pragma once
#include "../../unitysdk.h"

#define MX_DATA_CONSTINBUILDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18AF790)
#define MX_DATA_CONSTINBUILDDATA_GET_DOWNLOADALARMTIMERINSECONDS_OFFSET UNITYSDK_OFFSET(0x18AF7A0)
#define MX_DATA_CONSTINBUILDDATA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18AF7C0)

namespace MX::Data
{
	inline static constexpr unsigned int ConstInBuildData_TypeDefinitionIndex = 16034;

	class ConstInBuildData : public Il2CppObject
	{
	public:
		ConstInBuildInfo* info; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTINBUILDDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_DownloadAlarmTimerInSeconds()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTINBUILDDATA_GET_DOWNLOADALARMTIMERINSECONDS_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTINBUILDDATA_INITIALIZE_OFFSET))(nullptr);
		}

	};
}

