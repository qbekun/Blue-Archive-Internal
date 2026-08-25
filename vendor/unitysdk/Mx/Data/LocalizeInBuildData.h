#pragma once
#include "../../unitysdk.h"

#define MX_DATA_LOCALIZEINBUILDDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x18ED940)
#define MX_DATA_LOCALIZEINBUILDDATA_TRYGETDATA_OFFSET UNITYSDK_OFFSET(0x18ED980)
#define MX_DATA_LOCALIZEINBUILDDATA_TRYGETTEXT_OFFSET UNITYSDK_OFFSET(0x18EDA70)
#define MX_DATA_LOCALIZEINBUILDDATA_GETTEXT_OFFSET UNITYSDK_OFFSET(0x18EDB70)
#define MX_DATA_LOCALIZEINBUILDDATA_GETTEXT_OFFSET UNITYSDK_OFFSET(0x18EDBD0)
#define MX_DATA_LOCALIZEINBUILDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18EDC60)

namespace MX::Data
{
	inline static constexpr unsigned int LocalizeInBuildData_TypeDefinitionIndex = 16174;

	class LocalizeInBuildData : public Il2CppObject
	{
	public:
		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEINBUILDDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetData(::System::UInt32 arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEINBUILDDATA_TRYGETDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetText(::System::UInt32 arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEINBUILDDATA_TRYGETTEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetText(::System::UInt32 arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::UInt32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEINBUILDDATA_GETTEXT_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetText(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEINBUILDDATA_GETTEXT_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEINBUILDDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

