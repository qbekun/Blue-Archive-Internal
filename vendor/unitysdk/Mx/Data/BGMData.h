#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class BGMPlayInfo; }
namespace FlatData { class Language; }
namespace MX::Data::Excel { class BGMUIExcel&; }

#define MX_DATA_BGMDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x187C0B0)
#define MX_DATA_BGMDATA_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x187C150)
#define MX_DATA_BGMDATA_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x187C400)
#define MX_DATA_BGMDATA_GETBGMPLAYINFOBYRAIDDATA_OFFSET UNITYSDK_OFFSET(0x187C850)
#define MX_DATA_BGMDATA_GETBGMPLAYINFOBYUINAME_OFFSET UNITYSDK_OFFSET(0x187C940)
#define MX_DATA_BGMDATA_GETBGM2NDPLAYINFOBYUINAME_OFFSET UNITYSDK_OFFSET(0x187CAE0)
#define MX_DATA_BGMDATA_GETBGM3RDPLAYINFOBYUINAME_OFFSET UNITYSDK_OFFSET(0x187CB30)
#define MX_DATA_BGMDATA_TRYGETBGMPLAYINFOBYUINAME_OFFSET UNITYSDK_OFFSET(0x187C990)
#define MX_DATA_BGMDATA_GETBGM_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x187C220)
#define MX_DATA_BGMDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x187CB80)

namespace MX::Data
{
	inline static constexpr unsigned int BGMData_TypeDefinitionIndex = 15976;

	class BGMData : public Il2CppObject
	{
	public:
		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo(::System::Int64 arg, ::FlatData::Language* arg)
		{
			return (return (::MX::Data::BGMPlayInfo*(*)(::System::Int64, ::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMDATA_GETBGMPLAYINFO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetBGMPlayInfo(Il2CppObject* arg, ::FlatData::Language* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMDATA_GETBGMPLAYINFO_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfoByRaidData(::System::Int64 arg, ::System::Int64 arg, ::FlatData::Language* arg)
		{
			return (return (::MX::Data::BGMPlayInfo*(*)(::System::Int64, ::System::Int64, ::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMDATA_GETBGMPLAYINFOBYRAIDDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfoByUIName(::System::String* str, ::FlatData::Language* arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::BGMPlayInfo*(*)(::System::String*, ::FlatData::Language*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMDATA_GETBGMPLAYINFOBYUINAME_OFFSET))(str, arg, arg, nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGM2ndPlayInfoByUIName(::System::String* str, ::FlatData::Language* arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::BGMPlayInfo*(*)(::System::String*, ::FlatData::Language*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMDATA_GETBGM2NDPLAYINFOBYUINAME_OFFSET))(str, arg, arg, nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGM3rdPlayInfoByUIName(::System::String* str, ::FlatData::Language* arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::BGMPlayInfo*(*)(::System::String*, ::FlatData::Language*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMDATA_GETBGM3RDPLAYINFOBYUINAME_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryGetBGMPlayInfoByUIName(::System::String* str, ::System::Int64 arg, ::MX::Data::Excel::BGMUIExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int64, ::MX::Data::Excel::BGMUIExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMDATA_TRYGETBGMPLAYINFOBYUINAME_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* GetBGM_GlobalExcel(::System::Int64 arg, ::FlatData::Language* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::Language*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMDATA_GETBGM_GLOBALEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

