#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCELREPOSITORY_SELECT_NAMES_OFFSET UNITYSDK_OFFSET(0x1C55670)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C55A60)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCELREPOSITORY_SELECTFIRST_NAME_OFFSET UNITYSDK_OFFSET(0x1C55AA0)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCELREPOSITORY_SELECT_NAME_OFFSET UNITYSDK_OFFSET(0x1C55DB0)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C560A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioBGEffectExcelRepository_TypeDefinitionIndex = 19240;

	class ScenarioBGEffectExcelRepository : public SaveDataInternal
	{
	public:
		Il2CppObject* Select_Names(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCELREPOSITORY_SELECT_NAMES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Name(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCELREPOSITORY_SELECTFIRST_NAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Name(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCELREPOSITORY_SELECT_NAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

