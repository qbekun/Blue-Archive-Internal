#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class ProductSelectionGroupKey; }

#define MX_DATA_PRODUCTSELECTIONGROUPKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1925E30)
#define MX_DATA_PRODUCTSELECTIONGROUPKEY_CREATEKEY_OFFSET UNITYSDK_OFFSET(0x1923920)
#define MX_DATA_PRODUCTSELECTIONGROUPKEY_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1925E40)
#define MX_DATA_PRODUCTSELECTIONGROUPKEY_GET_COMPONENTID_OFFSET UNITYSDK_OFFSET(0x1925E50)
#define MX_DATA_PRODUCTSELECTIONGROUPKEY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1925E60)
#define MX_DATA_PRODUCTSELECTIONGROUPKEY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1925EA0)
#define MX_DATA_PRODUCTSELECTIONGROUPKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1925EC0)
#define MX_DATA_PRODUCTSELECTIONGROUPKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1925E80)
#define MX_DATA_PRODUCTSELECTIONGROUPKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1925F40)
#define MX_DATA_PRODUCTSELECTIONGROUPKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1925F90)

namespace MX::Data
{
	inline static constexpr unsigned int ProductSelectionGroupKey_TypeDefinitionIndex = 16302;

	class ProductSelectionGroupKey : public Il2CppObject
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x10
		::System::Int64 _ComponentId_k__BackingField; // 0x18

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTSELECTIONGROUPKEY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::ProductSelectionGroupKey* CreateKey(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::ProductSelectionGroupKey*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTSELECTIONGROUPKEY_CREATEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTSELECTIONGROUPKEY_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_ComponentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTSELECTIONGROUPKEY_GET_COMPONENTID_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Data::ProductSelectionGroupKey* arg, ::MX::Data::ProductSelectionGroupKey* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::ProductSelectionGroupKey*, ::MX::Data::ProductSelectionGroupKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTSELECTIONGROUPKEY_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Data::ProductSelectionGroupKey* arg, ::MX::Data::ProductSelectionGroupKey* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::ProductSelectionGroupKey*, ::MX::Data::ProductSelectionGroupKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTSELECTIONGROUPKEY_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTSELECTIONGROUPKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Data::ProductSelectionGroupKey* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::ProductSelectionGroupKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTSELECTIONGROUPKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTSELECTIONGROUPKEY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTSELECTIONGROUPKEY_TOSTRING_OFFSET))(nullptr);
		}

	};
}

