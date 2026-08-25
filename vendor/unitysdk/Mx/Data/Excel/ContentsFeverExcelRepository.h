#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FeverBattleType; }

#define MX_DATA_EXCEL_CONTENTSFEVEREXCELREPOSITORY_SELECT_CONDITIONCONTENTS_OFFSET UNITYSDK_OFFSET(0x1A6F570)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A6F970)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCELREPOSITORY_SELECTFIRST_CONDITIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1A6FAE0)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCELREPOSITORY_SELECT_CONDITIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1A6FE40)
#define MX_DATA_EXCEL_CONTENTSFEVEREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A70190)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentsFeverExcelRepository_TypeDefinitionIndex = 17322;

	class ContentsFeverExcelRepository : public ::FlatData::GachaRewardType
	{
	public:
		Il2CppObject* Select_ConditionContents(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCELREPOSITORY_SELECT_CONDITIONCONTENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_ConditionContent(::FlatData::FeverBattleType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::FeverBattleType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCELREPOSITORY_SELECTFIRST_CONDITIONCONTENT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ConditionContent(::FlatData::FeverBattleType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::FeverBattleType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCELREPOSITORY_SELECT_CONDITIONCONTENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSFEVEREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

