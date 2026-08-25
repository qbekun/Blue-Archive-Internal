#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class LocalizeErrorExcel; }

#define MX_DATA_LOCALIZEERROREXCELEXTENSION_GETLOCALIZEDTEXT_OFFSET UNITYSDK_OFFSET(0x197AF00)

namespace MX::Data
{
	inline static constexpr unsigned int LocalizeErrorExcelExtension_TypeDefinitionIndex = 16500;

	class LocalizeErrorExcelExtension : public Il2CppObject
	{
	public:
		::System::String* GetLocalizedText(::MX::Data::Excel::LocalizeErrorExcel* arg)
		{
			return (return (::System::String*(*)(::MX::Data::Excel::LocalizeErrorExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEERROREXCELEXTENSION_GETLOCALIZEDTEXT_OFFSET))(arg, nullptr);
		}

	};
}

