#pragma once
#include "unitysdk.h"

namespace Cinemachine { class AxisState&; }

#define RECENTERING_RECENTERNOW_OFFSET UNITYSDK_OFFSET(0x2851190)
#define RECENTERING_LEGACYUPGRADE_OFFSET UNITYSDK_OFFSET(0x28511A0)
#define RECENTERING_DORECENTERING_OFFSET UNITYSDK_OFFSET(0x28511D0)
#define RECENTERING_.CTOR_OFFSET UNITYSDK_OFFSET(0x28510E0)
#define RECENTERING_COPYSTATEFROM_OFFSET UNITYSDK_OFFSET(0x28515E0)
#define RECENTERING_VALIDATE_OFFSET UNITYSDK_OFFSET(0x2851610)
#define RECENTERING_CANCELRECENTERING_OFFSET UNITYSDK_OFFSET(0x28514D0)

	inline static constexpr unsigned int Recentering_TypeDefinitionIndex = 34275;

	class Recentering : public Il2CppObject
	{
	public:
		::System::Boolean m_enabled; // 0x10
		::System::Single m_WaitTime; // 0x14
		::System::Single m_RecenteringTime; // 0x18
		::System::Single mLastAxisInputTime; // 0x1C
		::System::Single mRecenteringVelocity; // 0x20
		::System::Int32 m_LegacyHeadingDefinition; // 0x24
		::System::Int32 m_LegacyVelocityFilterStrength; // 0x28

		::System::Void RecenterNow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RECENTERING_RECENTERNOW_OFFSET))(nullptr);
		}

		::System::Boolean LegacyUpgrade(int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + RECENTERING_LEGACYUPGRADE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DoRecentering(::Cinemachine::AxisState&* arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::AxisState&*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RECENTERING_DORECENTERING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RECENTERING_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CopyStateFrom(Recentering&* arg)
		{
			((::System::Void(*)(Recentering&*, ::PVOID))((::PBYTE)hIl2Cpp + RECENTERING_COPYSTATEFROM_OFFSET))(arg, nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RECENTERING_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void CancelRecentering()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RECENTERING_CANCELRECENTERING_OFFSET))(nullptr);
		}

	};

