#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ScenarioContentCollectionExcel; }

#define MX_DATA_SCENARIOCOLLECTIONINFO_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x185B030)
#define MX_DATA_SCENARIOCOLLECTIONINFO_SET_SUBNAMELOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x185B040)
#define MX_DATA_SCENARIOCOLLECTIONINFO_SET_THUMBRESOURCE_OFFSET UNITYSDK_OFFSET(0x185B050)
#define MX_DATA_SCENARIOCOLLECTIONINFO_GET_FULLRESOURCE_OFFSET UNITYSDK_OFFSET(0x185B060)
#define MX_DATA_SCENARIOCOLLECTIONINFO_GET_ISHORIZON_OFFSET UNITYSDK_OFFSET(0x185B070)
#define MX_DATA_SCENARIOCOLLECTIONINFO_GET_EMBLEMRESOURCE_OFFSET UNITYSDK_OFFSET(0x185B080)
#define MX_DATA_SCENARIOCOLLECTIONINFO_GET_THUMBRESOURCE_OFFSET UNITYSDK_OFFSET(0x185B090)
#define MX_DATA_SCENARIOCOLLECTIONINFO_SET_EMBLEMRESOURCE_OFFSET UNITYSDK_OFFSET(0x185B0A0)
#define MX_DATA_SCENARIOCOLLECTIONINFO_SET_FULLRESOURCE_OFFSET UNITYSDK_OFFSET(0x185B0B0)
#define MX_DATA_SCENARIOCOLLECTIONINFO_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x185B0C0)
#define MX_DATA_SCENARIOCOLLECTIONINFO_GET_SUBNAMELOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x185B0D0)
#define MX_DATA_SCENARIOCOLLECTIONINFO_SET_ISHORIZON_OFFSET UNITYSDK_OFFSET(0x185B0E0)
#define MX_DATA_SCENARIOCOLLECTIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x185B0F0)
#define MX_DATA_SCENARIOCOLLECTIONINFO_SET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x185B290)
#define MX_DATA_SCENARIOCOLLECTIONINFO_SET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x185B2A0)

namespace MX::Data
{
	inline static constexpr unsigned int ScenarioCollectionInfo_TypeDefinitionIndex = 15884;

	class ScenarioCollectionInfo : public Il2CppObject
	{
	public:
		::System::String* _ThumbResource_k__BackingField; // 0x40
		::System::String* _FullResource_k__BackingField; // 0x48
		::System::UInt32 _LocalizeEtcId_k__BackingField; // 0x50
		::System::Boolean _IsHorizon_k__BackingField; // 0x54
		::System::Boolean _IsObject_k__BackingField; // 0x55
		::System::String* _EmblemResource_k__BackingField; // 0x58
		::System::String* _SubNameLocalizeCodeId_k__BackingField; // 0x60

		::System::Boolean get_IsObject()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOCOLLECTIONINFO_GET_ISOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_SubNameLocalizeCodeId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOCOLLECTIONINFO_SET_SUBNAMELOCALIZECODEID_OFFSET))(str, nullptr);
		}

		::System::Void set_ThumbResource(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOCOLLECTIONINFO_SET_THUMBRESOURCE_OFFSET))(str, nullptr);
		}

		::System::String* get_FullResource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOCOLLECTIONINFO_GET_FULLRESOURCE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsHorizon()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOCOLLECTIONINFO_GET_ISHORIZON_OFFSET))(nullptr);
		}

		::System::String* get_EmblemResource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOCOLLECTIONINFO_GET_EMBLEMRESOURCE_OFFSET))(nullptr);
		}

		::System::String* get_ThumbResource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOCOLLECTIONINFO_GET_THUMBRESOURCE_OFFSET))(nullptr);
		}

		::System::Void set_EmblemResource(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOCOLLECTIONINFO_SET_EMBLEMRESOURCE_OFFSET))(str, nullptr);
		}

		::System::Void set_FullResource(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOCOLLECTIONINFO_SET_FULLRESOURCE_OFFSET))(str, nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOCOLLECTIONINFO_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::String* get_SubNameLocalizeCodeId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOCOLLECTIONINFO_GET_SUBNAMELOCALIZECODEID_OFFSET))(nullptr);
		}

		::System::Void set_IsHorizon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOCOLLECTIONINFO_SET_ISHORIZON_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ScenarioContentCollectionExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ScenarioContentCollectionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOCOLLECTIONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_LocalizeEtcId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOCOLLECTIONINFO_SET_LOCALIZEETCID_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsObject(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOCOLLECTIONINFO_SET_ISOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

