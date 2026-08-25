#pragma once
#include "unitysdk.h"

#define IMMUTABLECOLLECTIONTYPEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x94ACB10)
#define IMMUTABLECOLLECTIONTYPEINFO_GET_CONTRACTTYPENAME_OFFSET UNITYSDK_OFFSET(0x94ACB70)
#define IMMUTABLECOLLECTIONTYPEINFO_SET_CONTRACTTYPENAME_OFFSET UNITYSDK_OFFSET(0x94ACB80)
#define IMMUTABLECOLLECTIONTYPEINFO_GET_CREATEDTYPENAME_OFFSET UNITYSDK_OFFSET(0x94ACB90)
#define IMMUTABLECOLLECTIONTYPEINFO_SET_CREATEDTYPENAME_OFFSET UNITYSDK_OFFSET(0x94ACBA0)
#define IMMUTABLECOLLECTIONTYPEINFO_GET_BUILDERTYPENAME_OFFSET UNITYSDK_OFFSET(0x94ACBB0)
#define IMMUTABLECOLLECTIONTYPEINFO_SET_BUILDERTYPENAME_OFFSET UNITYSDK_OFFSET(0x94ACBC0)

	inline static constexpr unsigned int ImmutableCollectionTypeInfo_TypeDefinitionIndex = 31860;

	class ImmutableCollectionTypeInfo : public Il2CppObject
	{
	public:
		::System::String* _ContractTypeName_k__BackingField; // 0x10
		::System::String* _CreatedTypeName_k__BackingField; // 0x18
		::System::String* _BuilderTypeName_k__BackingField; // 0x20

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUTABLECOLLECTIONTYPEINFO_.CTOR_OFFSET))(str, str, str, nullptr);
		}

		::System::String* get_ContractTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMUTABLECOLLECTIONTYPEINFO_GET_CONTRACTTYPENAME_OFFSET))(nullptr);
		}

		::System::Void set_ContractTypeName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUTABLECOLLECTIONTYPEINFO_SET_CONTRACTTYPENAME_OFFSET))(str, nullptr);
		}

		::System::String* get_CreatedTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMUTABLECOLLECTIONTYPEINFO_GET_CREATEDTYPENAME_OFFSET))(nullptr);
		}

		::System::Void set_CreatedTypeName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUTABLECOLLECTIONTYPEINFO_SET_CREATEDTYPENAME_OFFSET))(str, nullptr);
		}

		::System::String* get_BuilderTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMUTABLECOLLECTIONTYPEINFO_GET_BUILDERTYPENAME_OFFSET))(nullptr);
		}

		::System::Void set_BuilderTypeName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUTABLECOLLECTIONTYPEINFO_SET_BUILDERTYPENAME_OFFSET))(str, nullptr);
		}

	};

