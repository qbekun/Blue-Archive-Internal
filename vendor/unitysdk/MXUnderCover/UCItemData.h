#pragma once
#include "../unitysdk.h"

namespace FlatData { class UnderCoverItemCategory; }

#define MXUNDERCOVER_UCITEMDATA_SET_OWNERID_OFFSET UNITYSDK_OFFSET(0xDA7900)
#define MXUNDERCOVER_UCITEMDATA_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xDA7910)
#define MXUNDERCOVER_UCITEMDATA_SET_HASOWNER_OFFSET UNITYSDK_OFFSET(0xDA7920)
#define MXUNDERCOVER_UCITEMDATA_GET_OWNERID_OFFSET UNITYSDK_OFFSET(0xDA7930)
#define MXUNDERCOVER_UCITEMDATA_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xDA7940)
#define MXUNDERCOVER_UCITEMDATA_GET_TABLEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDA7950)
#define MXUNDERCOVER_UCITEMDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA7960)
#define MXUNDERCOVER_UCITEMDATA_SET_TABLEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDA7970)
#define MXUNDERCOVER_UCITEMDATA_GET_HASOWNER_OFFSET UNITYSDK_OFFSET(0xDA7980)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCItemData_TypeDefinitionIndex = 9873;

	class UCItemData : public Il2CppObject
	{
	public:
		::System::Int64 _TableUniqueId_k__BackingField; // 0x10
		::System::Boolean _HasOwner_k__BackingField; // 0x18
		::System::Int32 _OwnerID_k__BackingField; // 0x1C
		::FlatData::UnderCoverItemCategory* _Category_k__BackingField; // 0x20

		::System::Void set_OwnerID(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMDATA_SET_OWNERID_OFFSET))(arg, nullptr);
		}

		::FlatData::UnderCoverItemCategory* get_Category()
		{
			return ((::FlatData::UnderCoverItemCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMDATA_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Void set_HasOwner(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMDATA_SET_HASOWNER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_OwnerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMDATA_GET_OWNERID_OFFSET))(nullptr);
		}

		::System::Void set_Category(::FlatData::UnderCoverItemCategory* arg)
		{
			((::System::Void(*)(::FlatData::UnderCoverItemCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMDATA_SET_CATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TableUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMDATA_GET_TABLEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TableUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMDATA_SET_TABLEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMDATA_GET_HASOWNER_OFFSET))(nullptr);
		}

	};
}

