#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class VideoPlayInfo; }
namespace FlatData { class Language; }

#define MX_DATA_VIDEODATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x1965120)
#define MX_DATA_VIDEODATA_GETVIDEOPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1965180)
#define MX_DATA_VIDEODATA_GETVIDEOPLAYINFO_OFFSET UNITYSDK_OFFSET(0x19653F0)
#define MX_DATA_VIDEODATA_GETGLOBALVIDEOPATH_OFFSET UNITYSDK_OFFSET(0x1965290)
#define MX_DATA_VIDEODATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1965520)

namespace MX::Data
{
	inline static constexpr unsigned int VideoData_TypeDefinitionIndex = 16442;

	class VideoData : public Il2CppObject
	{
	public:
		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VIDEODATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::MX::Data::VideoPlayInfo* GetVideoPlayInfo(::System::Int64 arg, ::FlatData::Language* arg, ::System::Boolean arg)
		{
			return (return (::MX::Data::VideoPlayInfo*(*)(::System::Int64, ::FlatData::Language*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VIDEODATA_GETVIDEOPLAYINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetVideoPlayInfo(Il2CppObject* arg, ::FlatData::Language* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::FlatData::Language*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VIDEODATA_GETVIDEOPLAYINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetGlobalVideoPath(::System::Int64 arg, ::FlatData::Language* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::FlatData::Language*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VIDEODATA_GETGLOBALVIDEOPATH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_VIDEODATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

