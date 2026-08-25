#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ParcelType; }
namespace MX::Data::Excel { class ItemExcel; }

#define MX_DATA_CANUSEITEMDATAINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1836AE0)
#define MX_DATA_CANUSEITEMDATAINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x1836AF0)
#define MX_DATA_CANUSEITEMDATAINFO_GET_USINGRESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1836B00)
#define MX_DATA_CANUSEITEMDATAINFO_SET_USINGRESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1836B10)
#define MX_DATA_CANUSEITEMDATAINFO_GET_OBTAINABLERESULTLIST_OFFSET UNITYSDK_OFFSET(0x1836B20)
#define MX_DATA_CANUSEITEMDATAINFO_SET_OBTAINABLERESULTLIST_OFFSET UNITYSDK_OFFSET(0x1836B30)
#define MX_DATA_CANUSEITEMDATAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1836B40)
#define MX_DATA_CANUSEITEMDATAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1836B50)
#define MX_DATA_CANUSEITEMDATAINFO_ISCANGET_OFFSET UNITYSDK_OFFSET(0x1836E70)

namespace MX::Data
{
	inline static constexpr unsigned int CanUseItemDataInfo_TypeDefinitionIndex = 15741;

	class CanUseItemDataInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::FlatData::ParcelType* _UsingResultType_k__BackingField; // 0x18
		Il2CppObject* _ObtainableResultList_k__BackingField; // 0x20

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CANUSEITEMDATAINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CANUSEITEMDATAINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::FlatData::ParcelType* get_UsingResultType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CANUSEITEMDATAINFO_GET_USINGRESULTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_UsingResultType(::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CANUSEITEMDATAINFO_SET_USINGRESULTTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ObtainableResultList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CANUSEITEMDATAINFO_GET_OBTAINABLERESULTLIST_OFFSET))(nullptr);
		}

		::System::Void set_ObtainableResultList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CANUSEITEMDATAINFO_SET_OBTAINABLERESULTLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CANUSEITEMDATAINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ItemExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ItemExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CANUSEITEMDATAINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCanGet(::FlatData::ParcelType* arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CANUSEITEMDATAINFO_ISCANGET_OFFSET))(arg, arg, nullptr);
		}

	};
}

