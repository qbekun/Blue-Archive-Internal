#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOCALIZECHARPROFILEEXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1B7C900)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILEEXCELREPOSITORY_SELECT_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B7CD00)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B7D000)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILEEXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B7D040)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B7D360)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeCharProfileExcelRepository_TypeDefinitionIndex = 18366;

	class LocalizeCharProfileExcelRepository : public Save
	{
	public:
		Il2CppObject* Select_CharacterIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILEEXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILEEXCELREPOSITORY_SELECT_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILEEXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

