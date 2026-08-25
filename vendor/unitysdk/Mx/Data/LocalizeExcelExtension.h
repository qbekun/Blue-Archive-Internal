#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class LocalizeExcel; }

#define MX_DATA_LOCALIZEEXCELEXTENSION_GETLOCALIZEDTEXT_OFFSET UNITYSDK_OFFSET(0x197AFF0)

namespace MX::Data
{
	inline static constexpr unsigned int LocalizeExcelExtension_TypeDefinitionIndex = 16501;

	class LocalizeExcelExtension : public Il2CppObject
	{
	public:
		::System::String* GetLocalizedText(::MX::Data::Excel::LocalizeExcel* arg)
		{
			return (return (::System::String*(*)(::MX::Data::Excel::LocalizeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEEXCELEXTENSION_GETLOCALIZEDTEXT_OFFSET))(arg, nullptr);
		}

	};
}

