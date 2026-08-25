#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ToastExcel&; }

#define MX_DATA_TOASTDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1963BB0)
#define MX_DATA_TOASTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1963C60)
#define MX_DATA_TOASTDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x1963C70)

namespace MX::Data
{
	inline static constexpr unsigned int ToastData_TypeDefinitionIndex = 16428;

	class ToastData : public Il2CppObject
	{
	public:
		::System::Boolean TryGetValue(::System::String* str, ::MX::Data::Excel::ToastExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::Data::Excel::ToastExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TOASTDATA_TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TOASTDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TOASTDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

	};
}

