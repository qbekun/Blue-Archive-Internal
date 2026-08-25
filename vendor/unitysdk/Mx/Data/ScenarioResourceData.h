#pragma once
#include "../../unitysdk.h"

#define MX_DATA_SCENARIORESOURCEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x193C2F0)
#define MX_DATA_SCENARIORESOURCEDATA_GETALLEXCELS_OFFSET UNITYSDK_OFFSET(0x193C300)
#define MX_DATA_SCENARIORESOURCEDATA_GETOPENEDEXCELS_OFFSET UNITYSDK_OFFSET(0x193C310)
#define MX_DATA_SCENARIORESOURCEDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x193C420)
#define MX_DATA_SCENARIORESOURCEDATA_GETALLEXCELSFORTITLEVIDEOOPTION_OFFSET UNITYSDK_OFFSET(0x193C460)
#define MX_DATA_SCENARIORESOURCEDATA_GETALLEXCELSUNIQUEORDERED_OFFSET UNITYSDK_OFFSET(0x193CB30)
#define MX_DATA_SCENARIORESOURCEDATA_GETLASTOPENEDEXCEL_OFFSET UNITYSDK_OFFSET(0x193D180)

namespace MX::Data
{
	inline static constexpr unsigned int ScenarioResourceData_TypeDefinitionIndex = 16369;

	class ScenarioResourceData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIORESOURCEDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllExcels(::System::DateTime* arg)
		{
			return (return (Il2CppObject*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIORESOURCEDATA_GETALLEXCELS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetOpenedExcels(::System::DateTime* arg)
		{
			return (return (Il2CppObject*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIORESOURCEDATA_GETOPENEDEXCELS_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIORESOURCEDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllExcelsForTitleVideoOption(::System::DateTime* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::DateTime*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIORESOURCEDATA_GETALLEXCELSFORTITLEVIDEOOPTION_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetAllExcelsUniqueOrdered(::System::DateTime* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::DateTime*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIORESOURCEDATA_GETALLEXCELSUNIQUEORDERED_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetLastOpenedExcel(::System::DateTime* arg)
		{
			return (return (Il2CppObject*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIORESOURCEDATA_GETLASTOPENEDEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

