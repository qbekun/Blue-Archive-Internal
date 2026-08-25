#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldKeywordInfo; }

#define MXFIELD_FIELDASSETS_FIELDKEYWORDINVENTORY_BUILDKEYWORDSBYSKIPQUEST_OFFSET UNITYSDK_OFFSET(0xEC4E00)
#define MXFIELD_FIELDASSETS_FIELDKEYWORDINVENTORY_ADD_OFFSET UNITYSDK_OFFSET(0xEC5430)
#define MXFIELD_FIELDASSETS_FIELDKEYWORDINVENTORY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEC5500)
#define MXFIELD_FIELDASSETS_FIELDKEYWORDINVENTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC5A50)
#define MXFIELD_FIELDASSETS_FIELDKEYWORDINVENTORY_ADDKEYWORD_OFFSET UNITYSDK_OFFSET(0xEC4220)

namespace MXField::FieldAssets
{
	inline static constexpr unsigned int FieldKeywordInventory_TypeDefinitionIndex = 10872;

	class FieldKeywordInventory : public ::MX::Logic::Services::TimeService
	{
	public:
		::System::Void BuildKeywordsBySkipQuest(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDKEYWORDINVENTORY_BUILDKEYWORDSBYSKIPQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDKEYWORDINVENTORY_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDKEYWORDINVENTORY_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDKEYWORDINVENTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddKeyword(::MXField::Shared::Data::FieldKeywordInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldKeywordInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDKEYWORDINVENTORY_ADDKEYWORD_OFFSET))(arg, nullptr);
		}

	};
}

