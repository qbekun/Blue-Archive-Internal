#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldEvidenceInfo; }

#define MXFIELD_FIELDASSETS_FIELDEVIDENCEOBJECT_GET_ID_OFFSET UNITYSDK_OFFSET(0xEC4DD0)
#define MXFIELD_FIELDASSETS_FIELDEVIDENCEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC4C60)
#define MXFIELD_FIELDASSETS_FIELDEVIDENCEOBJECT_GET_EVIDENCEINFO_OFFSET UNITYSDK_OFFSET(0xEC4DF0)

namespace MXField::FieldAssets
{
	inline static constexpr unsigned int FieldEvidenceObject_TypeDefinitionIndex = 10869;

	class FieldEvidenceObject : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldEvidenceInfo* _EvidenceInfo_k__BackingField; // 0x10

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDEVIDENCEOBJECT_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXField::Shared::Data::FieldEvidenceInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldEvidenceInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDEVIDENCEOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Data::FieldEvidenceInfo* get_EvidenceInfo()
		{
			return ((::MXField::Shared::Data::FieldEvidenceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDEVIDENCEOBJECT_GET_EVIDENCEINFO_OFFSET))(nullptr);
		}

	};
}

