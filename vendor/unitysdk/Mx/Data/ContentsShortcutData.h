#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }

#define MX_DATA_CONTENTSSHORTCUTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18B0770)
#define MX_DATA_CONTENTSSHORTCUTDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x18B0780)
#define MX_DATA_CONTENTSSHORTCUTDATA_GETCONTENTSHORTCUTLIST_OFFSET UNITYSDK_OFFSET(0x18B07C0)
#define MX_DATA_CONTENTSSHORTCUTDATA_GETSCENARIOMODESHORTCUTLIST_OFFSET UNITYSDK_OFFSET(0x18B0930)

namespace MX::Data
{
	inline static constexpr unsigned int ContentsShortcutData_TypeDefinitionIndex = 16038;

	class ContentsShortcutData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetContentShortcutList(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTDATA_GETCONTENTSHORTCUTLIST_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetScenarioModeShortcutList(::FlatData::ContentType* arg, ::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTDATA_GETSCENARIOMODESHORTCUTLIST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

