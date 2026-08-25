#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatTransType; }
namespace FlatData { class EchelonExtensionType; }

#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A3E600)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCELREPOSITORY_SELECTFIRST_STATTRANSTYPE_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A3E770)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCELREPOSITORY_SELECT_STATTRANSTYPE_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A3EBF0)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCELREPOSITORY_SELECT_STATTRANSTYPE_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A3F060)
#define MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F600)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterStatsTransExcelRepository_TypeDefinitionIndex = 17109;

	class CharacterStatsTransExcelRepository : public ::FlatData::ScenarioBGScroll
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_StatTransType_EchelonExtensionType(::FlatData::StatTransType* arg, ::FlatData::EchelonExtensionType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::StatTransType*, ::FlatData::EchelonExtensionType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCELREPOSITORY_SELECTFIRST_STATTRANSTYPE_ECHELONEXTENSIONTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_StatTransType_EchelonExtensionType(::FlatData::StatTransType* arg, ::FlatData::EchelonExtensionType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::StatTransType*, ::FlatData::EchelonExtensionType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCELREPOSITORY_SELECT_STATTRANSTYPE_ECHELONEXTENSIONTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_StatTransType_EchelonExtensionType(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCELREPOSITORY_SELECT_STATTRANSTYPE_ECHELONEXTENSIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATSTRANSEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

