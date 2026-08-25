#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FieldEvidenceExcel; }

#define MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE762E0)
#define MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_DESCRIPTIONLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xE76380)
#define MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xE76390)
#define MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_DETAILLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xE763A0)
#define MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_NAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xE763B0)
#define MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE763C0)
#define MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE76460)
#define MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xE76500)
#define MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xE76510)
#define MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0xE76520)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldEvidenceInfo_TypeDefinitionIndex = 10566;

	class FieldEvidenceInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _SeasonId_k__BackingField; // 0x18
		::System::String* _NameLocalizeKey_k__BackingField; // 0x20
		::System::String* _DescriptionLocalizeKey_k__BackingField; // 0x28
		::System::String* _DetailLocalizeKey_k__BackingField; // 0x30
		::System::String* _ImagePath_k__BackingField; // 0x38

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::String* get_DescriptionLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_DESCRIPTIONLOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::String* get_DetailLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_DETAILLOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::String* get_NameLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_NAMELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::FieldEvidenceExcel* arg)
		{
			((::System::Void(*)(::FlatData::FieldEvidenceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_Detail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDEVIDENCEINFO_GET_DETAIL_OFFSET))(nullptr);
		}

	};
}

