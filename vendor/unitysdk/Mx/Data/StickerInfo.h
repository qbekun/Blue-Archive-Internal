#pragma once
#include "../../unitysdk.h"

namespace FlatData { class StickerGetConditionType; }
namespace FlatData { class StickerCheckPassType; }
namespace FlatData { class GetStickerConditionType; }
namespace MX::Data::Excel { class StickerPageContentExcel; }

#define MX_DATA_STICKERINFO_SET_PACKEDSTICKERICONLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x185EE30)
#define MX_DATA_STICKERINFO_GET_GETSTICKERCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x185EE40)
#define MX_DATA_STICKERINFO_SET_STICKERSLOT_OFFSET UNITYSDK_OFFSET(0x185EE50)
#define MX_DATA_STICKERINFO_GET_STICKERGETCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x185EE60)
#define MX_DATA_STICKERINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x185EE70)
#define MX_DATA_STICKERINFO_GET_STICKERDETAILPATH_OFFSET UNITYSDK_OFFSET(0x185EE80)
#define MX_DATA_STICKERINFO_GET_STICKERGROUPID_OFFSET UNITYSDK_OFFSET(0x185EE90)
#define MX_DATA_STICKERINFO_GET_STICKERGETCONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x185EEA0)
#define MX_DATA_STICKERINFO_SET_STICKERCHECKPASSTYPE_OFFSET UNITYSDK_OFFSET(0x185EEB0)
#define MX_DATA_STICKERINFO_GET_PACKEDSTICKERICONLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x185EEC0)
#define MX_DATA_STICKERINFO_GET_STICKERGETCONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x185EED0)
#define MX_DATA_STICKERINFO_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x185EEE0)
#define MX_DATA_STICKERINFO_SET_PACKEDSTICKERICONPATH_OFFSET UNITYSDK_OFFSET(0x185EEF0)
#define MX_DATA_STICKERINFO_SET_GETSTICKERCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x185EF00)
#define MX_DATA_STICKERINFO_GET_STICKERGETCONDITIONPARAMETERTAG_OFFSET UNITYSDK_OFFSET(0x185EF10)
#define MX_DATA_STICKERINFO_GET_STICKERSLOT_OFFSET UNITYSDK_OFFSET(0x185EF20)
#define MX_DATA_STICKERINFO_SET_STICKERGETCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x185EF30)
#define MX_DATA_STICKERINFO_SET_STICKERGETCONDITIONPARAMETERTAG_OFFSET UNITYSDK_OFFSET(0x185EF40)
#define MX_DATA_STICKERINFO_GET_STICKERPAGEID_OFFSET UNITYSDK_OFFSET(0x185EF50)
#define MX_DATA_STICKERINFO_SET_STICKERDETAILPATH_OFFSET UNITYSDK_OFFSET(0x185EF60)
#define MX_DATA_STICKERINFO_SET_STICKERPAGEID_OFFSET UNITYSDK_OFFSET(0x185EF70)
#define MX_DATA_STICKERINFO_SET_STICKERGETCONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x185EF80)
#define MX_DATA_STICKERINFO_SET_STICKERGROUPID_OFFSET UNITYSDK_OFFSET(0x185EF90)
#define MX_DATA_STICKERINFO_SET_STICKERGETCONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x185EFA0)
#define MX_DATA_STICKERINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x185EFB0)
#define MX_DATA_STICKERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x185EFC0)
#define MX_DATA_STICKERINFO_GET_PACKEDSTICKERICONPATH_OFFSET UNITYSDK_OFFSET(0x185F200)
#define MX_DATA_STICKERINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x185F210)
#define MX_DATA_STICKERINFO_GET_STICKERCHECKPASSTYPE_OFFSET UNITYSDK_OFFSET(0x185F220)

namespace MX::Data
{
	inline static constexpr unsigned int StickerInfo_TypeDefinitionIndex = 15897;

