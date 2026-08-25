#pragma once
#include "unitysdk.h"

namespace MX::Data { class ContentsShortcutInfo; }
namespace FlatData { class ContentType; }
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }

#define CONTENTSSHORTCUTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D0AA20)
#define CONTENTSSHORTCUTOBJECT_OPENPOPUPCHECK_OFFSET UNITYSDK_OFFSET(0x1D0AA30)
#define CONTENTSSHORTCUTOBJECT_OPENSHORTCUTPOPUP_OFFSET UNITYSDK_OFFSET(0x1D0AD90)
#define CONTENTSSHORTCUTOBJECT_SHOWMOVETOSCENARIOSHORTCUTPOPUP_OFFSET UNITYSDK_OFFSET(0x1D0B1D0)
#define CONTENTSSHORTCUTOBJECT_OPENCONTENTSHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x1D0B7B0)
#define CONTENTSSHORTCUTOBJECT_SHOWMOVETOEVENTSHORTCUTPOPUP_OFFSET UNITYSDK_OFFSET(0x1D0B840)

	inline static constexpr unsigned int ContentsShortcutObject_TypeDefinitionIndex = 1591;

	class ContentsShortcutObject : public Il2CppObject
	{
	public:
		Il2CppObject* shortcutList; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSSHORTCUTOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OpenPopupCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSSHORTCUTOBJECT_OPENPOPUPCHECK_OFFSET))(nullptr);
		}

		::System::Void OpenShortcutPopup(::MX::Data::ContentsShortcutInfo* arg)
		{
			((::System::Void(*)(::MX::Data::ContentsShortcutInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSSHORTCUTOBJECT_OPENSHORTCUTPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void ShowMoveToScenarioShortcutPopup(::FlatData::ContentType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSSHORTCUTOBJECT_SHOWMOVETOSCENARIOSHORTCUTPOPUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* OpenContentShortcutUI(::MX::Data::ContentsShortcutInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::ContentsShortcutInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSSHORTCUTOBJECT_OPENCONTENTSHORTCUTUI_OFFSET))(arg, nullptr);
		}

		::System::Void ShowMovetoEventShortcutPopup(::FlatData::ContentType* arg, ::FlatData::ScenarioModeTypes* arg2, ::FlatData::ScenarioModeSubTypes* arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSSHORTCUTOBJECT_SHOWMOVETOEVENTSHORTCUTPOPUP_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};

