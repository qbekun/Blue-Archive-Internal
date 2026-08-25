#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class LocalizeCodeInBuildExcel; }

#define MX_DATA_LOCALIZECODEINBUILDEXCELEXTENSION_GETLOCALIZEDTEXT_OFFSET UNITYSDK_OFFSET(0x197B0E0)

namespace MX::Data
{
	inline static constexpr unsigned int LocalizeCodeInBuildExcelExtension_TypeDefinitionIndex = 16502;

	class LocalizeCodeInBuildExcelExtension : public Il2CppObject
	{
	public:
		::System::String* GetLocalizedText(::MX::Data::Excel::LocalizeCodeInBuildExcel* arg)
		{
			return (return (::System::String*(*)(::MX::Data::Excel::LocalizeCodeInBuildExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZECODEINBUILDEXCELEXTENSION_GETLOCALIZEDTEXT_OFFSET))(arg, nullptr);
		}

	};
}

