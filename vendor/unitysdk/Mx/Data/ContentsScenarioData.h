#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ContentsScenarioExcel&; }

#define MX_DATA_CONTENTSSCENARIODATA_GET_CONTENTSCENARIOGROUPS_OFFSET UNITYSDK_OFFSET(0x18AF8E0)
#define MX_DATA_CONTENTSSCENARIODATA_SET_CONTENTSCENARIOGROUPS_OFFSET UNITYSDK_OFFSET(0x18AF8F0)
#define MX_DATA_CONTENTSSCENARIODATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x18AF900)
#define MX_DATA_CONTENTSSCENARIODATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x18AFDF0)
#define MX_DATA_CONTENTSSCENARIODATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x18AFEA0)
#define MX_DATA_CONTENTSSCENARIODATA_GETCONTENTSCENARIOGROUPS_OFFSET UNITYSDK_OFFSET(0x18AF960)
#define MX_DATA_CONTENTSSCENARIODATA_DISPLAYORDERCOMPARE_OFFSET UNITYSDK_OFFSET(0x18AFED0)
#define MX_DATA_CONTENTSSCENARIODATA_GETLOCALIZEIDBYSCENARIOID_OFFSET UNITYSDK_OFFSET(0x18B0330)
#define MX_DATA_CONTENTSSCENARIODATA_TRYGETBYSCENARIOID_OFFSET UNITYSDK_OFFSET(0x18AFF50)
#define MX_DATA_CONTENTSSCENARIODATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18B06F0)

namespace MX::Data
{
	inline static constexpr unsigned int ContentsScenarioData_TypeDefinitionIndex = 16035;

	class ContentsScenarioData : public Il2CppObject
	{
	public:
		Il2CppObject* _ContentScenarioGroups_k__BackingField; // 0x28

		Il2CppObject* get_ContentScenarioGroups()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSCENARIODATA_GET_CONTENTSCENARIOGROUPS_OFFSET))(nullptr);
		}

		::System::Void set_ContentScenarioGroups(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSCENARIODATA_SET_CONTENTSCENARIOGROUPS_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSCENARIODATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(::System::UInt32 arg, ::MX::Data::Excel::ContentsScenarioExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::MX::Data::Excel::ContentsScenarioExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSCENARIODATA_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, ::MX::Data::Excel::ContentsScenarioExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::Data::Excel::ContentsScenarioExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSCENARIODATA_TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* GetContentScenarioGroups()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSCENARIODATA_GETCONTENTSCENARIOGROUPS_OFFSET))(nullptr);
		}

		::System::Int32 DisplayOrderCompare(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSCENARIODATA_DISPLAYORDERCOMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 GetLocalizeIdByScenarioId(::System::Int64 arg)
		{
			return (return (::System::UInt32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSCENARIODATA_GETLOCALIZEIDBYSCENARIOID_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetByScenarioId(::System::Int64 arg, ::MX::Data::Excel::ContentsScenarioExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ContentsScenarioExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSCENARIODATA_TRYGETBYSCENARIOID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSCENARIODATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

