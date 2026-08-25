#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FieldKeywordExcel; }

#define MXFIELD_SHARED_DATA_FIELDKEYWORDINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xE7A7F0)
#define MXFIELD_SHARED_DATA_FIELDKEYWORDINFO_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE7A800)
#define MXFIELD_SHARED_DATA_FIELDKEYWORDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE7A8A0)
#define MXFIELD_SHARED_DATA_FIELDKEYWORDINFO_GET_NAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xE7A930)
#define MXFIELD_SHARED_DATA_FIELDKEYWORDINFO_GET_DESCRIPTIONLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xE7A940)
#define MXFIELD_SHARED_DATA_FIELDKEYWORDINFO_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xE7A950)
#define MXFIELD_SHARED_DATA_FIELDKEYWORDINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE7A960)
#define MXFIELD_SHARED_DATA_FIELDKEYWORDINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xE7AA00)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldKeywordInfo_TypeDefinitionIndex = 10581;

	class FieldKeywordInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _SeasonId_k__BackingField; // 0x18
		::System::String* _NameLocalizeKey_k__BackingField; // 0x20
		::System::String* _DescriptionLocalizeKey_k__BackingField; // 0x28
		::System::String* _ImagePath_k__BackingField; // 0x30

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDKEYWORDINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDKEYWORDINFO_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::FieldKeywordExcel* arg)
		{
			((::System::Void(*)(::FlatData::FieldKeywordExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDKEYWORDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_NameLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDKEYWORDINFO_GET_NAMELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::String* get_DescriptionLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDKEYWORDINFO_GET_DESCRIPTIONLOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDKEYWORDINFO_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDKEYWORDINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDKEYWORDINFO_GET_ID_OFFSET))(nullptr);
		}

	};
}

