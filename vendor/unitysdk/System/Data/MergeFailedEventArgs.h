#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_MERGEFAILEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9767D10)
#define SYSTEM_DATA_MERGEFAILEDEVENTARGS_GET_CONFLICT_OFFSET UNITYSDK_OFFSET(0x9767D90)

namespace System::Data
{
	inline static constexpr unsigned int MergeFailedEventArgs_TypeDefinitionIndex = 32272;

	class MergeFailedEventArgs : public Il2CppObject
	{
	public:
		::System::Data::DataTable* _Table_k__BackingField; // 0x10
		::System::String* _Conflict_k__BackingField; // 0x18

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGEFAILEDEVENTARGS_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::String* get_Conflict()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGEFAILEDEVENTARGS_GET_CONFLICT_OFFSET))(nullptr);
		}

	};
}

