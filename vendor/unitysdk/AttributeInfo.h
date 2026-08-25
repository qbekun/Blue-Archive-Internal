#pragma once
#include "unitysdk.h"

#define ATTRIBUTEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x93BA130)
#define ATTRIBUTEINFO_GET_USAGE_OFFSET UNITYSDK_OFFSET(0x93BCB90)
#define ATTRIBUTEINFO_GET_INHERITANCELEVEL_OFFSET UNITYSDK_OFFSET(0x93BCBA0)

	inline static constexpr unsigned int AttributeInfo_TypeDefinitionIndex = 23979;

	class AttributeInfo : public Il2CppObject
	{
	public:
		::System::AttributeUsageAttribute* _usage; // 0x10
		::System::Int32 _inheritanceLevel; // 0x18

		::System::Void .ctor(::System::AttributeUsageAttribute* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::AttributeUsageAttribute*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::AttributeUsageAttribute* get_Usage()
		{
			return (return (::System::AttributeUsageAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEINFO_GET_USAGE_OFFSET))(nullptr);
		}

		::System::Int32 get_InheritanceLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEINFO_GET_INHERITANCELEVEL_OFFSET))(nullptr);
		}

	};

