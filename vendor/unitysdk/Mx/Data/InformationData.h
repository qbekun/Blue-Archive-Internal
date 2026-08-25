#pragma once
#include "../../unitysdk.h"

#define MX_DATA_INFORMATIONDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x18E1CC0)
#define MX_DATA_INFORMATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18E1D00)
#define MX_DATA_INFORMATIONDATA_GETPAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x18E1D10)

namespace MX::Data
{
	inline static constexpr unsigned int InformationData_TypeDefinitionIndex = 16146;

	class InformationData : public Il2CppObject
	{
	public:
		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INFORMATIONDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INFORMATIONDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetPageExcel(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INFORMATIONDATA_GETPAGEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

