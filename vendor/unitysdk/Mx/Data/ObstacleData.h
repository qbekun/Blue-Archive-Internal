#pragma once
#include "../../unitysdk.h"

#define MX_DATA_OBSTACLEDATA_GETSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x191AFA0)
#define MX_DATA_OBSTACLEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x191B0D0)
#define MX_DATA_OBSTACLEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x191B150)
#define MX_DATA_OBSTACLEDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x191B670)

namespace MX::Data
{
	inline static constexpr unsigned int ObstacleData_TypeDefinitionIndex = 16277;

	class ObstacleData : public Il2CppObject
	{
	public:
		Il2CppObject* statDic; // 0x28

		Il2CppObject* GetStatExcel(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OBSTACLEDATA_GETSTATEXCEL_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OBSTACLEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OBSTACLEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OBSTACLEDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

	};
}

