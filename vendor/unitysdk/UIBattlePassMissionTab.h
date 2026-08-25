#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace FlatData { class MissionCategory; }
class RedDotChangedMessage;

#define UIBATTLEPASSMISSIONTAB_SET_CURRENTCATEGORY_OFFSET UNITYSDK_OFFSET(0x2248E00)
#define UIBATTLEPASSMISSIONTAB_ADD_TABSWITCHED_OFFSET UNITYSDK_OFFSET(0x2247990)
#define UIBATTLEPASSMISSIONTAB_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2248E10)
#define UIBATTLEPASSMISSIONTAB_HANDLEREDDOTCHANGEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x2248F50)
#define UIBATTLEPASSMISSIONTAB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2247A30)
#define UIBATTLEPASSMISSIONTAB_REMOVE_TABSWITCHED_OFFSET UNITYSDK_OFFSET(0x22490C0)
#define UIBATTLEPASSMISSIONTAB_ONCLICKTABBUTTON_OFFSET UNITYSDK_OFFSET(0x2249160)
#define UIBATTLEPASSMISSIONTAB_REFRESHREDDOT_OFFSET UNITYSDK_OFFSET(0x2248FA0)
#define UIBATTLEPASSMISSIONTAB_SWITCHTAB_OFFSET UNITYSDK_OFFSET(0x2249000)
#define UIBATTLEPASSMISSIONTAB_.CTOR_OFFSET UNITYSDK_OFFSET(0x22492F0)
#define UIBATTLEPASSMISSIONTAB_GET_CURRENTCATEGORY_OFFSET UNITYSDK_OFFSET(0x2249310)
#define UIBATTLEPASSMISSIONTAB_AWAKE_OFFSET UNITYSDK_OFFSET(0x2249320)
#define UIBATTLEPASSMISSIONTAB_INITIALIZETABMAPPING_OFFSET UNITYSDK_OFFSET(0x22495C0)

	inline static constexpr unsigned int UIBattlePassMissionTab_TypeDefinitionIndex = 4508;

	class UIBattlePassMissionTab : public ::TriInspector::IndentAttribute
	{
	public:
		::UnityEngine::GameObject* tabGroupMultiObj; // 0x18
		::Il2CppArray<::System::Object*>* tabGroupMultiElements; // 0x20
		::System::Int64 battlepassId; // 0x28
		::FlatData::MissionCategory* _CurrentCategory_k__BackingField; // 0x30
		Il2CppObject* TabSwitched; // 0x38

		::System::Void set_CurrentCategory(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTAB_SET_CURRENTCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void add_TabSwitched(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTAB_ADD_TABSWITCHED_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTAB_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean HandleRedDotChangedMessage(RedDotChangedMessage* arg)
		{
			return ((::System::Boolean(*)(RedDotChangedMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTAB_HANDLEREDDOTCHANGEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTAB_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_TabSwitched(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTAB_REMOVE_TABSWITCHED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickTabButton(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTAB_ONCLICKTABBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTAB_REFRESHREDDOT_OFFSET))(nullptr);
		}

		::System::Void SwitchTab(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTAB_SWITCHTAB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTAB_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::MissionCategory* get_CurrentCategory()
		{
			return ((::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTAB_GET_CURRENTCATEGORY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTAB_AWAKE_OFFSET))(nullptr);
		}

		::System::Void InitializeTabMapping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONTAB_INITIALIZETABMAPPING_OFFSET))(nullptr);
		}

	};

