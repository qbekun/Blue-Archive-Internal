#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }

#define MX_SAVEDATA_DISPLAYEDSCENARIOMODESPOILERPOPUP_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFFD90)
#define MX_SAVEDATA_DISPLAYEDSCENARIOMODESPOILERPOPUP_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFFF70)
#define MX_SAVEDATA_DISPLAYEDSCENARIOMODESPOILERPOPUP_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D00030)
#define MX_SAVEDATA_DISPLAYEDSCENARIOMODESPOILERPOPUP_ADD_OFFSET UNITYSDK_OFFSET(0x1D00040)
#define MX_SAVEDATA_DISPLAYEDSCENARIOMODESPOILERPOPUP_ADD_OFFSET UNITYSDK_OFFSET(0x1D00230)
#define MX_SAVEDATA_DISPLAYEDSCENARIOMODESPOILERPOPUP_ANY_OFFSET UNITYSDK_OFFSET(0x1D00150)
#define MX_SAVEDATA_DISPLAYEDSCENARIOMODESPOILERPOPUP_ANY_OFFSET UNITYSDK_OFFSET(0x1D00470)
#define MX_SAVEDATA_DISPLAYEDSCENARIOMODESPOILERPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFEA0)

namespace MX::SaveData
{
	inline static constexpr unsigned int DisplayedScenarioModeSpoilerPopup_TypeDefinitionIndex = 19967;

	class DisplayedScenarioModeSpoilerPopup : public Il2CppObject
	{
	public:
		Il2CppObject* DisplayedScenarioModeSpoilerPopupInfos; // 0x10
		Il2CppObject* SeriesDisplayedScenarioModeSpoilerPopupInfos; // 0x18

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDSCENARIOMODESPOILERPOPUP_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDSCENARIOMODESPOILERPOPUP_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDSCENARIOMODESPOILERPOPUP_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void Add(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDSCENARIOMODESPOILERPOPUP_ADD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Add(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDSCENARIOMODESPOILERPOPUP_ADD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Any(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDSCENARIOMODESPOILERPOPUP_ANY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Any(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDSCENARIOMODESPOILERPOPUP_ANY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DISPLAYEDSCENARIOMODESPOILERPOPUP_.CTOR_OFFSET))(nullptr);
		}

	};
}

