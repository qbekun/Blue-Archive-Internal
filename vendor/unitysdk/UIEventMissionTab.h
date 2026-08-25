#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
namespace FlatData { class MissionCategory; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIEVENTMISSIONTAB_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x24B7FD0)
#define UIEVENTMISSIONTAB_.CTOR_OFFSET UNITYSDK_OFFSET(0x24B8150)
#define UIEVENTMISSIONTAB_ONCLICKTABBUTTON_OFFSET UNITYSDK_OFFSET(0x24B8170)
#define UIEVENTMISSIONTAB_REFRESHREDDOT_OFFSET UNITYSDK_OFFSET(0x24B8240)
#define UIEVENTMISSIONTAB_GET_CURRENTCATEGORY_OFFSET UNITYSDK_OFFSET(0x24B8450)
#define UIEVENTMISSIONTAB_ADD_TABSWITCHED_OFFSET UNITYSDK_OFFSET(0x24B72E0)
#define UIEVENTMISSIONTAB_AWAKE_OFFSET UNITYSDK_OFFSET(0x24B8460)
#define UIEVENTMISSIONTAB_HANDLEREDDOTCHANGEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x24B8720)
#define UIEVENTMISSIONTAB_REMOVE_TABSWITCHED_OFFSET UNITYSDK_OFFSET(0x24B8790)
#define UIEVENTMISSIONTAB_SWITCHTAB_OFFSET UNITYSDK_OFFSET(0x24B8180)
#define UIEVENTMISSIONTAB_INITIALIZETABMAPPING_OFFSET UNITYSDK_OFFSET(0x24B8880)
#define UIEVENTMISSIONTAB_INITAILIZE_OFFSET UNITYSDK_OFFSET(0x24B6440)
#define UIEVENTMISSIONTAB_SET_CURRENTCATEGORY_OFFSET UNITYSDK_OFFSET(0x24B8940)

	inline static constexpr unsigned int UIEventMissionTab_TypeDefinitionIndex = 5869;

	class UIEventMissionTab : public ::TriInspector::IndentAttribute
	{
	public:
		::UnityEngine::GameObject* tabGroupSingleObj; // 0x18
		UILabel* tabGroupSingleTitle; // 0x20
		::UnityEngine::GameObject* tabGroupMultiObj; // 0x28
		::Il2CppArray<::System::Object*>* tabGroupMultiElements; // 0x30
		::System::Int64 eventContentId; // 0x38
		::FlatData::MissionCategory* _CurrentCategory_k__BackingField; // 0x40
		Il2CppObject* TabSwitched; // 0x48

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTAB_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTAB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickTabButton(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTAB_ONCLICKTABBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTAB_REFRESHREDDOT_OFFSET))(nullptr);
		}

		::FlatData::MissionCategory* get_CurrentCategory()
		{
			return ((::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTAB_GET_CURRENTCATEGORY_OFFSET))(nullptr);
		}

		::System::Void add_TabSwitched(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTAB_ADD_TABSWITCHED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTAB_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleRedDotChangedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTAB_HANDLEREDDOTCHANGEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_TabSwitched(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTAB_REMOVE_TABSWITCHED_OFFSET))(arg, nullptr);
		}

		::System::Void SwitchTab(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTAB_SWITCHTAB_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeTabMapping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTAB_INITIALIZETABMAPPING_OFFSET))(nullptr);
		}

		::System::Void Initailize(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTAB_INITAILIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_CurrentCategory(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSIONTAB_SET_CURRENTCATEGORY_OFFSET))(arg, nullptr);
		}

	};

