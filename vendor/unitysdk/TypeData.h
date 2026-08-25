#pragma once
#include "unitysdk.h"

#define TYPEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA33CC90)
#define TYPEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA33A170)
#define TYPEDATA_GET_FULLTYPENAME_OFFSET UNITYSDK_OFFSET(0xA32E690)
#define TYPEDATA_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0xA32E710)

	inline static constexpr unsigned int TypeData_TypeDefinitionIndex = 30179;

	class TypeData : public Il2CppObject
	{
	public:
		::System::Type* _type_k__BackingField; // 0x10
		::System::String* m_FullTypeName; // 0x18
		::System::String* m_TypeName; // 0x20

		::System::Type* get_type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEDATA_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_fullTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEDATA_GET_FULLTYPENAME_OFFSET))(nullptr);
		}

		::System::String* get_typeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEDATA_GET_TYPENAME_OFFSET))(nullptr);
		}

	};

