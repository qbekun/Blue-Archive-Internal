#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_MISSING_.CTOR_OFFSET UNITYSDK_OFFSET(0x923D050)
#define SYSTEM_REFLECTION_MISSING_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x923D060)
#define SYSTEM_REFLECTION_MISSING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x923D0B0)

namespace System::Reflection
{
	inline static constexpr unsigned int Missing_TypeDefinitionIndex = 24869;

	class Missing : public Il2CppObject
	{
	public:
		::System::Reflection::Missing* Value; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MISSING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MISSING_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MISSING_.CCTOR_OFFSET))(nullptr);
		}

	};
}

