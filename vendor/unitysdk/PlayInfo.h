#pragma once
#include "unitysdk.h"

#define PLAYINFO_SET_BGMPATH_OFFSET UNITYSDK_OFFSET(0x1EF0C80)
#define PLAYINFO_SET_VIDEOPATH_OFFSET UNITYSDK_OFFSET(0x1EF0C90)
#define PLAYINFO_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x1EF0CA0)
#define PLAYINFO_SET_BGMID_OFFSET UNITYSDK_OFFSET(0x1EF0CB0)
#define PLAYINFO_GET_VIDEOPATH_OFFSET UNITYSDK_OFFSET(0x1EF0CC0)
#define PLAYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EF0700)
#define PLAYINFO_GET_BGMPATH_OFFSET UNITYSDK_OFFSET(0x1EF0CD0)

	inline static constexpr unsigned int PlayInfo_TypeDefinitionIndex = 1895;

	class PlayInfo : public Il2CppObject
	{
	public:
		::System::String* _VideoPath_k__BackingField; // 0x10
		::System::Int64 _BgmId_k__BackingField; // 0x18
		::System::String* _BgmPath_k__BackingField; // 0x20

		::System::Void set_BgmPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLAYINFO_SET_BGMPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_VideoPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLAYINFO_SET_VIDEOPATH_OFFSET))(str, nullptr);
		}

		::System::Int64 get_BgmId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYINFO_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Void set_BgmId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + PLAYINFO_SET_BGMID_OFFSET))(arg, nullptr);
		}

		::System::String* get_VideoPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYINFO_GET_VIDEOPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int64 arg, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLAYINFO_.CTOR_OFFSET))(str, arg, str2, nullptr);
		}

		::System::String* get_BgmPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYINFO_GET_BGMPATH_OFFSET))(nullptr);
		}

	};

