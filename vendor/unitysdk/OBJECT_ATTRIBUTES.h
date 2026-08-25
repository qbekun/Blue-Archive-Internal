#pragma once
#include "unitysdk.h"

#define OBJECT_ATTRIBUTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x911F570)

	inline static constexpr unsigned int OBJECT_ATTRIBUTES_TypeDefinitionIndex = 23555;

	class OBJECT_ATTRIBUTES : public Il2CppObject
	{
	public:
		::System::UInt32 Length; // 0x10
		::System::Int32 RootDirectory; // 0x18
		::System::Object** ObjectName; // 0x20
		ObjectAttributes* Attributes; // 0x28
		::System::Object** SecurityDescriptor; // 0x30
		::System::Object** SecurityQualityOfService; // 0x38

		::System::Void .ctor(::System::Object** arg, ObjectAttributes* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ObjectAttributes*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + OBJECT_ATTRIBUTES_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

