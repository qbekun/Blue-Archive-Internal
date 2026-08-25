#pragma once
#include "unitysdk.h"

#define CHARDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B37980)
#define CHARDESCRIPTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B3D460)

	inline static constexpr unsigned int CharDescriptor_TypeDefinitionIndex = 29436;

	class CharDescriptor : public Il2CppObject
	{
	public:
		::System::Int32 MaskPosition; // 0x10
		CaseConversion* CaseConversion; // 0x14
		CharType* CharType; // 0x18
		::System::Boolean IsAssigned; // 0x1C

		::System::Void .ctor(::System::Int32 arg, CharType* arg)
		{
			((::System::Void(*)(::System::Int32, CharType*, ::PVOID))((::PBYTE)hIl2Cpp + CHARDESCRIPTOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARDESCRIPTOR_TOSTRING_OFFSET))(nullptr);
		}

	};

