#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BGMUIDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x19F12C0)
#define MX_DATA_EXCEL_BGMUIDBSCHEMA_GET_UIPREFAB_OFFSET UNITYSDK_OFFSET(0x19F12D0)
#define MX_DATA_EXCEL_BGMUIDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x19F12E0)
#define MX_DATA_EXCEL_BGMUIDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19F12F0)
#define MX_DATA_EXCEL_BGMUIDBSCHEMA_SET_UIPREFAB_OFFSET UNITYSDK_OFFSET(0x19F1300)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BGMUIDBSchema_TypeDefinitionIndex = 16803;

	class BGMUIDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _UIPrefab_k__BackingField; // 0x20
		::System::Int64 _EventContentId_k__BackingField; // 0x28

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_UIPrefab()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIDBSCHEMA_GET_UIPREFAB_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UIPrefab(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMUIDBSCHEMA_SET_UIPREFAB_OFFSET))(arg, nullptr);
		}

	};
}