	class StickerInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _StickerPageId_k__BackingField; // 0x18
		::System::Int64 _StickerSlot_k__BackingField; // 0x20
		::System::Int64 _StickerGroupId_k__BackingField; // 0x28
		::System::String* _IconPath_k__BackingField; // 0x30
		::System::String* _StickerDetailPath_k__BackingField; // 0x38
		::System::String* _PackedStickerIconPath_k__BackingField; // 0x40
		::System::UInt32 _PackedStickerIconLocalizeEtcId_k__BackingField; // 0x48
		::FlatData::StickerGetConditionType* _StickerGetConditionType_k__BackingField; // 0x4C
		::FlatData::StickerCheckPassType* _StickerCheckPassType_k__BackingField; // 0x50
		::FlatData::GetStickerConditionType* _GetStickerConditionType_k__BackingField; // 0x54
		::Il2CppArray<::System::Object*>* _StickerGetConditionParameter_k__BackingField; // 0x58
		::Il2CppArray<::System::Object*>* _StickerGetConditionParameterTag_k__BackingField; // 0x60
		::System::Int64 _StickerGetConditionCount_k__BackingField; // 0x68

		::System::Void set_PackedStickerIconLocalizeEtcId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_SET_PACKEDSTICKERICONLOCALIZEETCID_OFFSET))(arg, nullptr);
		}

		::FlatData::GetStickerConditionType* get_GetStickerConditionType()
		{
			return (return (::FlatData::GetStickerConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_GET_GETSTICKERCONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_StickerSlot(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_SET_STICKERSLOT_OFFSET))(arg, nullptr);
		}

		::FlatData::StickerGetConditionType* get_StickerGetConditionType()
		{
			return (return (::FlatData::StickerGetConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_GET_STICKERGETCONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::String* get_StickerDetailPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_GET_STICKERDETAILPATH_OFFSET))(nullptr);
		}

		::System::Int64 get_StickerGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_GET_STICKERGROUPID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_StickerGetConditionParameter()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_GET_STICKERGETCONDITIONPARAMETER_OFFSET))(nullptr);
		}

		::System::Void set_StickerCheckPassType(::FlatData::StickerCheckPassType* arg)
		{
			((::System::Void(*)(::FlatData::StickerCheckPassType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_SET_STICKERCHECKPASSTYPE_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_PackedStickerIconLocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_GET_PACKEDSTICKERICONLOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Int64 get_StickerGetConditionCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_GET_STICKERGETCONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_IconPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_SET_ICONPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_PackedStickerIconPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_SET_PACKEDSTICKERICONPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_GetStickerConditionType(::FlatData::GetStickerConditionType* arg)
		{
			((::System::Void(*)(::FlatData::GetStickerConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_SET_GETSTICKERCONDITIONTYPE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_StickerGetConditionParameterTag()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_GET_STICKERGETCONDITIONPARAMETERTAG_OFFSET))(nullptr);
		}

		::System::Int64 get_StickerSlot()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_GET_STICKERSLOT_OFFSET))(nullptr);
		}

		::System::Void set_StickerGetConditionType(::FlatData::StickerGetConditionType* arg)
		{
			((::System::Void(*)(::FlatData::StickerGetConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_SET_STICKERGETCONDITIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_StickerGetConditionParameterTag(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_SET_STICKERGETCONDITIONPARAMETERTAG_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StickerPageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_GET_STICKERPAGEID_OFFSET))(nullptr);
		}

		::System::Void set_StickerDetailPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_SET_STICKERDETAILPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_StickerPageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_SET_STICKERPAGEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_StickerGetConditionParameter(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_SET_STICKERGETCONDITIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Void set_StickerGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_SET_STICKERGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_StickerGetConditionCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_SET_STICKERGETCONDITIONCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::StickerPageContentExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::StickerPageContentExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_PackedStickerIconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_GET_PACKEDSTICKERICONPATH_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_GET_ICONPATH_OFFSET))(nullptr);
		}

		::FlatData::StickerCheckPassType* get_StickerCheckPassType()
		{
			return (return (::FlatData::StickerCheckPassType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STICKERINFO_GET_STICKERCHECKPASSTYPE_OFFSET))(nullptr);
		}

	};
}

