#pragma once
#include "unitysdk.h"

#define ENUMMAPMEMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A04D50)
#define ENUMMAPMEMBER_GET_XMLNAME_OFFSET UNITYSDK_OFFSET(0x9A04DA0)
#define ENUMMAPMEMBER_GET_ENUMNAME_OFFSET UNITYSDK_OFFSET(0x9A04DB0)
#define ENUMMAPMEMBER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9A04DC0)

	inline static constexpr unsigned int EnumMapMember_TypeDefinitionIndex = 27941;

	class EnumMapMember : public Il2CppObject
	{
	public:
		::System::String* _xmlName; // 0x10
		::System::String* _enumName; // 0x18
		::System::Int64 _value; // 0x20

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ENUMMAPMEMBER_.CTOR_OFFSET))(str, str, arg, nullptr);
		}

		::System::String* get_XmlName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMMAPMEMBER_GET_XMLNAME_OFFSET))(nullptr);
		}

		::System::String* get_EnumName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMMAPMEMBER_GET_ENUMNAME_OFFSET))(nullptr);
		}

		::System::Int64 get_Value()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMMAPMEMBER_GET_VALUE_OFFSET))(nullptr);
		}

	};

