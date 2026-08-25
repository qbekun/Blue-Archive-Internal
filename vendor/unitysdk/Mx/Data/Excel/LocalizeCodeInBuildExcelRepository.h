#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCELREPOSITORY_SELECT_KEY_OFFSET UNITYSDK_OFFSET(0x1B7DC60)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCELREPOSITORY_SELECTFIRST_KEY_OFFSET UNITYSDK_OFFSET(0x1B7DF60)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCELREPOSITORY_SELECT_KEYS_OFFSET UNITYSDK_OFFSET(0x1B7E280)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B7E680)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E7F0)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCELREPOSITORY_GET_ISINBUILD_OFFSET UNITYSDK_OFFSET(0x1B7E830)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeCodeInBuildExcelRepository_TypeDefinitionIndex = 18373;

	class LocalizeCodeInBuildExcelRepository : public <co_InternalInvoke>d__3
	{
	public:
		Il2CppObject* Select_Key(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCELREPOSITORY_SELECT_KEY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Key(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCELREPOSITORY_SELECTFIRST_KEY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Keys(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCELREPOSITORY_SELECT_KEYS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInBuild()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCELREPOSITORY_GET_ISINBUILD_OFFSET))(nullptr);
		}

	};
}

