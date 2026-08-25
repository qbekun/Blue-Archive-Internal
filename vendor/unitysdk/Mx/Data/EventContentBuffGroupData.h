#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentBuffGroupExcel; }

#define MX_DATA_EVENTCONTENTBUFFGROUPDATA_SET_BUFFGROUPKEY_OFFSET UNITYSDK_OFFSET(0x1841130)
#define MX_DATA_EVENTCONTENTBUFFGROUPDATA_SET_BUFFDATAS_OFFSET UNITYSDK_OFFSET(0x1841140)
#define MX_DATA_EVENTCONTENTBUFFGROUPDATA_SET_BUFFGROUPNAMELOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1841150)
#define MX_DATA_EVENTCONTENTBUFFGROUPDATA_GET_BUFFCONTENTID_OFFSET UNITYSDK_OFFSET(0x1841160)
#define MX_DATA_EVENTCONTENTBUFFGROUPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1841170)
#define MX_DATA_EVENTCONTENTBUFFGROUPDATA_SET_BUFFGROUPPROB_OFFSET UNITYSDK_OFFSET(0x18417B0)
#define MX_DATA_EVENTCONTENTBUFFGROUPDATA_GET_BUFFGROUPID_OFFSET UNITYSDK_OFFSET(0x18417C0)
#define MX_DATA_EVENTCONTENTBUFFGROUPDATA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18417D0)
#define MX_DATA_EVENTCONTENTBUFFGROUPDATA_SET_BUFFCONTENTID_OFFSET UNITYSDK_OFFSET(0x18417E0)
#define MX_DATA_EVENTCONTENTBUFFGROUPDATA_GET_BUFFGROUPPROB_OFFSET UNITYSDK_OFFSET(0x18417F0)
#define MX_DATA_EVENTCONTENTBUFFGROUPDATA_GET_BUFFDATAS_OFFSET UNITYSDK_OFFSET(0x1841800)
#define MX_DATA_EVENTCONTENTBUFFGROUPDATA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1841810)
#define MX_DATA_EVENTCONTENTBUFFGROUPDATA_GET_BUFFGROUPKEY_OFFSET UNITYSDK_OFFSET(0x1841820)
#define MX_DATA_EVENTCONTENTBUFFGROUPDATA_SET_BUFFGROUPID_OFFSET UNITYSDK_OFFSET(0x1841830)
#define MX_DATA_EVENTCONTENTBUFFGROUPDATA_GET_BUFFGROUPNAMELOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1841840)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentBuffGroupData_TypeDefinitionIndex = 15783;

	class EventContentBuffGroupData : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		Il2CppObject* _BuffGroupKey_k__BackingField; // 0x18
		::System::Int64 _BuffContentId_k__BackingField; // 0x28
		::System::Int64 _BuffGroupId_k__BackingField; // 0x30
		::System::String* _BuffGroupNameLocalizeCodeId_k__BackingField; // 0x38
		Il2CppObject* _BuffDatas_k__BackingField; // 0x40
		::System::Int32 _BuffGroupProb_k__BackingField; // 0x48

		::System::Void set_BuffGroupKey(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFGROUPDATA_SET_BUFFGROUPKEY_OFFSET))(arg, nullptr);
		}

		::System::Void set_BuffDatas(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFGROUPDATA_SET_BUFFDATAS_OFFSET))(arg, nullptr);
		}

		::System::Void set_BuffGroupNameLocalizeCodeId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFGROUPDATA_SET_BUFFGROUPNAMELOCALIZECODEID_OFFSET))(str, nullptr);
		}

		::System::Int64 get_BuffContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFGROUPDATA_GET_BUFFCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentBuffGroupExcel* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentBuffGroupExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFGROUPDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_BuffGroupProb(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFGROUPDATA_SET_BUFFGROUPPROB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BuffGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFGROUPDATA_GET_BUFFGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFGROUPDATA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_BuffContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFGROUPDATA_SET_BUFFCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BuffGroupProb()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFGROUPDATA_GET_BUFFGROUPPROB_OFFSET))(nullptr);
		}

		Il2CppObject* get_BuffDatas()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFGROUPDATA_GET_BUFFDATAS_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFGROUPDATA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		Il2CppObject* get_BuffGroupKey()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFGROUPDATA_GET_BUFFGROUPKEY_OFFSET))(nullptr);
		}

		::System::Void set_BuffGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFGROUPDATA_SET_BUFFGROUPID_OFFSET))(arg, nullptr);
		}

		::System::String* get_BuffGroupNameLocalizeCodeId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTBUFFGROUPDATA_GET_BUFFGROUPNAMELOCALIZECODEID_OFFSET))(nullptr);
		}

	};
}

