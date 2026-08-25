#pragma once
#include "../unitysdk.h"

#define NPA_NXPCARTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBC1D0)
#define NPA_NXPCARTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBC1E0)
#define NPA_NXPCARTITEM_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x9BBC250)
#define NPA_NXPCARTITEM_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x9BBC260)
#define NPA_NXPCARTITEM_GET_QUANTITY_OFFSET UNITYSDK_OFFSET(0x9BBC270)
#define NPA_NXPCARTITEM_SET_QUANTITY_OFFSET UNITYSDK_OFFSET(0x9BBC280)
#define NPA_NXPCARTITEM_GET_META_OFFSET UNITYSDK_OFFSET(0x9BBC290)
#define NPA_NXPCARTITEM_SET_META_OFFSET UNITYSDK_OFFSET(0x9BBC2A0)
#define NPA_NXPCARTITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBC2B0)

namespace NPA
{
	inline static constexpr unsigned int NXPCartItem_TypeDefinitionIndex = 25495;

	class NXPCartItem : public Il2CppObject
	{
	public:
		::System::String* productId; // 0x10
		::System::Int32 quantity; // 0x18
		::System::String* meta; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCARTITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCARTITEM_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_ProductId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCARTITEM_GET_PRODUCTID_OFFSET))(nullptr);
		}

		::System::Void set_ProductId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCARTITEM_SET_PRODUCTID_OFFSET))(str, nullptr);
		}

		::System::Int32 get_Quantity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCARTITEM_GET_QUANTITY_OFFSET))(nullptr);
		}

		::System::Void set_Quantity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCARTITEM_SET_QUANTITY_OFFSET))(arg, nullptr);
		}

		::System::String* get_Meta()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCARTITEM_GET_META_OFFSET))(nullptr);
		}

		::System::Void set_Meta(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCARTITEM_SET_META_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCARTITEM_TOSTRING_OFFSET))(nullptr);
		}

	};
}

