#pragma once
#include "unitysdk.h"

#define FORMATIONLOCATIONKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x18DCDF0)
#define FORMATIONLOCATIONKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18DCE00)

	inline static constexpr unsigned int FormationLocationKey_TypeDefinitionIndex = 16132;

	class FormationLocationKey : public Il2CppObject
	{
	public:
		::System::Int64 GroupId; // 0x10

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONLOCATIONKEY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONLOCATIONKEY_TOSTRING_OFFSET))(nullptr);
		}

	};

