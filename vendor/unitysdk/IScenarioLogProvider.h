#pragma once
#include "unitysdk.h"

#define ISCENARIOLOGPROVIDER_TRYGETLOGDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define ISCENARIOLOGPROVIDER_GET_LOGCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ISCENARIOLOGPROVIDER_GET_LOGSFORSAVEDATA_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IScenarioLogProvider_TypeDefinitionIndex = 1839;

	class IScenarioLogProvider : public Il2CppObject
	{
	public:
		::System::Boolean TryGetLogData(::System::Int32 arg, ScenarioLogData&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ScenarioLogData&*, ::PVOID))((::PBYTE)hIl2Cpp + ISCENARIOLOGPROVIDER_TRYGETLOGDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_LogCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ISCENARIOLOGPROVIDER_GET_LOGCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_LogsForSaveData()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ISCENARIOLOGPROVIDER_GET_LOGSFORSAVEDATA_OFFSET))(nullptr);
		}

	};

