#pragma once
#include "unitysdk.h"

#define FIELDDATEHISTORYDBFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xE6FC60)
#define FIELDDATEHISTORYDBFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xE6FCB0)
#define FIELDDATEHISTORYDBFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6F8A0)

	inline static constexpr unsigned int FieldDateHistoryDBFormatter_TypeDefinitionIndex = 10540;

	class FieldDateHistoryDBFormatter : public ::System::Collections::IComparer
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXField::Shared::Model::FieldDateHistoryDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXField::Shared::Model::FieldDateHistoryDB&*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDDATEHISTORYDBFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXField::Shared::Model::FieldDateHistoryDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXField::Shared::Model::FieldDateHistoryDB&*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDDATEHISTORYDBFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDDATEHISTORYDBFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

