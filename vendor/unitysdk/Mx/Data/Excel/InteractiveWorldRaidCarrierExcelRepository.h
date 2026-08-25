#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B57550)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCELREPOSITORY_SELECT_CARRIERSKILLLISTGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1B57590)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCELREPOSITORY_SELECTFIRST_CARRIERSKILLLISTGROUPID_OFFSET UNITYSDK_OFFSET(0x1B57990)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCELREPOSITORY_SELECT_CARRIERSKILLLISTGROUPID_OFFSET UNITYSDK_OFFSET(0x1B57CB0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B57FB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidCarrierExcelRepository_TypeDefinitionIndex = 18221;

	class InteractiveWorldRaidCarrierExcelRepository : public IBase
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_CarrierSkillListGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCELREPOSITORY_SELECT_CARRIERSKILLLISTGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_CarrierSkillListGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCELREPOSITORY_SELECTFIRST_CARRIERSKILLLISTGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CarrierSkillListGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCELREPOSITORY_SELECT_CARRIERSKILLLISTGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

