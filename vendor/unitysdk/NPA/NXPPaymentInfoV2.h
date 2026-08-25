#pragma once
#include "../unitysdk.h"

#define NPA_NXPPAYMENTINFOV2_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCCDF0)
#define NPA_NXPPAYMENTINFOV2_GET_PRODUCTS_OFFSET UNITYSDK_OFFSET(0x9BCCE60)
#define NPA_NXPPAYMENTINFOV2_SET_PRODUCTS_OFFSET UNITYSDK_OFFSET(0x9BCCE70)
#define NPA_NXPPAYMENTINFOV2_GET_META_OFFSET UNITYSDK_OFFSET(0x9BCCE80)
#define NPA_NXPPAYMENTINFOV2_SET_META_OFFSET UNITYSDK_OFFSET(0x9BCCE90)
#define NPA_NXPPAYMENTINFOV2_GET_SERVICEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9BCCEA0)
#define NPA_NXPPAYMENTINFOV2_SET_SERVICEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9BCCEB0)
#define NPA_NXPPAYMENTINFOV2_GET_PRESENTFLAG_OFFSET UNITYSDK_OFFSET(0x9BCCEC0)
#define NPA_NXPPAYMENTINFOV2_SET_PRESENTFLAG_OFFSET UNITYSDK_OFFSET(0x9BCCED0)
#define NPA_NXPPAYMENTINFOV2_GET_PRESENTMETA_OFFSET UNITYSDK_OFFSET(0x9BCCEE0)
#define NPA_NXPPAYMENTINFOV2_SET_PRESENTMETA_OFFSET UNITYSDK_OFFSET(0x9BCCEF0)
#define NPA_NXPPAYMENTINFOV2_GET_INFLOWPATH_OFFSET UNITYSDK_OFFSET(0x9BCCF00)
#define NPA_NXPPAYMENTINFOV2_SET_INFLOWPATH_OFFSET UNITYSDK_OFFSET(0x9BCCF10)
#define NPA_NXPPAYMENTINFOV2_NOTUSEQUANTITYDIALOG_OFFSET UNITYSDK_OFFSET(0x9BCCF20)
#define NPA_NXPPAYMENTINFOV2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BCCF30)

namespace NPA
{
	inline static constexpr unsigned int NXPPaymentInfoV2_TypeDefinitionIndex = 25669;

	class NXPPaymentInfoV2 : public Il2CppObject
	{
	public:
		Il2CppObject* products; // 0x10
		Il2CppObject* meta; // 0x18
		Il2CppObject* servicePayload; // 0x20
		::System::Boolean quantityDialogFlag; // 0x28
		::System::String* presentFlag; // 0x30
		::System::String* presentMeta; // 0x38
		::System::String* inflowPath; // 0x40

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFOV2_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Products()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFOV2_GET_PRODUCTS_OFFSET))(nullptr);
		}

		::System::Void set_Products(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFOV2_SET_PRODUCTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Meta()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFOV2_GET_META_OFFSET))(nullptr);
		}

		::System::Void set_Meta(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFOV2_SET_META_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ServicePayload()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFOV2_GET_SERVICEPAYLOAD_OFFSET))(nullptr);
		}

		::System::Void set_ServicePayload(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFOV2_SET_SERVICEPAYLOAD_OFFSET))(arg, nullptr);
		}

		::System::String* get_PresentFlag()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFOV2_GET_PRESENTFLAG_OFFSET))(nullptr);
		}

		::System::Void set_PresentFlag(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFOV2_SET_PRESENTFLAG_OFFSET))(str, nullptr);
		}

		::System::String* get_PresentMeta()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFOV2_GET_PRESENTMETA_OFFSET))(nullptr);
		}

		::System::Void set_PresentMeta(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFOV2_SET_PRESENTMETA_OFFSET))(str, nullptr);
		}

		::System::String* get_InflowPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFOV2_GET_INFLOWPATH_OFFSET))(nullptr);
		}

		::System::Void set_InflowPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFOV2_SET_INFLOWPATH_OFFSET))(str, nullptr);
		}

		::System::Void NotUseQuantityDialog()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFOV2_NOTUSEQUANTITYDIALOG_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPAYMENTINFOV2_TOSTRING_OFFSET))(nullptr);
		}

	};
}

