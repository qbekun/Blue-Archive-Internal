#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class VideoExcel; }

#define MX_DATA_VIDEOPLAYINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x18611B0)
#define MX_DATA_VIDEOPLAYINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x18611C0)
#define MX_DATA_VIDEOPLAYINFO_GET_VIDEOPATH_OFFSET UNITYSDK_OFFSET(0x18611D0)
#define MX_DATA_VIDEOPLAYINFO_SET_VIDEOPATH_OFFSET UNITYSDK_OFFSET(0x18611E0)
#define MX_DATA_VIDEOPLAYINFO_GET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x18611F0)
#define MX_DATA_VIDEOPLAYINFO_SET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x1861200)
#define MX_DATA_VIDEOPLAYINFO_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1861210)
#define MX_DATA_VIDEOPLAYINFO_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1861220)
#define MX_DATA_VIDEOPLAYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1861230)
#define MX_DATA_VIDEOPLAYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18616F0)

namespace MX::Data
{
	inline static constexpr unsigned int VideoPlayInfo_TypeDefinitionIndex = 15908;

	class VideoPlayInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::String* _VideoPath_k__BackingField; // 0x18
		::System::String* _AudioPath_k__BackingField; // 0x20
		::System::Single _Volume_k__BackingField; // 0x28

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VIDEOPLAYINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VIDEOPLAYINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::String* get_VideoPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VIDEOPLAYINFO_GET_VIDEOPATH_OFFSET))(nullptr);
		}

		::System::Void set_VideoPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VIDEOPLAYINFO_SET_VIDEOPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_AudioPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VIDEOPLAYINFO_GET_AUDIOPATH_OFFSET))(nullptr);
		}

		::System::Void set_AudioPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VIDEOPLAYINFO_SET_AUDIOPATH_OFFSET))(str, nullptr);
		}

		::System::Single get_Volume()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VIDEOPLAYINFO_GET_VOLUME_OFFSET))(nullptr);
		}

		::System::Void set_Volume(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VIDEOPLAYINFO_SET_VOLUME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::VideoExcel* arg, ::System::String* str)
		{
			((::System::Void(*)(::MX::Data::Excel::VideoExcel*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VIDEOPLAYINFO_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VIDEOPLAYINFO_.CTOR_OFFSET))(str, str, arg, nullptr);
		}

	};
}

