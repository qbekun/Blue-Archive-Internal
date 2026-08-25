#pragma once
#include "unitysdk.h"

class UIWidget;
class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
class GuideMissionArchiveItem;
class UIPopup_EventArchiveNotice;
namespace UnityEngine { class Texture; }

#define ARCHIVEDGUIDEMISSIONWIDGET_GET_MYITEM_OFFSET UNITYSDK_OFFSET(0x246BC70)
#define ARCHIVEDGUIDEMISSIONWIDGET_START_OFFSET UNITYSDK_OFFSET(0x246BC80)
#define ARCHIVEDGUIDEMISSIONWIDGET_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0x246BDA0)
#define ARCHIVEDGUIDEMISSIONWIDGET__ONCLICKENTER_B__14_0_OFFSET UNITYSDK_OFFSET(0x246BFF0)
#define ARCHIVEDGUIDEMISSIONWIDGET__SETDATA_B__12_0_OFFSET UNITYSDK_OFFSET(0x246C1C0)
#define ARCHIVEDGUIDEMISSIONWIDGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x246C220)
#define ARCHIVEDGUIDEMISSIONWIDGET_CHECKLOCKED_OFFSET UNITYSDK_OFFSET(0x246C230)
#define ARCHIVEDGUIDEMISSIONWIDGET_SETDATA_OFFSET UNITYSDK_OFFSET(0x246C4C0)
#define ARCHIVEDGUIDEMISSIONWIDGET_SET_MYITEM_OFFSET UNITYSDK_OFFSET(0x246C810)

	inline static constexpr unsigned int ArchivedGuideMissionWidget_TypeDefinitionIndex = 5631;

	class ArchivedGuideMissionWidget : public Il2CppObject
	{
	public:
		UIWidget* mainWidget; // 0x18
		UIWidget* lockCoverWidget; // 0x20
		UIWidget* clearWidget; // 0x28
		UIWidget* dotWidget; // 0x30
		MXButton* enterButton; // 0x38
		::UnityEngine::GameObject* lockObject; // 0x40
		UILabel* lockReasonLabel; // 0x48
		GuideMissionArchiveItem* _myItem_k__BackingField; // 0x50

		GuideMissionArchiveItem* get_myItem()
		{
			return ((GuideMissionArchiveItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARCHIVEDGUIDEMISSIONWIDGET_GET_MYITEM_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARCHIVEDGUIDEMISSIONWIDGET_START_OFFSET))(nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARCHIVEDGUIDEMISSIONWIDGET_ONCLICKENTER_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnter_b__14_0(UIPopup_EventArchiveNotice* arg)
		{
			((::System::Void(*)(UIPopup_EventArchiveNotice*, ::PVOID))((::PBYTE)hIl2Cpp + ARCHIVEDGUIDEMISSIONWIDGET__ONCLICKENTER_B__14_0_OFFSET))(arg, nullptr);
		}

		::System::Void _SetData_b__12_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + ARCHIVEDGUIDEMISSIONWIDGET__SETDATA_B__12_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARCHIVEDGUIDEMISSIONWIDGET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CheckLocked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARCHIVEDGUIDEMISSIONWIDGET_CHECKLOCKED_OFFSET))(nullptr);
		}

		::System::Void SetData(GuideMissionArchiveItem* arg)
		{
			((::System::Void(*)(GuideMissionArchiveItem*, ::PVOID))((::PBYTE)hIl2Cpp + ARCHIVEDGUIDEMISSIONWIDGET_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_myItem(GuideMissionArchiveItem* arg)
		{
			((::System::Void(*)(GuideMissionArchiveItem*, ::PVOID))((::PBYTE)hIl2Cpp + ARCHIVEDGUIDEMISSIONWIDGET_SET_MYITEM_OFFSET))(arg, nullptr);
		}

	};

