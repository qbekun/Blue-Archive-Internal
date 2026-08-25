#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldEvidenceInfo; }

#define MXFIELD_FIELDASSETS_FIELDEVIDENCEINVENTORY_ADD_OFFSET UNITYSDK_OFFSET(0xEC4650)
#define MXFIELD_FIELDASSETS_FIELDEVIDENCEINVENTORY_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xEAFFB0)
#define MXFIELD_FIELDASSETS_FIELDEVIDENCEINVENTORY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEC4720)
#define MXFIELD_FIELDASSETS_FIELDEVIDENCEINVENTORY_ADDEVIDENCE_OFFSET UNITYSDK_OFFSET(0xEC4350)
#define MXFIELD_FIELDASSETS_FIELDEVIDENCEINVENTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC4C90)
#define MXFIELD_FIELDASSETS_FIELDEVIDENCEINVENTORY_HASEVIDENCE_OFFSET UNITYSDK_OFFSET(0xEC4CD0)

namespace MXField::FieldAssets
{
	inline static constexpr unsigned int FieldEvidenceInventory_TypeDefinitionIndex = 10868;

	class FieldEvidenceInventory : public ::MX::Logic::Services::StatService
	{
	public:
		::System::Void Add(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDEVIDENCEINVENTORY_ADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDEVIDENCEINVENTORY_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDEVIDENCEINVENTORY_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void AddEvidence(::MXField::Shared::Data::FieldEvidenceInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldEvidenceInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDEVIDENCEINVENTORY_ADDEVIDENCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDEVIDENCEINVENTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HasEvidence(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDEVIDENCEINVENTORY_HASEVIDENCE_OFFSET))(arg, nullptr);
		}

	};
}

