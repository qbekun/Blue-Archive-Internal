#pragma once
#include "unitysdk.h"

#define SAVEDSCENARIORESOURCEINFO_SET_BGMPATH_OFFSET UNITYSDK_OFFSET(0x1D289A0)
#define SAVEDSCENARIORESOURCEINFO_GET_VIDEOPATH_OFFSET UNITYSDK_OFFSET(0x1D289B0)
#define SAVEDSCENARIORESOURCEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D289C0)
#define SAVEDSCENARIORESOURCEINFO_SET_BGMID_OFFSET UNITYSDK_OFFSET(0x1D28A20)
#define SAVEDSCENARIORESOURCEINFO_SET_VIDEOPATH_OFFSET UNITYSDK_OFFSET(0x1D28A30)
#define SAVEDSCENARIORESOURCEINFO_GET_BGMPATH_OFFSET UNITYSDK_OFFSET(0x1D28A40)
#define SAVEDSCENARIORESOURCEINFO_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x1D28A50)
#define SAVEDSCENARIORESOURCEINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x1D28A60)
#define SAVEDSCENARIORESOURCEINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D28A70)

	inline static constexpr unsigned int SavedScenarioResourceInfo_TypeDefinitionIndex = 20013;

	class SavedScenarioResourceInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::String* _VideoPath_k__BackingField; // 0x18
		::System::Int64 _BgmId_k__BackingField; // 0x20
		::System::String* _BgmPath_k__BackingField; // 0x28

		::System::Void set_BgmPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SAVEDSCENARIORESOURCEINFO_SET_BGMPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_VideoPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SAVEDSCENARIORESOURCEINFO_GET_VIDEOPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::String* str, ::System::Int64 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::System::String*, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SAVEDSCENARIORESOURCEINFO_.CTOR_OFFSET))(arg, str, arg, str, nullptr);
		}

		::System::Void set_BgmId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SAVEDSCENARIORESOURCEINFO_SET_BGMID_OFFSET))(arg, nullptr);
		}

		::System::Void set_VideoPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SAVEDSCENARIORESOURCEINFO_SET_VIDEOPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_BgmPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SAVEDSCENARIORESOURCEINFO_GET_BGMPATH_OFFSET))(nullptr);
		}

		::System::Int64 get_BgmId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SAVEDSCENARIORESOURCEINFO_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SAVEDSCENARIORESOURCEINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SAVEDSCENARIORESOURCEINFO_GET_ID_OFFSET))(nullptr);
		}

	};

