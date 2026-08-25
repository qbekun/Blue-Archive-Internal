#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x921AD90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x921AD20)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_GET_ISSEALED_OFFSET UNITYSDK_OFFSET(0x921A910)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_GET_NINAME_OFFSET UNITYSDK_OFFSET(0x9221620)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_SET_NINAME_OFFSET UNITYSDK_OFFSET(0x9221680)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int NameInfo_TypeDefinitionIndex = 24674;

	class NameInfo : public Il2CppObject
	{
	public:
		::System::String* NIFullName; // 0x10
		::System::Int64 NIobjectId; // 0x18
		::System::Int64 NIassemId; // 0x20
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* NIprimitiveTypeEnum; // 0x28
		::System::Type* NItype; // 0x30
		::System::Boolean NIisSealed; // 0x38
		::System::Boolean NIisArray; // 0x39
		::System::Boolean NIisArrayItem; // 0x3A
		::System::Boolean NItransmitTypeOnObject; // 0x3B
		::System::Boolean NItransmitTypeOnMember; // 0x3C
		::System::Boolean NIisParentTypeOnObject; // 0x3D
		::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE* NIarrayEnum; // 0x40
		::System::Boolean NIsealedStatusChecked; // 0x44

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_INIT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSealed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_GET_ISSEALED_OFFSET))(nullptr);
		}

		::System::String* get_NIname()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_GET_NINAME_OFFSET))(nullptr);
		}

		::System::Void set_NIname(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_SET_NINAME_OFFSET))(str, nullptr);
		}

	};
}

