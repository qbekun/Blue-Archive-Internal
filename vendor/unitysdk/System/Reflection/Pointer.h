#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_POINTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x923DF40)
#define SYSTEM_REFLECTION_POINTER_BOX_OFFSET UNITYSDK_OFFSET(0x923DF80)
#define SYSTEM_REFLECTION_POINTER_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x923E130)

namespace System::Reflection
{
	inline static constexpr unsigned int Pointer_TypeDefinitionIndex = 24874;

	class Pointer : public Il2CppObject
	{
	public:
		::System::Object** _ptr; // 0x10
		::System::Type* _ptrType; // 0x18

		::System::Void .ctor(::System::Object** arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_POINTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Box(::System::Object** arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Object**, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_POINTER_BOX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_POINTER_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

	};
}

