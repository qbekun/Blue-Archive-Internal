#pragma once
#include "../../unitysdk.h"

#define NEXON_PUB_DOWNLOADSIZE_GET_TOTALBYTE_OFFSET UNITYSDK_OFFSET(0x954C290)
#define NEXON_PUB_DOWNLOADSIZE_SET_TOTALBYTE_OFFSET UNITYSDK_OFFSET(0x954C2A0)
#define NEXON_PUB_DOWNLOADSIZE_GET_DOWNLOADEDBYTE_OFFSET UNITYSDK_OFFSET(0x954C2B0)
#define NEXON_PUB_DOWNLOADSIZE_SET_DOWNLOADEDBYTE_OFFSET UNITYSDK_OFFSET(0x954C2C0)
#define NEXON_PUB_DOWNLOADSIZE_GET_TOTALFILECOUNT_OFFSET UNITYSDK_OFFSET(0x954C2D0)
#define NEXON_PUB_DOWNLOADSIZE_SET_TOTALFILECOUNT_OFFSET UNITYSDK_OFFSET(0x954C2E0)
#define NEXON_PUB_DOWNLOADSIZE_GET_DOWNLOADEDFILECOUNT_OFFSET UNITYSDK_OFFSET(0x954C2F0)
#define NEXON_PUB_DOWNLOADSIZE_SET_DOWNLOADEDFILECOUNT_OFFSET UNITYSDK_OFFSET(0x954C300)
#define NEXON_PUB_DOWNLOADSIZE_.CTOR_OFFSET UNITYSDK_OFFSET(0x954C280)

namespace Nexon::Pub
{
	inline static constexpr unsigned int DownloadSize_TypeDefinitionIndex = 37541;

	class DownloadSize : public Il2CppObject
	{
	public:
		::System::Int64 _TotalByte_k__BackingField; // 0x10
		::System::Int64 _DownloadedByte_k__BackingField; // 0x18
		::System::Int32 _TotalFileCount_k__BackingField; // 0x20
		::System::Int32 _DownloadedFileCount_k__BackingField; // 0x24

		::System::Int64 get_TotalByte()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADSIZE_GET_TOTALBYTE_OFFSET))(nullptr);
		}

		::System::Void set_TotalByte(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADSIZE_SET_TOTALBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DownloadedByte()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADSIZE_GET_DOWNLOADEDBYTE_OFFSET))(nullptr);
		}

		::System::Void set_DownloadedByte(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADSIZE_SET_DOWNLOADEDBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TotalFileCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADSIZE_GET_TOTALFILECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_TotalFileCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADSIZE_SET_TOTALFILECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DownloadedFileCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADSIZE_GET_DOWNLOADEDFILECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_DownloadedFileCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADSIZE_SET_DOWNLOADEDFILECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADSIZE_.CTOR_OFFSET))(nullptr);
		}

	};
}

