#pragma once
#include "../../unitysdk.h"

namespace NPA::Promotion { class NXPToyQRCodeType; }

#define NPA_PROMOTION_NXPTOYQRCODEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCBB50)
#define NPA_PROMOTION_NXPTOYQRCODEINFO_GET_QRCODETYPE_OFFSET UNITYSDK_OFFSET(0x9CCBBF0)
#define NPA_PROMOTION_NXPTOYQRCODEINFO_SET_QRCODETYPE_OFFSET UNITYSDK_OFFSET(0x9CCBC00)
#define NPA_PROMOTION_NXPTOYQRCODEINFO_GET_LINKURL_OFFSET UNITYSDK_OFFSET(0x9CCBC10)
#define NPA_PROMOTION_NXPTOYQRCODEINFO_SET_LINKURL_OFFSET UNITYSDK_OFFSET(0x9CCBC20)
#define NPA_PROMOTION_NXPTOYQRCODEINFO_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9CCBC30)
#define NPA_PROMOTION_NXPTOYQRCODEINFO_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x9CCBC40)
#define NPA_PROMOTION_NXPTOYQRCODEINFO_GET_ICONURL_OFFSET UNITYSDK_OFFSET(0x9CCBC50)
#define NPA_PROMOTION_NXPTOYQRCODEINFO_SET_ICONURL_OFFSET UNITYSDK_OFFSET(0x9CCBC60)
#define NPA_PROMOTION_NXPTOYQRCODEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CCBC70)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyQRCodeInfo_TypeDefinitionIndex = 27365;

	class NXPToyQRCodeInfo : public Il2CppObject
	{
	public:
		::NPA::Promotion::NXPToyQRCodeType* qrCodeType; // 0x10
		::System::String* linkUrl; // 0x18
		::System::String* title; // 0x20
		::System::String* iconUrl; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYQRCODEINFO_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Promotion::NXPToyQRCodeType* get_QRCodeType()
		{
			return (return (::NPA::Promotion::NXPToyQRCodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYQRCODEINFO_GET_QRCODETYPE_OFFSET))(nullptr);
		}

		::System::Void set_QRCodeType(::NPA::Promotion::NXPToyQRCodeType* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyQRCodeType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYQRCODEINFO_SET_QRCODETYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_LinkUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYQRCODEINFO_GET_LINKURL_OFFSET))(nullptr);
		}

		::System::Void set_LinkUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYQRCODEINFO_SET_LINKURL_OFFSET))(str, nullptr);
		}

		::System::String* get_Title()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYQRCODEINFO_GET_TITLE_OFFSET))(nullptr);
		}

		::System::Void set_Title(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYQRCODEINFO_SET_TITLE_OFFSET))(str, nullptr);
		}

		::System::String* get_IconUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYQRCODEINFO_GET_ICONURL_OFFSET))(nullptr);
		}

		::System::Void set_IconUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYQRCODEINFO_SET_ICONURL_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYQRCODEINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

