#pragma once
#include "../unitysdk.h"

#define NPA_NXPPAYMENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCCA00)
#define NPA_NXPPAYMENTINFO_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x9BCCA70)
#define NPA_NXPPAYMENTINFO_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x9BCCA80)
#define NPA_NXPPAYMENTINFO_GET_META_OFFSET UNITYSDK_OFFSET(0x9BCCA90)
#define NPA_NXPPAYMENTINFO_SET_META_OFFSET UNITYSDK_OFFSET(0x9BCCAA0)
#define NPA_NXPPAYMENTINFO_GET_SERVICEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9BCCAB0)
#define NPA_NXPPAYMENTINFO_SET_SERVICEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9BCCAC0)
#define NPA_NXPPAYMENTINFO_GET_QUANTITY_OFFSET UNITYSDK_OFFSET(0x9BCCAD0)
#define NPA_NXPPAYMENTINFO_SET_QUANTITY_OFFSET UNITYSDK_OFFSET(0x9BCCAE0)
#define NPA_NXPPAYMENTINFO_GET_INFLOWPATH_OFFSET UNITYSDK_OFFSET(0x9BCCAF0)
#define NPA_NXPPAYMENTINFO_SET_INFLOWPATH_OFFSET UNITYSDK_OFFSET(0x9BCCB00)
#define NPA_NXPPAYMENTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BCCB10)

namespace NPA
{
	inline static constexpr unsigned int NXPPaymentInfo_TypeDefinitionIndex = 25667;

	class NXPPaymentInfo : public Il2CppObject
	{
	public:
		::System::String* productId; // 0x10
		Il2CppObject* meta; // 0x18
		Il2CppObject* servicePayload; // 0x20
		::System::Int32 quantity; // 0x28
		::System::Boolean quantityDialogFlag; // 0x2C
		::System::String* inflowPath; // 0x30

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFO_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_ProductId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFO_GET_PRODUCTID_OFFSET))(nullptr);
		}

		::System::Void set_ProductId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFO_SET_PRODUCTID_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Meta()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFO_GET_META_OFFSET))(nullptr);
		}

		::System::Void set_Meta(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFO_SET_META_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ServicePayload()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFO_GET_SERVICEPAYLOAD_OFFSET))(nullptr);
		}

		::System::Void set_ServicePayload(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFO_SET_SERVICEPAYLOAD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Quantity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFO_GET_QUANTITY_OFFSET))(nullptr);
		}

		::System::Void set_Quantity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFO_SET_QUANTITY_OFFSET))(arg, nullptr);
		}

		::System::String* get_InflowPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFO_GET_INFLOWPATH_OFFSET))(nullptr);
		}

		::System::Void set_InflowPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFO_SET_INFLOWPATH_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

