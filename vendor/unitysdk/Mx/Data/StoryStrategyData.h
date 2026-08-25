#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class StoryStrategyStageInfo&; }

#define MX_DATA_STORYSTRATEGYDATA_SET_RAWDATAPATH_OFFSET UNITYSDK_OFFSET(0x19606A0)
#define MX_DATA_STORYSTRATEGYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19606B0)
#define MX_DATA_STORYSTRATEGYDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1960730)
#define MX_DATA_STORYSTRATEGYDATA_GET_RAWDATAPATH_OFFSET UNITYSDK_OFFSET(0x1960770)
#define MX_DATA_STORYSTRATEGYDATA_TRYGETSTORYSTRATEGYSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x1960780)
#define MX_DATA_STORYSTRATEGYDATA_GETALLSTORYSTRATEGYSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x19607E0)
#define MX_DATA_STORYSTRATEGYDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x1960840)

namespace MX::Data
{
	inline static constexpr unsigned int StoryStrategyData_TypeDefinitionIndex = 16420;

	class StoryStrategyData : public Il2CppObject
	{
	public:
		::System::String* _RawDataPath_k__BackingField; // 0x28
		Il2CppObject* storyStrategyStageInfoDict; // 0x30

		::System::Void set_RawDataPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYDATA_SET_RAWDATAPATH_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::String* get_RawDataPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYDATA_GET_RAWDATAPATH_OFFSET))(nullptr);
		}

		::System::Boolean TryGetStoryStrategyStageInfo(::System::Int64 arg, ::MX::Data::StoryStrategyStageInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::StoryStrategyStageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYDATA_TRYGETSTORYSTRATEGYSTAGEINFO_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAllStoryStrategyStageInfo()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYDATA_GETALLSTORYSTRATEGYSTAGEINFO_OFFSET))(nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

	};
}

