#pragma once
#include "unitysdk.h"

#define FINDPREDICATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define FINDPREDICATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int FindPredicate_TypeDefinitionIndex = 25311;

	class FindPredicate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FINDPREDICATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(::System::IO::Enumeration::FileSystemEntry&* arg)
		{
			return (return (::System::Boolean(*)(::System::IO::Enumeration::FileSystemEntry&*, ::PVOID))((::PBYTE)hIl2Cpp + FINDPREDICATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};

