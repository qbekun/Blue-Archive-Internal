#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_SHORTENUMEQUALITYCOMPARER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_SHORTENUMEQUALITYCOMPARER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_SHORTENUMEQUALITYCOMPARER`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ShortEnumEqualityComparer`1_TypeDefinitionIndex = 25185;

	class ShortEnumEqualityComparer`1 : public ::MX::GameLogic::Factory::ContentSaveDBFactory
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_SHORTENUMEQUALITYCOMPARER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_SHORTENUMEQUALITYCOMPARER`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_SHORTENUMEQUALITYCOMPARER`1_GETHASHCODE_OFFSET))(arg, nullptr);
		}

	};
}

