#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class LogicEffect; }
namespace MX::Data::Excel { class MiniGameShootingGeasExcel; }
namespace MX::MinigameShooting { class Character; }

#define MX_MINIGAMESHOOTING_GEAS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1459040)
#define MX_MINIGAMESHOOTING_GEAS_GET_GEASDATA_OFFSET UNITYSDK_OFFSET(0x1463950)
#define MX_MINIGAMESHOOTING_GEAS_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0x1463960)
#define MX_MINIGAMESHOOTING_GEAS_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1463970)
#define MX_MINIGAMESHOOTING_GEAS_SET_MAXOVERLAP_OFFSET UNITYSDK_OFFSET(0x1463980)
#define MX_MINIGAMESHOOTING_GEAS_SET_CURRENTOVERLAP_OFFSET UNITYSDK_OFFSET(0x1463990)
#define MX_MINIGAMESHOOTING_GEAS_GET_CURRENTOVERLAP_OFFSET UNITYSDK_OFFSET(0x14639A0)
#define MX_MINIGAMESHOOTING_GEAS_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x14639B0)
#define MX_MINIGAMESHOOTING_GEAS_GET_ISMAXOVERLAP_OFFSET UNITYSDK_OFFSET(0x14639C0)
#define MX_MINIGAMESHOOTING_GEAS_GET_MAXOVERLAP_OFFSET UNITYSDK_OFFSET(0x14639D0)
#define MX_MINIGAMESHOOTING_GEAS_SET_EXCEL_OFFSET UNITYSDK_OFFSET(0x14639E0)
#define MX_MINIGAMESHOOTING_GEAS_SET_GEASDATA_OFFSET UNITYSDK_OFFSET(0x1463A00)
#define MX_MINIGAMESHOOTING_GEAS_APPLY_OFFSET UNITYSDK_OFFSET(0x14590B0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int Geas_TypeDefinitionIndex = 15070;

	class Geas : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::Int64 _CurrentOverlap_k__BackingField; // 0x18
		::System::Int64 _MaxOverlap_k__BackingField; // 0x20
		::MX::MinigameShooting::LogicEffect* _GeasData_k__BackingField; // 0x28
		::MX::Data::Excel::MiniGameShootingGeasExcel* _Excel_k__BackingField; // 0x30

		::System::Void .ctor(::MX::Data::Excel::MiniGameShootingGeasExcel* arg, ::MX::MinigameShooting::LogicEffect* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameShootingGeasExcel*, ::MX::MinigameShooting::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GEAS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::MinigameShooting::LogicEffect* get_GeasData()
		{
			return ((::MX::MinigameShooting::LogicEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GEAS_GET_GEASDATA_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameShootingGeasExcel* get_Excel()
		{
			return ((::MX::Data::Excel::MiniGameShootingGeasExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GEAS_GET_EXCEL_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GEAS_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_MaxOverlap(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GEAS_SET_MAXOVERLAP_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentOverlap(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GEAS_SET_CURRENTOVERLAP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CurrentOverlap()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GEAS_GET_CURRENTOVERLAP_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GEAS_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMaxOverLap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GEAS_GET_ISMAXOVERLAP_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxOverlap()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GEAS_GET_MAXOVERLAP_OFFSET))(nullptr);
		}

		::System::Void set_Excel(::MX::Data::Excel::MiniGameShootingGeasExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameShootingGeasExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GEAS_SET_EXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_GeasData(::MX::MinigameShooting::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GEAS_SET_GEASDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Apply(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GEAS_APPLY_OFFSET))(arg, nullptr);
		}

	};
}

