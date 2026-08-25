#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x198C3F0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECT_MESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x198C710)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x198CA20)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECT_MESSAGEGROUPIDS_OFFSET UNITYSDK_OFFSET(0x198CE20)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x198D230)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x198D530)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x198D890)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x198DCA0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x198DFC0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECTFIRST_MESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x198E000)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECT_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x198E320)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyMessangerExcelRepository_TypeDefinitionIndex = 16591;

	class AcademyMessangerExcelRepository : public ::FlatData::MailType
	{
	public:
		Il2CppObject* SelectFirst_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_MessageGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECT_MESSAGEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_MessageGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECT_MESSAGEGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_CharacterIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_MessageGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECTFIRST_MESSAGEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCELREPOSITORY_SELECT_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

	};
}

