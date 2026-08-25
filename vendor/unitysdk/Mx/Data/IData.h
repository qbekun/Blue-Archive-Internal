#pragma once
#include "../../unitysdk.h"

#define MX_DATA_IDATA_DATAPREPROCESSING_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IDATA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int IData_TypeDefinitionIndex = 15695;

	class IData : public Il2CppObject
	{
	public:
		::System::Void DataPreprocessing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IDATA_DATAPREPROCESSING_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IDATA_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

	};
}

