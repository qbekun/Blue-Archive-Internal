#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentCollectionExcel; }

#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_EMBLEMRESOURCE_OFFSET UNITYSDK_OFFSET(0x18424A0)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_FULLRESOURCE_OFFSET UNITYSDK_OFFSET(0x18424B0)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_THUMBRESOURCE_OFFSET UNITYSDK_OFFSET(0x18424C0)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18424D0)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_EMBLEMRESOURCE_OFFSET UNITYSDK_OFFSET(0x18424E0)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_ISHORIZON_OFFSET UNITYSDK_OFFSET(0x18424F0)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_SUBNAMELOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1842500)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_ISHORIZON_OFFSET UNITYSDK_OFFSET(0x1842510)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_ISOBJECTONFULLRESOURCE_OFFSET UNITYSDK_OFFSET(0x1842520)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_FULLRESOURCE_OFFSET UNITYSDK_OFFSET(0x1842530)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1842540)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1842550)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_DECORATION_OFFSET UNITYSDK_OFFSET(0x1842560)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_DECORATION_OFFSET UNITYSDK_OFFSET(0x1842570)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_SUBNAMELOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1842580)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_THUMBRESOURCE_OFFSET UNITYSDK_OFFSET(0x1842590)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x18425A0)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18425B0)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1842780)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x1842790)
#define MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_ISOBJECTONFULLRESOURCE_OFFSET UNITYSDK_OFFSET(0x18427A0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentCollectionInfo_TypeDefinitionIndex = 15791;

	class EventContentCollectionInfo : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::String* _ThumbResource_k__BackingField; // 0x48
		::System::String* _FullResource_k__BackingField; // 0x50
		::System::UInt32 _LocalizeEtcId_k__BackingField; // 0x58
		::System::Boolean _IsHorizon_k__BackingField; // 0x5C
		::System::Boolean _IsObject_k__BackingField; // 0x5D
		::System::Boolean _IsObjectOnFullResource_k__BackingField; // 0x5E
		::System::String* _EmblemResource_k__BackingField; // 0x60
		::System::String* _SubNameLocalizeCodeId_k__BackingField; // 0x68
		::System::String* _Decoration_k__BackingField; // 0x70

		::System::String* get_EmblemResource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_EMBLEMRESOURCE_OFFSET))(nullptr);
		}

		::System::String* get_FullResource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_FULLRESOURCE_OFFSET))(nullptr);
		}

		::System::Void set_ThumbResource(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_THUMBRESOURCE_OFFSET))(str, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EmblemResource(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_EMBLEMRESOURCE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsHorizon()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_ISHORIZON_OFFSET))(nullptr);
		}

		::System::Void set_SubNameLocalizeCodeId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_SUBNAMELOCALIZECODEID_OFFSET))(str, nullptr);
		}

		::System::Void set_IsHorizon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_ISHORIZON_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsObjectOnFullResource(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_ISOBJECTONFULLRESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void set_FullResource(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_FULLRESOURCE_OFFSET))(str, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Void set_Decoration(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_DECORATION_OFFSET))(str, nullptr);
		}

		::System::String* get_Decoration()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_DECORATION_OFFSET))(nullptr);
		}

		::System::String* get_SubNameLocalizeCodeId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_SUBNAMELOCALIZECODEID_OFFSET))(nullptr);
		}

		::System::String* get_ThumbResource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_THUMBRESOURCE_OFFSET))(nullptr);
		}

		::System::Void set_IsObject(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_ISOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentCollectionExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentCollectionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_LocalizeEtcId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_SET_LOCALIZEETCID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsObject()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_ISOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsObjectOnFullResource()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCOLLECTIONINFO_GET_ISOBJECTONFULLRESOURCE_OFFSET))(nullptr);
		}

	};
}

