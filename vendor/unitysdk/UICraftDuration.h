#pragma once
#include "unitysdk.h"

class UINodeEditSection;
class UISubNodeSelectSection;
class UINodeMap;
namespace UnityEngine::Playables { class PlayableDirector; }
class UILabel;
class UICraftNodeIndex;
class UIQuickCraftSelectedNodeList;
namespace UnityEngine { class GameObject; }
namespace MX::GameLogic::DBModel { class CraftInfoDB; }
namespace MX::GameLogic::DBModel { class CraftPresetSlotDB; }
namespace MX::GameLogic::DBModel { class CraftPresetNodeDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UICRAFTDURATION_GET_ISSKIPANIMAITON_OFFSET UNITYSDK_OFFSET(0x2386580)
#define UICRAFTDURATION_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2386590)
#define UICRAFTDURATION_GET_CRAFTINFODB_OFFSET UNITYSDK_OFFSET(0x2386630)
#define UICRAFTDURATION_SET_CRAFTINFODB_OFFSET UNITYSDK_OFFSET(0x2386640)
#define UICRAFTDURATION_GET_ISSIMULATIONMODE_OFFSET UNITYSDK_OFFSET(0x2386660)
#define UICRAFTDURATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x2386670)
#define UICRAFTDURATION_CO_AUTOSELECTNODECASE1_OFFSET UNITYSDK_OFFSET(0x2386780)
#define UICRAFTDURATION_GET_EDITPRESETNODEDB_OFFSET UNITYSDK_OFFSET(0x2386810)
#define UICRAFTDURATION_CO_AUTOSELECTNODECASE2_OFFSET UNITYSDK_OFFSET(0x2386820)
#define UICRAFTDURATION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x23868B0)
#define UICRAFTDURATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2386A10)
#define UICRAFTDURATION_MAKEDEFAULTPRESET_OFFSET UNITYSDK_OFFSET(0x2386A50)
#define UICRAFTDURATION_GET_ISTIEMOUT_OFFSET UNITYSDK_OFFSET(0x2386B00)
#define UICRAFTDURATION_GET_PRESETSLOTDATADB_OFFSET UNITYSDK_OFFSET(0x2386B10)
#define UICRAFTDURATION_SET_ISSKIPANIMAITON_OFFSET UNITYSDK_OFFSET(0x2386B20)
#define UICRAFTDURATION_APPLYEDITNODETOCRAFTINFO_OFFSET UNITYSDK_OFFSET(0x2386B30)
#define UICRAFTDURATION_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2386C40)
#define UICRAFTDURATION_ONBACK_OFFSET UNITYSDK_OFFSET(0x2387020)
#define UICRAFTDURATION_INITSIMULATIONMODE_OFFSET UNITYSDK_OFFSET(0x2387200)
#define UICRAFTDURATION_CO_CRAFTBEGINDIRECTING_OFFSET UNITYSDK_OFFSET(0x2387420)
#define UICRAFTDURATION_GET_ISEDITMODE_OFFSET UNITYSDK_OFFSET(0x23874B0)
#define UICRAFTDURATION_STARTCRAFTTIMECHECK_OFFSET UNITYSDK_OFFSET(0x2386EC0)
#define UICRAFTDURATION_CO_CRAFTBEGINDIRECTINGSKIPCHECK_OFFSET UNITYSDK_OFFSET(0x2387530)
#define UICRAFTDURATION_ONSTARTCRAFT_OFFSET UNITYSDK_OFFSET(0x23875C0)
#define UICRAFTDURATION_CO_CHECKTIME_OFFSET UNITYSDK_OFFSET(0x23874C0)
#define UICRAFTDURATION_CO_SETDATAINCASEEMPTYDB_OFFSET UNITYSDK_OFFSET(0x2386E50)
#define UICRAFTDURATION_SET_PRESETSLOTDATADB_OFFSET UNITYSDK_OFFSET(0x2387720)
#define UICRAFTDURATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x2387740)
#define UICRAFTDURATION_SET_EDITPRESETNODEDB_OFFSET UNITYSDK_OFFSET(0x2387780)
#define UICRAFTDURATION_CO_SETDATASIMULATIONEDIT_OFFSET UNITYSDK_OFFSET(0x2386FB0)
#define UICRAFTDURATION_SET_CANSKIPDIRECTINGSTEP_OFFSET UNITYSDK_OFFSET(0x23877C0)
#define UICRAFTDURATION_HANDLECRAFTBEGINPROCESSRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x23877D0)
#define UICRAFTDURATION_GET_CANSKIPDIRECTINGSTEP_OFFSET UNITYSDK_OFFSET(0x2387B40)
#define UICRAFTDURATION_CO_SETDATA_OFFSET UNITYSDK_OFFSET(0x2386F40)
#define UICRAFTDURATION_INIT_OFFSET UNITYSDK_OFFSET(0x2387B70)

	inline static constexpr unsigned int UICraftDuration_TypeDefinitionIndex = 5137;

