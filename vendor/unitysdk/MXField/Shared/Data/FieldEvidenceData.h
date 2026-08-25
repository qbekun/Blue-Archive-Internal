#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_SHARED_DATA_FIELDEVIDENCEDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xE765C0)
#define MXFIELD_SHARED_DATA_FIELDEVIDENCEDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0xE765D0)
#define MXFIELD_SHARED_DATA_FIELDEVIDENCEDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0xE765E0)
#define MXFIELD_SHARED_DATA_FIELDEVIDENCEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE76620)
#define MXFIELD_SHARED_DATA_FIELDEVIDENCEDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0xE766A0)
#define MXFIELD_SHARED_DATA_FIELDEVIDENCEDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0xE76A00)
#define MXFIELD_SHARED_DATA_FIELDEVIDENCEDATA_TRYGETSEASONALLEVIDENCEINFOS_OFFSET UNITYSDK_OFFSET(0xE76A10)
#define MXFIELD_SHARED_DATA_FIELDEVIDENCEDATA_TRYGETSEASONEVIDENCEINFO_OFFSET UNITYSDK_OFFSET(0xE76C60)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldEvidenceData_TypeDefinitionIndex = 10569;

	class FieldEvidenceData : public Il2CppObject
	{
	public:
		Il2CppObject* fieldEvidenceInfos; // 0x18

		::System::Boolean ValidateExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Boolean ValidateData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSeasonAllEvidenceInfos(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEDATA_TRYGETSEASONALLEVIDENCEINFOS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetSeasonEvidenceInfo(::System::Int64 arg, ::System::Int64 arg2, ::MXField::Shared::Data::FieldEvidenceInfo&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::MXField::Shared::Data::FieldEvidenceInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEDATA_TRYGETSEASONEVIDENCEINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

