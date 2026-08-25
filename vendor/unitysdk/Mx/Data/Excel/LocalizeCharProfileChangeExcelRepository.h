#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1B76E90)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCELREPOSITORY_SELECT_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B77290)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B77590)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B775D0)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B778F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeCharProfileChangeExcelRepository_TypeDefinitionIndex = 18359;

	class LocalizeCharProfileChangeExcelRepository : public <co_InternalInvoke>d__1
	{
	public:
		Il2CppObject* Select_CharacterIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCELREPOSITORY_SELECT_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

