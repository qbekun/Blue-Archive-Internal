#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_PROPERTYCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x976B940)
#define SYSTEM_DATA_PROPERTYCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x976B950)
#define SYSTEM_DATA_PROPERTYCOLLECTION_CLONE_OFFSET UNITYSDK_OFFSET(0x976B970)

namespace System::Data
{
	inline static constexpr unsigned int PropertyCollection_TypeDefinitionIndex = 32277;

	class PropertyCollection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PROPERTYCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PROPERTYCOLLECTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PROPERTYCOLLECTION_CLONE_OFFSET))(nullptr);
		}

	};
}

