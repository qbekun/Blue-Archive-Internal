#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class UCStageTableInfo; }

#define MX_DATA_UNDERCOVERSTAGEDATA_GETEXCELSBYSTAGENAME_OFFSET UNITYSDK_OFFSET(0x1964C40)
#define MX_DATA_UNDERCOVERSTAGEDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x1964E50)
#define MX_DATA_UNDERCOVERSTAGEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1964E90)
#define MX_DATA_UNDERCOVERSTAGEDATA_GETFIRSTEXCELBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1964EA0)
#define MX_DATA_UNDERCOVERSTAGEDATA_GETEXCELSBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1964F10)
#define MX_DATA_UNDERCOVERSTAGEDATA_GETDEFAULTUCSTAGETABLEINFO_OFFSET UNITYSDK_OFFSET(0x1964F90)

namespace MX::Data
{
	inline static constexpr unsigned int UnderCoverStageData_TypeDefinitionIndex = 16440;

	class UnderCoverStageData : public Il2CppObject
	{
	public:
		Il2CppObject* GetExcelsByStageName(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UNDERCOVERSTAGEDATA_GETEXCELSBYSTAGENAME_OFFSET))(str, nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UNDERCOVERSTAGEDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UNDERCOVERSTAGEDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetFirstExcelByGroupId(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UNDERCOVERSTAGEDATA_GETFIRSTEXCELBYGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetExcelsByGroupId(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UNDERCOVERSTAGEDATA_GETEXCELSBYGROUPID_OFFSET))(arg, nullptr);
		}

		::MX::Data::UCStageTableInfo* GetDefaultUCStageTableInfo(::System::String* str)
		{
			return (return (::MX::Data::UCStageTableInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UNDERCOVERSTAGEDATA_GETDEFAULTUCSTAGETABLEINFO_OFFSET))(str, nullptr);
		}

	};
}

