#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class ScenarioModeExcel; }

#define EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x212AEC0)
#define EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_ISEXPOSEDTIME_OFFSET UNITYSDK_OFFSET(0x212AF40)
#define EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x212B040)
#define EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x212B0F0)
#define EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x212B170)
#define EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_TRYADD_OFFSET UNITYSDK_OFFSET(0x212B250)
#define EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x212B1E0)
#define EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x212B2D0)
#define EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x212B360)

	inline static constexpr unsigned int ExposedTimeFilteredScenarioModeDictionary_TypeDefinitionIndex = 3924;

	class ExposedTimeFilteredScenarioModeDictionary : public Il2CppObject
	{
	public:
		Il2CppObject* dictionary; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsExposedTime(::MX::Data::Excel::ScenarioModeExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_ISEXPOSEDTIME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Values()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(::System::Int64 arg, ::MX::Data::Excel::ScenarioModeExcel&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ScenarioModeExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_TRYGETVALUE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean TryAdd(::System::Int64 arg, ::MX::Data::Excel::ScenarioModeExcel* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_TRYADD_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_GETENUMERATOR_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioModeExcel* get_Item(::System::Int64 arg)
		{
			return ((::MX::Data::Excel::ScenarioModeExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPOSEDTIMEFILTEREDSCENARIOMODEDICTIONARY_CLEAR_OFFSET))(nullptr);
		}

	};

