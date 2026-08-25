#pragma once
#include "unitysdk.h"

#define SCENARIOTIMELINEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EDF2E0)
#define SCENARIOTIMELINEINFO_SET_CANSKIP_OFFSET UNITYSDK_OFFSET(0x1EDF320)
#define SCENARIOTIMELINEINFO_SET_RESPATH_OFFSET UNITYSDK_OFFSET(0x1EDF330)
#define SCENARIOTIMELINEINFO_GET_CANSKIP_OFFSET UNITYSDK_OFFSET(0x1EDF340)
#define SCENARIOTIMELINEINFO_GET_RESPATH_OFFSET UNITYSDK_OFFSET(0x1EDF350)

	inline static constexpr unsigned int ScenarioTimelineInfo_TypeDefinitionIndex = 1854;

	class ScenarioTimelineInfo : public Il2CppObject
	{
	public:
		::System::Boolean _CanSkip_k__BackingField; // 0x10
		::System::String* _ResPath_k__BackingField; // 0x18

		::System::Void .ctor(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTIMELINEINFO_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void set_CanSkip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTIMELINEINFO_SET_CANSKIP_OFFSET))(arg, nullptr);
		}

		::System::Void set_ResPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTIMELINEINFO_SET_RESPATH_OFFSET))(str, nullptr);
		}

		::System::Boolean get_CanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTIMELINEINFO_GET_CANSKIP_OFFSET))(nullptr);
		}

		::System::String* get_ResPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTIMELINEINFO_GET_RESPATH_OFFSET))(nullptr);
		}

	};

