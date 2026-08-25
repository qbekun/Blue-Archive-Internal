#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SPINELIPSYNCEXCELREPOSITORY_SELECT_VOICEID_OFFSET UNITYSDK_OFFSET(0x1C91350)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCELREPOSITORY_SELECTFIRST_VOICEID_OFFSET UNITYSDK_OFFSET(0x1C91650)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCELREPOSITORY_SELECT_VOICEIDS_OFFSET UNITYSDK_OFFSET(0x1C91970)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C91D70)
#define MX_DATA_EXCEL_SPINELIPSYNCEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C91DB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SpineLipsyncExcelRepository_TypeDefinitionIndex = 19522;

	class SpineLipsyncExcelRepository : public <>c__DisplayClass19_0
	{
	public:
		Il2CppObject* Select_VoiceId(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCELREPOSITORY_SELECT_VOICEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_VoiceId(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCELREPOSITORY_SELECTFIRST_VOICEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_VoiceIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCELREPOSITORY_SELECT_VOICEIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

