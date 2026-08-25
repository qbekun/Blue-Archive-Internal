#pragma once
#include "unitysdk.h"

#define FINDTRANSFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define FINDTRANSFORM_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int FindTransform_TypeDefinitionIndex = 25312;

	class FindTransform : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FINDTRANSFORM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Invoke(::System::IO::Enumeration::FileSystemEntry&* arg)
		{
			return (return (Il2CppObject*(*)(::System::IO::Enumeration::FileSystemEntry&*, ::PVOID))((::PBYTE)hIl2Cpp + FINDTRANSFORM_INVOKE_OFFSET))(arg, nullptr);
		}

	};

