#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NPPromotionPrefCtl; }
namespace NPA::Editor { class NXPToyPrefs; }

#define NPA_EDITOR_NPPROMOTIONPREFCTL_GET_COMMONPREFCTL_OFFSET UNITYSDK_OFFSET(0x9D88170)
#define NPA_EDITOR_NPPROMOTIONPREFCTL_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x9D88300)
#define NPA_EDITOR_NPPROMOTIONPREFCTL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D88520)
#define NPA_EDITOR_NPPROMOTIONPREFCTL_SETBANNERTODAYDISABLEDDATE_OFFSET UNITYSDK_OFFSET(0x9D88690)
#define NPA_EDITOR_NPPROMOTIONPREFCTL_GETBANNERTODAYDISABLEDDATE_OFFSET UNITYSDK_OFFSET(0x9D88710)
#define NPA_EDITOR_NPPROMOTIONPREFCTL_SETBANNER7DAYSDISABLEDDATE_OFFSET UNITYSDK_OFFSET(0x9D887A0)
#define NPA_EDITOR_NPPROMOTIONPREFCTL_GETBANNER7DAYSDISABLEDDATE_OFFSET UNITYSDK_OFFSET(0x9D88820)
#define NPA_EDITOR_NPPROMOTIONPREFCTL_SETBANNERTOTALDISPLAYEDCOUNT_OFFSET UNITYSDK_OFFSET(0x9D888B0)
#define NPA_EDITOR_NPPROMOTIONPREFCTL_INCREMENTBANNERTOTALDISPLAYEDCOUNT_OFFSET UNITYSDK_OFFSET(0x9D88930)
#define NPA_EDITOR_NPPROMOTIONPREFCTL_GETBANNERTOTALDISPLAYEDCOUNT_OFFSET UNITYSDK_OFFSET(0x9D88A10)
#define NPA_EDITOR_NPPROMOTIONPREFCTL_SETBANNERFREQUENCYDISPLAYEDDATE_OFFSET UNITYSDK_OFFSET(0x9D88A90)
#define NPA_EDITOR_NPPROMOTIONPREFCTL_GETBANNERFREQUENCYDISPLAYEDDATE_OFFSET UNITYSDK_OFFSET(0x9D88B10)
#define NPA_EDITOR_NPPROMOTIONPREFCTL_SETCONDITIONALBANNERDONOTSHOWANYMORE_OFFSET UNITYSDK_OFFSET(0x9D88BA0)
#define NPA_EDITOR_NPPROMOTIONPREFCTL_ISCONDITIONALBANNERDONOTSHOWANYMORE_OFFSET UNITYSDK_OFFSET(0x9D88C20)
#define NPA_EDITOR_NPPROMOTIONPREFCTL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D88CA0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NPPromotionPrefCtl_TypeDefinitionIndex = 26285;

	class NPPromotionPrefCtl : public Il2CppObject
	{
	public:
		::NPA::Editor::NPPromotionPrefCtl* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		Il2CppObject* prefForNPSN; // 0x10

		::NPA::Editor::NXPToyPrefs* get_commonPrefCtl()
		{
			return (return (::NPA::Editor::NXPToyPrefs*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPPROMOTIONPREFCTL_GET_COMMONPREFCTL_OFFSET))(nullptr);
		}

		::NPA::Editor::NPPromotionPrefCtl* getInstance()
		{
			return (return (::NPA::Editor::NPPromotionPrefCtl*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPPROMOTIONPREFCTL_GETINSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPPROMOTIONPREFCTL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetBannerTodayDisabledDate(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPPROMOTIONPREFCTL_SETBANNERTODAYDISABLEDDATE_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetBannerTodayDisabledDate(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPPROMOTIONPREFCTL_GETBANNERTODAYDISABLEDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetBanner7DaysDisabledDate(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPPROMOTIONPREFCTL_SETBANNER7DAYSDISABLEDDATE_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetBanner7DaysDisabledDate(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPPROMOTIONPREFCTL_GETBANNER7DAYSDISABLEDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetBannerTotalDisplayedCount(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPPROMOTIONPREFCTL_SETBANNERTOTALDISPLAYEDCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void IncrementBannerTotalDisplayedCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPPROMOTIONPREFCTL_INCREMENTBANNERTOTALDISPLAYEDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetBannerTotalDisplayedCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPPROMOTIONPREFCTL_GETBANNERTOTALDISPLAYEDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void SetBannerFrequencyDisplayedDate(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPPROMOTIONPREFCTL_SETBANNERFREQUENCYDISPLAYEDDATE_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetBannerFrequencyDisplayedDate(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPPROMOTIONPREFCTL_GETBANNERFREQUENCYDISPLAYEDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetConditionalBannerDoNotShowAnymore(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPPROMOTIONPREFCTL_SETCONDITIONALBANNERDONOTSHOWANYMORE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsConditionalBannerDoNotShowAnymore(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPPROMOTIONPREFCTL_ISCONDITIONALBANNERDONOTSHOWANYMORE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPPROMOTIONPREFCTL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

