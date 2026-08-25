#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FieldInteractionType; }

#define MXFIELD_SHARED_DATA_FIELDINTERACTIONDESC_GET_ID_OFFSET UNITYSDK_OFFSET(0xE76E00)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONDESC_.CTOR_OFFSET UNITYSDK_OFFSET(0xE76E10)
#define MXFIELD_SHARED_DATA_FIELDINTERACTIONDESC_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xE76E20)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldInteractionDesc_TypeDefinitionIndex = 10570;

	class FieldInteractionDesc : public Il2CppObject
	{
	public:
		::FlatData::FieldInteractionType* _Type_k__BackingField; // 0x10
		::System::Int64 _Id_k__BackingField; // 0x18

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONDESC_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::FieldInteractionType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::FieldInteractionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONDESC_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldInteractionType* get_Type()
		{
			return ((::FlatData::FieldInteractionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDINTERACTIONDESC_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

