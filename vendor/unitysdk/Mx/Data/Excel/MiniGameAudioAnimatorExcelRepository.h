#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCELREPOSITORY_SELECTFIRST_CONTROLLERNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1B8D0B0)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCELREPOSITORY_SELECT_CONTROLLERNAMEHASHS_OFFSET UNITYSDK_OFFSET(0x1B8D3D0)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCELREPOSITORY_SELECT_CONTROLLERNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1B8D7D0)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B8DAD0)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B8DB10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameAudioAnimatorExcelRepository_TypeDefinitionIndex = 18443;

	class MiniGameAudioAnimatorExcelRepository : public ChangeBGM
	{
	public:
		Il2CppObject* SelectFirst_ControllerNameHash(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCELREPOSITORY_SELECTFIRST_CONTROLLERNAMEHASH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ControllerNameHashs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCELREPOSITORY_SELECT_CONTROLLERNAMEHASHS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ControllerNameHash(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCELREPOSITORY_SELECT_CONTROLLERNAMEHASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

