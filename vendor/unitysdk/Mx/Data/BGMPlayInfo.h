#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class BGMExcel; }

#define MX_DATA_BGMPLAYINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1831900)
#define MX_DATA_BGMPLAYINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x1831910)
#define MX_DATA_BGMPLAYINFO_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1831920)
#define MX_DATA_BGMPLAYINFO_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1831930)
#define MX_DATA_BGMPLAYINFO_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1831940)
#define MX_DATA_BGMPLAYINFO_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1831950)
#define MX_DATA_BGMPLAYINFO_GET_LOOPSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1831960)
#define MX_DATA_BGMPLAYINFO_SET_LOOPSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1831970)
#define MX_DATA_BGMPLAYINFO_GET_LOOPENDTIME_OFFSET UNITYSDK_OFFSET(0x1831980)
#define MX_DATA_BGMPLAYINFO_SET_LOOPENDTIME_OFFSET UNITYSDK_OFFSET(0x1831990)
#define MX_DATA_BGMPLAYINFO_GET_LOOPTRANSTIONTIME_OFFSET UNITYSDK_OFFSET(0x18319A0)
#define MX_DATA_BGMPLAYINFO_SET_LOOPTRANSTIONTIME_OFFSET UNITYSDK_OFFSET(0x18319B0)
#define MX_DATA_BGMPLAYINFO_GET_LOOPOFFSETTIME_OFFSET UNITYSDK_OFFSET(0x18319C0)
#define MX_DATA_BGMPLAYINFO_SET_LOOPOFFSETTIME_OFFSET UNITYSDK_OFFSET(0x18319D0)
#define MX_DATA_BGMPLAYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18319E0)
#define MX_DATA_BGMPLAYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1832020)
#define MX_DATA_BGMPLAYINFO_ISREQUIREDMANUALLOOP_OFFSET UNITYSDK_OFFSET(0x1832060)

namespace MX::Data
{
	inline static constexpr unsigned int BGMPlayInfo_TypeDefinitionIndex = 15728;

	class BGMPlayInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::String* _Path_k__BackingField; // 0x18
		::System::Single _Volume_k__BackingField; // 0x20
		::System::Single _LoopStartTime_k__BackingField; // 0x24
		::System::Single _LoopEndTime_k__BackingField; // 0x28
		::System::Single _LoopTranstionTime_k__BackingField; // 0x2C
		::System::Single _LoopOffsetTime_k__BackingField; // 0x30

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMPLAYINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMPLAYINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMPLAYINFO_GET_PATH_OFFSET))(nullptr);
		}

		::System::Void set_Path(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMPLAYINFO_SET_PATH_OFFSET))(str, nullptr);
		}

		::System::Single get_Volume()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMPLAYINFO_GET_VOLUME_OFFSET))(nullptr);
		}

		::System::Void set_Volume(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMPLAYINFO_SET_VOLUME_OFFSET))(arg, nullptr);
		}

		::System::Single get_LoopStartTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMPLAYINFO_GET_LOOPSTARTTIME_OFFSET))(nullptr);
		}

		::System::Void set_LoopStartTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMPLAYINFO_SET_LOOPSTARTTIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_LoopEndTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMPLAYINFO_GET_LOOPENDTIME_OFFSET))(nullptr);
		}

		::System::Void set_LoopEndTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMPLAYINFO_SET_LOOPENDTIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_LoopTranstionTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMPLAYINFO_GET_LOOPTRANSTIONTIME_OFFSET))(nullptr);
		}

		::System::Void set_LoopTranstionTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMPLAYINFO_SET_LOOPTRANSTIONTIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_LoopOffsetTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMPLAYINFO_GET_LOOPOFFSETTIME_OFFSET))(nullptr);
		}

		::System::Void set_LoopOffsetTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMPLAYINFO_SET_LOOPOFFSETTIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::BGMExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::BGMExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMPLAYINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMPLAYINFO_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean IsRequiredManualLoop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BGMPLAYINFO_ISREQUIREDMANUALLOOP_OFFSET))(nullptr);
		}

	};
}

