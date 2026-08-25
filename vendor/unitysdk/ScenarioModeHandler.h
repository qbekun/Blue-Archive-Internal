#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class ScenarioModeExcel; }

#define SCENARIOMODEHANDLER_GETCHAPTERNAME_OFFSET UNITYSDK_OFFSET(0x2818BE0)
#define SCENARIOMODEHANDLER_ONOK_OFFSET UNITYSDK_OFFSET(0x2818C80)
#define SCENARIOMODEHANDLER_GETEPISODENAME_OFFSET UNITYSDK_OFFSET(0x2818CE0)
#define SCENARIOMODEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2818DA0)
#define SCENARIOMODEHANDLER_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x2818E00)

	inline static constexpr unsigned int ScenarioModeHandler_TypeDefinitionIndex = 7814;

	class ScenarioModeHandler : public Il2CppObject
	{
	public:
		::MX::Data::Excel::ScenarioModeExcel* excel; // 0x10
		Il2CppObject* okAction; // 0x20
		::System::Action* cancelAction; // 0x28

		::System::String* GetChapterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODEHANDLER_GETCHAPTERNAME_OFFSET))(nullptr);
		}

		::System::Void OnOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODEHANDLER_ONOK_OFFSET))(nullptr);
		}

		::System::String* GetEpisodeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODEHANDLER_GETEPISODENAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ScenarioModeExcel* arg, Il2CppObject* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::ScenarioModeExcel*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODEHANDLER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODEHANDLER_ONCANCEL_OFFSET))(nullptr);
		}

	};

