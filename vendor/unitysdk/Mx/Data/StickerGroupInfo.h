#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class StickerGroupExcel; }

#define MX_DATA_STICKERGROUPINFO_SET_LOCALIZETITLE_OFFSET UNITYSDK_OFFSET(0x185EBD0)
#define MX_DATA_STICKERGROUPINFO_SET_STICKERGROUPCOVERPATH_OFFSET UNITYSDK_OFFSET(0x185EBE0)
#define MX_DATA_STICKERGROUPINFO_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x185EBF0)
#define MX_DATA_STICKERGROUPINFO_GET_STICKERGROUPICONPATH_OFFSET UNITYSDK_OFFSET(0x185EC00)
#define MX_DATA_STICKERGROUPINFO_SET_PAGECOMPLETESLOT_OFFSET UNITYSDK_OFFSET(0x185EC10)
#define MX_DATA_STICKERGROUPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x185EC20)
#define MX_DATA_STICKERGROUPINFO_SET_UNIQUELAYOUTPATH_OFFSET UNITYSDK_OFFSET(0x185ED80)
#define MX_DATA_STICKERGROUPINFO_GET_UNIQUELAYOUTPATH_OFFSET UNITYSDK_OFFSET(0x185ED90)
#define MX_DATA_STICKERGROUPINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x185EDA0)
#define MX_DATA_STICKERGROUPINFO_SET_LOCALIZEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x185EDB0)
#define MX_DATA_STICKERGROUPINFO_GET_STICKERGROUPCOVERPATH_OFFSET UNITYSDK_OFFSET(0x185EDC0)
#define MX_DATA_STICKERGROUPINFO_GET_PAGECOMPLETESLOT_OFFSET UNITYSDK_OFFSET(0x185EDD0)
#define MX_DATA_STICKERGROUPINFO_GET_LOCALIZEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x185EDE0)
#define MX_DATA_STICKERGROUPINFO_SET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x185EDF0)
#define MX_DATA_STICKERGROUPINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x185EE00)
#define MX_DATA_STICKERGROUPINFO_GET_LOCALIZETITLE_OFFSET UNITYSDK_OFFSET(0x185EE10)
#define MX_DATA_STICKERGROUPINFO_SET_STICKERGROUPICONPATH_OFFSET UNITYSDK_OFFSET(0x185EE20)

namespace MX::Data
{
	inline static constexpr unsigned int StickerGroupInfo_TypeDefinitionIndex = 15896;

	class StickerGroupInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::String* _Layout_k__BackingField; // 0x18
		::System::String* _UniqueLayoutPath_k__BackingField; // 0x20
		::System::String* _StickerGroupIconpath_k__BackingField; // 0x28
		::System::String* _StickerGroupCoverpath_k__BackingField; // 0x30
		::System::Int64 _PageCompleteSlot_k__BackingField; // 0x38
		::MX::GameLogic::Parcel::ParcelInfo* PageCompleteReward; // 0x40
		::System::UInt32 _LocalizeTitle_k__BackingField; // 0x48
		::System::UInt32 _LocalizeDescription_k__BackingField; // 0x4C

		::System::Void set_LocalizeTitle(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERGROUPINFO_SET_LOCALIZETITLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_StickerGroupCoverpath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERGROUPINFO_SET_STICKERGROUPCOVERPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_Layout()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERGROUPINFO_GET_LAYOUT_OFFSET))(nullptr);
		}

		::System::String* get_StickerGroupIconpath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERGROUPINFO_GET_STICKERGROUPICONPATH_OFFSET))(nullptr);
		}

		::System::Void set_PageCompleteSlot(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERGROUPINFO_SET_PAGECOMPLETESLOT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::StickerGroupExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::StickerGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERGROUPINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_UniqueLayoutPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERGROUPINFO_SET_UNIQUELAYOUTPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_UniqueLayoutPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERGROUPINFO_GET_UNIQUELAYOUTPATH_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERGROUPINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void set_LocalizeDescription(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERGROUPINFO_SET_LOCALIZEDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::String* get_StickerGroupCoverpath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERGROUPINFO_GET_STICKERGROUPCOVERPATH_OFFSET))(nullptr);
		}

		::System::Int64 get_PageCompleteSlot()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERGROUPINFO_GET_PAGECOMPLETESLOT_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeDescription()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERGROUPINFO_GET_LOCALIZEDESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void set_Layout(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERGROUPINFO_SET_LAYOUT_OFFSET))(str, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERGROUPINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeTitle()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERGROUPINFO_GET_LOCALIZETITLE_OFFSET))(nullptr);
		}

		::System::Void set_StickerGroupIconpath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERGROUPINFO_SET_STICKERGROUPICONPATH_OFFSET))(str, nullptr);
		}

	};
}

