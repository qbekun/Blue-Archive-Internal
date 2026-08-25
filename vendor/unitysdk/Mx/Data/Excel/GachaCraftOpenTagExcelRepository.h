#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class CraftNodeTier; }

#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCELREPOSITORY_SELECTFIRST_NODETIER_OFFSET UNITYSDK_OFFSET(0x1B33DC0)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCELREPOSITORY_SELECT_NODETIERS_OFFSET UNITYSDK_OFFSET(0x1B34120)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCELREPOSITORY_SELECT_NODETIER_OFFSET UNITYSDK_OFFSET(0x1B34520)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B34870)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B349E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaCraftOpenTagExcelRepository_TypeDefinitionIndex = 18072;

	class GachaCraftOpenTagExcelRepository : public Candidate
	{
	public:
		Il2CppObject* SelectFirst_NodeTier(::FlatData::CraftNodeTier* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::CraftNodeTier*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCELREPOSITORY_SELECTFIRST_NODETIER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_NodeTiers(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCELREPOSITORY_SELECT_NODETIERS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_NodeTier(::FlatData::CraftNodeTier* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::CraftNodeTier*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCELREPOSITORY_SELECT_NODETIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

