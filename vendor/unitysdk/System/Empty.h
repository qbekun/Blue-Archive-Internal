#pragma once
#include "../unitysdk.h"

#define SYSTEM_EMPTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x939BF80)
#define SYSTEM_EMPTY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x939BF90)
#define SYSTEM_EMPTY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x939BFD0)
#define SYSTEM_EMPTY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x939C050)

namespace System
{
	inline static constexpr unsigned int Empty_TypeDefinitionIndex = 23926;

	class Empty : public Il2CppObject
	{
	public:
		::System::Empty* Value; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EMPTY_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EMPTY_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EMPTY_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EMPTY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