	class UICraftDuration : public Il2CppObject
	{
	public:
		::System::Boolean clearRemainTime; // 0xD8
		::System::Int32 reductionPointIndex; // 0xDC
		::System::Single constantVelocity; // 0xE0
		::System::Single tolerance; // 0xE4
		::System::Int32 minValue; // 0xE8
		::System::Int32 maxValue; // 0xEC
		UINodeEditSection* nodeEditSection; // 0xF0
		UISubNodeSelectSection* subNodeSelectSection; // 0xF8
		UINodeMap* NodeMap; // 0x100
		::UnityEngine::Playables::PlayableDirector* director; // 0x108
		UILabel* remainTimeLabel; // 0x110
		Il2CppObject* DirectingNodeList; // 0x118
		UICraftNodeIndex* ShowAllNodeMap; // 0x120
		UIQuickCraftSelectedNodeList* QuickCraftSelectedNodeList; // 0x128
		::UnityEngine::GameObject* QuickCraftDesc; // 0x130
		::UnityEngine::GameObject* Information; // 0x138
		::UnityEngine::GameObject* Timelabel; // 0x140
		::System::Boolean isPlayAnim; // 0x148
		::System::Boolean isTimeOut; // 0x149
		::System::Int64 slotId; // 0x150
		::System::Boolean isSkipAnimation; // 0x158
		::System::Boolean canSkipDirectingStep; // 0x159
		::MX::GameLogic::DBModel::CraftInfoDB* craftInfoDB; // 0x160
		::MX::GameLogic::DBModel::CraftPresetSlotDB* _PresetSlotDataDB_k__BackingField; // 0x168
		::MX::GameLogic::DBModel::CraftPresetNodeDB* _EditPresetNodeDB_k__BackingField; // 0x170
		::System::Boolean isSimulationMode; // 0x178
		::System::Boolean isEditMode; // 0x179

		::System::Boolean get_IsSkipAnimaiton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_GET_ISSKIPANIMAITON_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_ONCLOSED_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CraftInfoDB* get_CraftInfoDB()
		{
			return ((::MX::GameLogic::DBModel::CraftInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_GET_CRAFTINFODB_OFFSET))(nullptr);
		}

		::System::Void set_CraftInfoDB(::MX::GameLogic::DBModel::CraftInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_SET_CRAFTINFODB_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSimulationMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_GET_ISSIMULATIONMODE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_AutoSelectNodeCase1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_CO_AUTOSELECTNODECASE1_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CraftPresetNodeDB* get_EditPresetNodeDB()
		{
			return ((::MX::GameLogic::DBModel::CraftPresetNodeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_GET_EDITPRESETNODEDB_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_AutoSelectNodeCase2()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_CO_AUTOSELECTNODECASE2_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CraftPresetSlotDB* MakeDefaultPreset(::System::Int32 arg)
		{
			return ((::MX::GameLogic::DBModel::CraftPresetSlotDB*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_MAKEDEFAULTPRESET_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsTiemOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_GET_ISTIEMOUT_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CraftPresetSlotDB* get_PresetSlotDataDB()
		{
			return ((::MX::GameLogic::DBModel::CraftPresetSlotDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_GET_PRESETSLOTDATADB_OFFSET))(nullptr);
		}

		::System::Void set_IsSkipAnimaiton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_SET_ISSKIPANIMAITON_OFFSET))(arg, nullptr);
		}

		::System::Boolean ApplyEditNodeToCraftInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_APPLYEDITNODETOCRAFTINFO_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_ONBACK_OFFSET))(nullptr);
		}

		::System::Void InitSimulationMode(::System::Int32 arg, ::System::Int32 arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_INITSIMULATIONMODE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* co_CraftBeginDirecting()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_CO_CRAFTBEGINDIRECTING_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEditMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_GET_ISEDITMODE_OFFSET))(nullptr);
		}

		::System::Void StartCraftTimeCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_STARTCRAFTTIMECHECK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_CraftBeginDirectingSkipCheck()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_CO_CRAFTBEGINDIRECTINGSKIPCHECK_OFFSET))(nullptr);
		}

		::System::Void OnStartCraft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_ONSTARTCRAFT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_CheckTime()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_CO_CHECKTIME_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_SetDataInCaseEmptyDB()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_CO_SETDATAINCASEEMPTYDB_OFFSET))(nullptr);
		}

		::System::Void set_PresetSlotDataDB(::MX::GameLogic::DBModel::CraftPresetSlotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftPresetSlotDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_SET_PRESETSLOTDATADB_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_UPDATE_OFFSET))(nullptr);
		}

		::System::Void set_EditPresetNodeDB(::MX::GameLogic::DBModel::CraftPresetNodeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftPresetNodeDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_SET_EDITPRESETNODEDB_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_SetDataSimulationEdit()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_CO_SETDATASIMULATIONEDIT_OFFSET))(nullptr);
		}

		::System::Void set_CanSkipDirectingStep(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_SET_CANSKIPDIRECTINGSTEP_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCraftBeginProcessResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_HANDLECRAFTBEGINPROCESSRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanSkipDirectingStep()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_GET_CANSKIPDIRECTINGSTEP_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_SetData()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_CO_SETDATA_OFFSET))(nullptr);
		}

		::System::Void Init(::MX::GameLogic::DBModel::CraftInfoDB* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftInfoDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATION_INIT_OFFSET))(arg, arg2, nullptr);
		}

	};

