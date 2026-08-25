#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class EventBlackboardRuntime; }
namespace MXUnderCover { class EventBlackboardProperty; }

#define MXUNDERCOVER_EVENTBLACKBOARDASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xD93020)
#define MXUNDERCOVER_EVENTBLACKBOARDASSET_GETEVENTS_OFFSET UNITYSDK_OFFSET(0xD93030)
#define MXUNDERCOVER_EVENTBLACKBOARDASSET_REMOVEEVENT_OFFSET UNITYSDK_OFFSET(0xD93040)
#define MXUNDERCOVER_EVENTBLACKBOARDASSET_GETRUNTIME_OFFSET UNITYSDK_OFFSET(0xD93090)
#define MXUNDERCOVER_EVENTBLACKBOARDASSET_ADDEVENT_OFFSET UNITYSDK_OFFSET(0xD930A0)
#define MXUNDERCOVER_EVENTBLACKBOARDASSET_SETRUNTIME_OFFSET UNITYSDK_OFFSET(0xD93160)
#define MXUNDERCOVER_EVENTBLACKBOARDASSET_CREATERUNTIME_OFFSET UNITYSDK_OFFSET(0xD93170)

namespace MXUnderCover
{
	inline static constexpr unsigned int EventBlackboardAsset_TypeDefinitionIndex = 9723;

	class EventBlackboardAsset : public Il2CppObject
	{
	public:
		Il2CppObject* events; // 0x18
		::MXUnderCover::EventBlackboardRuntime* runtime; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_EVENTBLACKBOARDASSET_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetEvents()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_EVENTBLACKBOARDASSET_GETEVENTS_OFFSET))(nullptr);
		}

		::System::Void RemoveEvent(::MXUnderCover::EventBlackboardProperty* arg)
		{
			((::System::Void(*)(::MXUnderCover::EventBlackboardProperty*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_EVENTBLACKBOARDASSET_REMOVEEVENT_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::EventBlackboardRuntime* GetRuntime()
		{
			return ((::MXUnderCover::EventBlackboardRuntime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_EVENTBLACKBOARDASSET_GETRUNTIME_OFFSET))(nullptr);
		}

		::System::Void AddEvent(::MXUnderCover::EventBlackboardProperty* arg)
		{
			((::System::Void(*)(::MXUnderCover::EventBlackboardProperty*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_EVENTBLACKBOARDASSET_ADDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetRuntime(::MXUnderCover::EventBlackboardRuntime* arg)
		{
			((::System::Void(*)(::MXUnderCover::EventBlackboardRuntime*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_EVENTBLACKBOARDASSET_SETRUNTIME_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::EventBlackboardRuntime* CreateRuntime()
		{
			return ((::MXUnderCover::EventBlackboardRuntime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_EVENTBLACKBOARDASSET_CREATERUNTIME_OFFSET))(nullptr);
		}

	};
}

