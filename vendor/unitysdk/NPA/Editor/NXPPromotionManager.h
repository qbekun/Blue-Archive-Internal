#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXPPromotionBanner; }
namespace NPA::Editor { class NXPPromotionManager; }
namespace NPA::Editor { class NPPromotionPrefCtl; }
namespace NPA::Editor { class NXPEventBuilderPrefCtl; }
namespace NPA::Promotion { class NXPEventBuilderInfo; }
namespace NPA::Promotion { class NXPToyBannerPromotion; }
namespace NPA::Promotion { class NXPToyQRCodeInfo; }
namespace NPA::Promotion { class NXPToyCustomQRCodeInfo; }

#define NPA_EDITOR_NXPPROMOTIONMANAGER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x9D88D20)
#define NPA_EDITOR_NXPPROMOTIONMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D88F40)
#define NPA_EDITOR_NXPPROMOTIONMANAGER_GETPROMOTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x9D89030)
#define NPA_EDITOR_NXPPROMOTIONMANAGER_SHOWPROMOTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x9D891A0)
#define NPA_EDITOR_NXPPROMOTIONMANAGER_CLOSEPROMOTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x9D896B0)
#define NPA_EDITOR_NXPPROMOTIONMANAGER_GETPLCCINFO_OFFSET UNITYSDK_OFFSET(0x9D896D0)
#define NPA_EDITOR_NXPPROMOTIONMANAGER_SHOWPLCC_OFFSET UNITYSDK_OFFSET(0x9D89760)
#define NPA_EDITOR_NXPPROMOTIONMANAGER_SHOWEVENTBUILDER_OFFSET UNITYSDK_OFFSET(0x9D897F0)
#define NPA_EDITOR_NXPPROMOTIONMANAGER_CHECKBANNERSTATUS_OFFSET UNITYSDK_OFFSET(0x9D89F30)
#define NPA_EDITOR_NXPPROMOTIONMANAGER_REQUESTCONTENT_OFFSET UNITYSDK_OFFSET(0x9D8A380)
#define NPA_EDITOR_NXPPROMOTIONMANAGER_SHOWCONTENT_OFFSET UNITYSDK_OFFSET(0x9D89350)
#define NPA_EDITOR_NXPPROMOTIONMANAGER_COMPAREDATETIME_OFFSET UNITYSDK_OFFSET(0x9D8A2F0)
#define NPA_EDITOR_NXPPROMOTIONMANAGER_GETEVENTBUILDERURL_OFFSET UNITYSDK_OFFSET(0x9D89DF0)
#define NPA_EDITOR_NXPPROMOTIONMANAGER_CHECKEVENTBUILDERDONOTSHOWTODAY_OFFSET UNITYSDK_OFFSET(0x9D89CD0)
#define NPA_EDITOR_NXPPROMOTIONMANAGER_SHOWQRCODE_OFFSET UNITYSDK_OFFSET(0x9D8A540)
#define NPA_EDITOR_NXPPROMOTIONMANAGER_SHOWCUSTOMQRCODE_OFFSET UNITYSDK_OFFSET(0x9D8A790)
#define NPA_EDITOR_NXPPROMOTIONMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D8A8A0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPPromotionManager_TypeDefinitionIndex = 26292;

	class NXPPromotionManager : public Il2CppObject
	{
	public:
		Il2CppObject* cachedBanners; // 0x10
		::NPA::Editor::NXPPromotionBanner* currentPromotionBanner; // 0x18
		::NPA::Editor::NXPPromotionManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::NPA::Editor::NPPromotionPrefCtl* _promotionPrefCtl; // 0x20
		::NPA::Editor::NXPEventBuilderPrefCtl* _eventBuilderPrefCtl; // 0x28

		::NPA::Editor::NXPPromotionManager* GetInstance()
		{
			return (return (::NPA::Editor::NXPPromotionManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONMANAGER_GETINSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void GetPromotionContent(::System::String* str, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONMANAGER_GETPROMOTIONCONTENT_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ShowPromotionContent(::System::String* str, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONMANAGER_SHOWPROMOTIONCONTENT_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void ClosePromotionContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONMANAGER_CLOSEPROMOTIONCONTENT_OFFSET))(nullptr);
		}

		::System::Void GetPLCCInfo(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONMANAGER_GETPLCCINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowPLCC(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONMANAGER_SHOWPLCC_OFFSET))(str, arg, nullptr);
		}

		::System::Void ShowEventBuilder(::NPA::Promotion::NXPEventBuilderInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPEventBuilderInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONMANAGER_SHOWEVENTBUILDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CheckBannerStatus(::NPA::Promotion::NXPToyBannerPromotion* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Promotion::NXPToyBannerPromotion*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONMANAGER_CHECKBANNERSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void RequestContent(Il2CppObject* arg, ::System::Action* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONMANAGER_REQUESTCONTENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowContent(Il2CppObject* arg, ::System::String* str, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONMANAGER_SHOWCONTENT_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Int32 CompareDateTime(::System::DateTime* arg, ::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONMANAGER_COMPAREDATETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetEventBuilderUrl(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONMANAGER_GETEVENTBUILDERURL_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean CheckEventBuilderDoNotShowToday(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONMANAGER_CHECKEVENTBUILDERDONOTSHOWTODAY_OFFSET))(str, nullptr);
		}

		::System::Void ShowQRCode(::NPA::Promotion::NXPToyQRCodeInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyQRCodeInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONMANAGER_SHOWQRCODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowCustomQRCode(::NPA::Promotion::NXPToyCustomQRCodeInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyCustomQRCodeInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONMANAGER_SHOWCUSTOMQRCODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

