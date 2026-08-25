#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_AUDIOANIMATOREXCELREPOSITORY_SELECTFIRST_CONTROLLERNAMEHASH_OFFSET UNITYSDK_OFFSET(0x19E0700)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCELREPOSITORY_SELECT_CONTROLLERNAMEHASH_OFFSET UNITYSDK_OFFSET(0x19E0A20)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19E0D20)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCELREPOSITORY_SELECT_CONTROLLERNAMEHASHS_OFFSET UNITYSDK_OFFSET(0x19E0D60)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19E1160)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AudioAnimatorExcelRepository_TypeDefinitionIndex = 16726;

	class AudioAnimatorExcelRepository : public ::FlatData::DreamMakerVoiceCondition
	{
	public:
		Il2CppObject* SelectFirst_ControllerNameHash(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCELREPOSITORY_SELECTFIRST_CONTROLLERNAMEHASH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ControllerNameHash(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCELREPOSITORY_SELECT_CONTROLLERNAMEHASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_ControllerNameHashs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCELREPOSITORY_SELECT_CONTROLLERNAMEHASHS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

