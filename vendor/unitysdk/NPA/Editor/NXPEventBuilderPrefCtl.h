#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXPEventBuilderPrefCtl; }
namespace NPA::Editor { class NXPToyPrefs; }

#define NPA_EDITOR_NXPEVENTBUILDERPREFCTL_GET_EVENTBUILDERPREFCTL_OFFSET UNITYSDK_OFFSET(0x9D87A40)
#define NPA_EDITOR_NXPEVENTBUILDERPREFCTL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9D87BD0)
#define NPA_EDITOR_NXPEVENTBUILDERPREFCTL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D87DF0)
#define NPA_EDITOR_NXPEVENTBUILDERPREFCTL_SETEVENTBUILDERTODAYDISABLEDDATE_OFFSET UNITYSDK_OFFSET(0x9D87F60)
#define NPA_EDITOR_NXPEVENTBUILDERPREFCTL_GETEVENTBUILDERTODAYDISABLEDDATE_OFFSET UNITYSDK_OFFSET(0x9D87FD0)
#define NPA_EDITOR_NXPEVENTBUILDERPREFCTL_REMOVEEVENTBUILDERTODAYDISABLEDDATE_OFFSET UNITYSDK_OFFSET(0x9D88050)
#define NPA_EDITOR_NXPEVENTBUILDERPREFCTL_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x9D880C0)
#define NPA_EDITOR_NXPEVENTBUILDERPREFCTL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D880F0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPEventBuilderPrefCtl_TypeDefinitionIndex = 26284;

	class NXPEventBuilderPrefCtl : public Il2CppObject
	{
	public:
		::NPA::Editor::NXPEventBuilderPrefCtl* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		Il2CppObject* prefForNPSN; // 0x10

		::NPA::Editor::NXPToyPrefs* get_EventBuilderPrefCtl()
		{
			return (return (::NPA::Editor::NXPToyPrefs*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPEVENTBUILDERPREFCTL_GET_EVENTBUILDERPREFCTL_OFFSET))(nullptr);
		}

		::NPA::Editor::NXPEventBuilderPrefCtl* get_Instance()
		{
			return (return (::NPA::Editor::NXPEventBuilderPrefCtl*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPEVENTBUILDERPREFCTL_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPEVENTBUILDERPREFCTL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetEventBuilderTodayDisabledDate(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPEVENTBUILDERPREFCTL_SETEVENTBUILDERTODAYDISABLEDDATE_OFFSET))(str, str, nullptr);
		}

		::System::String* GetEventBuilderTodayDisabledDate(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPEVENTBUILDERPREFCTL_GETEVENTBUILDERTODAYDISABLEDDATE_OFFSET))(str, nullptr);
		}

		::System::Void RemoveEventBuilderTodayDisabledDate(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPEVENTBUILDERPREFCTL_REMOVEEVENTBUILDERTODAYDISABLEDDATE_OFFSET))(str, nullptr);
		}

		::System::Void RemoveAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPEVENTBUILDERPREFCTL_REMOVEALL_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPEVENTBUILDERPREFCTL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

