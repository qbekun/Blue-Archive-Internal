#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class StickerGroupInfo&; }
namespace MX::Data { class StickerInfo&; }

#define MX_DATA_STICKERDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x195F850)
#define MX_DATA_STICKERDATA_TRYGETSTICKERGROUPINFO_OFFSET UNITYSDK_OFFSET(0x195FFE0)
#define MX_DATA_STICKERDATA_GETSTICKERINFOSBYGROUPIDANDPAGEID_OFFSET UNITYSDK_OFFSET(0x1960040)
#define MX_DATA_STICKERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1960160)
#define MX_DATA_STICKERDATA_TRYGETSTICKERINFO_OFFSET UNITYSDK_OFFSET(0x1960230)
#define MX_DATA_STICKERDATA_GET_STICKERINFOS_OFFSET UNITYSDK_OFFSET(0x1960290)
#define MX_DATA_STICKERDATA_GETSTICKERINFOSBYGROUPID_OFFSET UNITYSDK_OFFSET(0x19602E0)
#define MX_DATA_STICKERDATA_GET_STICKERGROUPINFOS_OFFSET UNITYSDK_OFFSET(0x19603F0)
#define MX_DATA_STICKERDATA_TRYGETISACHIEVEMENTTYPESTICKER_OFFSET UNITYSDK_OFFSET(0x1960440)
#define MX_DATA_STICKERDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x19605B0)

namespace MX::Data
{
	inline static constexpr unsigned int StickerData_TypeDefinitionIndex = 16418;

	class StickerData : public Il2CppObject
	{
	public:
		Il2CppObject* _stickerGroupInfoById; // 0x28
		Il2CppObject* _stickerInfoById; // 0x30

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetStickerGroupInfo(::System::Int64 arg, ::MX::Data::StickerGroupInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::StickerGroupInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERDATA_TRYGETSTICKERGROUPINFO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetStickerInfosByGroupIdAndPageId(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERDATA_GETSTICKERINFOSBYGROUPIDANDPAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetStickerInfo(::System::Int64 arg, ::MX::Data::StickerInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::StickerInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERDATA_TRYGETSTICKERINFO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_StickerInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERDATA_GET_STICKERINFOS_OFFSET))(nullptr);
		}

		Il2CppObject* GetStickerInfosByGroupId(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERDATA_GETSTICKERINFOSBYGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_StickerGroupInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERDATA_GET_STICKERGROUPINFOS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetIsAchievementTypeSticker(::System::Int64 arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERDATA_TRYGETISACHIEVEMENTTYPESTICKER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

	};
}

