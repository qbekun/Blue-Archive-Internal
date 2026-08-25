#pragma once
#include "../../unitysdk.h"

#define MX_DATA_SAMPLEDATA_COMPARETOOLDTABLE_OFFSET UNITYSDK_OFFSET(0x197A6D0)
#define MX_DATA_SAMPLEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x197A6E0)
#define MX_DATA_SAMPLEDATA_PREPROCESSCLIENT_OFFSET UNITYSDK_OFFSET(0x197A6F0)
#define MX_DATA_SAMPLEDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x197A700)
#define MX_DATA_SAMPLEDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x197A710)
#define MX_DATA_SAMPLEDATA_GETIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x197A720)
#define MX_DATA_SAMPLEDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x197A760)

namespace MX::Data
{
	inline static constexpr unsigned int SampleData_TypeDefinitionIndex = 16491;

	class SampleData : public Il2CppObject
	{
	public:
		::System::Void CompareToOldTable(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SAMPLEDATA_COMPARETOOLDTABLE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SAMPLEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PreprocessClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SAMPLEDATA_PREPROCESSCLIENT_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SAMPLEDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SAMPLEDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::String* GetImagePath(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SAMPLEDATA_GETIMAGEPATH_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SAMPLEDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

	};
}

