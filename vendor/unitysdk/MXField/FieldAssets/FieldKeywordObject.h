#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldKeywordInfo; }

#define MXFIELD_FIELDASSETS_FIELDKEYWORDOBJECT_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xEC5D60)
#define MXFIELD_FIELDASSETS_FIELDKEYWORDOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC53F0)
#define MXFIELD_FIELDASSETS_FIELDKEYWORDOBJECT_GET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0xEC5D70)
#define MXFIELD_FIELDASSETS_FIELDKEYWORDOBJECT_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xEC5D80)
#define MXFIELD_FIELDASSETS_FIELDKEYWORDOBJECT_GET_ID_OFFSET UNITYSDK_OFFSET(0xEC5D90)
#define MXFIELD_FIELDASSETS_FIELDKEYWORDOBJECT_SETASNEW_OFFSET UNITYSDK_OFFSET(0xEAE690)

namespace MXField::FieldAssets
{
	inline static constexpr unsigned int FieldKeywordObject_TypeDefinitionIndex = 10873;

	class FieldKeywordObject : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldKeywordInfo* _KeywordInfo_k__BackingField; // 0x10
		::System::Boolean _IsNew_k__BackingField; // 0x18

		::System::Void set_IsNew(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDKEYWORDOBJECT_SET_ISNEW_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MXField::Shared::Data::FieldKeywordInfo* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldKeywordInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDKEYWORDOBJECT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MXField::Shared::Data::FieldKeywordInfo* get_KeywordInfo()
		{
			return ((::MXField::Shared::Data::FieldKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDKEYWORDOBJECT_GET_KEYWORDINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDKEYWORDOBJECT_GET_ISNEW_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDKEYWORDOBJECT_GET_ID_OFFSET))(nullptr);
		}

		::System::Void SetAsNew(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDKEYWORDOBJECT_SETASNEW_OFFSET))(arg, nullptr);
		}

	};
}

