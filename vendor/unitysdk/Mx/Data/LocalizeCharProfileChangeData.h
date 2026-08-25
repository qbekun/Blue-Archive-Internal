#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class LocalizeCharProfileChangeExcel&; }

#define MX_DATA_LOCALIZECHARPROFILECHANGEDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x18EB130)
#define MX_DATA_LOCALIZECHARPROFILECHANGEDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x18EB1E0)
#define MX_DATA_LOCALIZECHARPROFILECHANGEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18EB220)

namespace MX::Data
{
	inline static constexpr unsigned int LocalizeCharProfileChangeData_TypeDefinitionIndex = 16170;

	class LocalizeCharProfileChangeData : public Il2CppObject
	{
	public:
		::System::Boolean TryGetValue(::System::Int64 arg, ::MX::Data::Excel::LocalizeCharProfileChangeExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::LocalizeCharProfileChangeExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZECHARPROFILECHANGEDATA_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZECHARPROFILECHANGEDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZECHARPROFILECHANGEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

