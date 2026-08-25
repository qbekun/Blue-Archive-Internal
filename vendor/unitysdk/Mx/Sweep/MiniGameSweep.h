#pragma once
#include "../../unitysdk.h"

class StageSweep;
namespace FlatData { class EventContentType; }
namespace MX::NetworkProtocol { class MiniGameShootingSweepResponse; }

#define MX_SWEEP_MINIGAMESWEEP_REQUESTSWEEP_OFFSET UNITYSDK_OFFSET(0xE15EB0)
#define MX_SWEEP_MINIGAMESWEEP_ISOPEN_OFFSET UNITYSDK_OFFSET(0xE160F0)
#define MX_SWEEP_MINIGAMESWEEP_INITCOST_OFFSET UNITYSDK_OFFSET(0xE16100)
#define MX_SWEEP_MINIGAMESWEEP_.CTOR_OFFSET UNITYSDK_OFFSET(0xE16330)
#define MX_SWEEP_MINIGAMESWEEP_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xE16470)
#define MX_SWEEP_MINIGAMESWEEP_REFRESHLISTITEM_OFFSET UNITYSDK_OFFSET(0xE16480)
#define MX_SWEEP_MINIGAMESWEEP__SHOOTINGSWEEPREQUEST_B__13_0_OFFSET UNITYSDK_OFFSET(0xE16490)
#define MX_SWEEP_MINIGAMESWEEP_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xE16620)
#define MX_SWEEP_MINIGAMESWEEP_CARDSWEEPREQUEST_OFFSET UNITYSDK_OFFSET(0xE15FA0)
#define MX_SWEEP_MINIGAMESWEEP_REFRESHHISTORY_OFFSET UNITYSDK_OFFSET(0xE16630)
#define MX_SWEEP_MINIGAMESWEEP_SHOOTINGSWEEPREQUEST_OFFSET UNITYSDK_OFFSET(0xE15ED0)
#define MX_SWEEP_MINIGAMESWEEP_REFRESHMAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xE16640)
#define MX_SWEEP_MINIGAMESWEEP_SET_STAGESWEEP_OFFSET UNITYSDK_OFFSET(0xE16670)
#define MX_SWEEP_MINIGAMESWEEP_BEGINSWEEP_OFFSET UNITYSDK_OFFSET(0xE16680)
#define MX_SWEEP_MINIGAMESWEEP_GET_STAGESWEEP_OFFSET UNITYSDK_OFFSET(0xE16A70)

namespace Mx::Sweep
{
	inline static constexpr unsigned int MiniGameSweep_TypeDefinitionIndex = 10325;

	class MiniGameSweep : public Il2CppObject
	{
	public:
		StageSweep* _StageSweep_k__BackingField; // 0x50
		::System::Int64 _EventContentId_k__BackingField; // 0x58
		::FlatData::EventContentType* eventContentType; // 0x60

		::System::Void RequestSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_MINIGAMESWEEP_REQUESTSWEEP_OFFSET))(nullptr);
		}

		::System::Boolean IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_MINIGAMESWEEP_ISOPEN_OFFSET))(nullptr);
		}

		::System::Void InitCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_MINIGAMESWEEP_INITCOST_OFFSET))(nullptr);
		}

		::System::Void .ctor(StageSweep* arg, ::System::Int64 arg2, Il2CppObject* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(StageSweep*, ::System::Int64, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_MINIGAMESWEEP_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_MINIGAMESWEEP_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshListItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_MINIGAMESWEEP_REFRESHLISTITEM_OFFSET))(nullptr);
		}

		::System::Void _ShootingSweepRequest_b__13_0(::MX::NetworkProtocol::MiniGameShootingSweepResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameShootingSweepResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_MINIGAMESWEEP__SHOOTINGSWEEPREQUEST_B__13_0_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_MINIGAMESWEEP_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void CardSweepRequest()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_MINIGAMESWEEP_CARDSWEEPREQUEST_OFFSET))(nullptr);
		}

		::System::Void RefreshHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_MINIGAMESWEEP_REFRESHHISTORY_OFFSET))(nullptr);
		}

		::System::Void ShootingSweepRequest()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_MINIGAMESWEEP_SHOOTINGSWEEPREQUEST_OFFSET))(nullptr);
		}

		::System::Void RefreshMaxSweepCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_MINIGAMESWEEP_REFRESHMAXSWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_StageSweep(StageSweep* arg)
		{
			((::System::Void(*)(StageSweep*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_MINIGAMESWEEP_SET_STAGESWEEP_OFFSET))(arg, nullptr);
		}

		::System::Void BeginSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_MINIGAMESWEEP_BEGINSWEEP_OFFSET))(nullptr);
		}

		StageSweep* get_StageSweep()
		{
			return ((StageSweep*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_MINIGAMESWEEP_GET_STAGESWEEP_OFFSET))(nullptr);
		}

	};
}

