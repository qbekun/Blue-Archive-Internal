#pragma once
#include "unitysdk.h"

class UICraftDuration;
class UINodeEditSection;
class UITexture;
class UINodeMap;
namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;
namespace UnityEngine { class Animation; }
namespace MX::GameLogic::DBModel { class CraftNodeDB; }
class UICraftDurationSubNode;
class UICraftDurationNode;
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Coroutine; }
namespace MX::GameLogic::DBModel { class CraftPresetNodeDB; }
namespace MX::Data { class CraftNodeExcelInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UISUBNODESELECTSECTION_GET_CRAFTNODEEXCELINFOS_OFFSET UNITYSDK_OFFSET(0x23B47E0)
#define UISUBNODESELECTSECTION_SET_CRAFTNODEEXCELINFOS_OFFSET UNITYSDK_OFFSET(0x23B47F0)
#define UISUBNODESELECTSECTION_GET_ISOPENWINDOW_OFFSET UNITYSDK_OFFSET(0x23B4810)
#define UISUBNODESELECTSECTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x23B4820)
#define UISUBNODESELECTSECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23B4C40)
#define UISUBNODESELECTSECTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23B4DE0)
#define UISUBNODESELECTSECTION_ANIMOPEN_OFFSET UNITYSDK_OFFSET(0x23B4F60)
#define UISUBNODESELECTSECTION_ANIMCLOSE_OFFSET UNITYSDK_OFFSET(0x23B5010)
#define UISUBNODESELECTSECTION_SIMULATIONMODESETDATA_OFFSET UNITYSDK_OFFSET(0x23B5080)
#define UISUBNODESELECTSECTION_SIMULATIONMODESETDATA_OFFSET UNITYSDK_OFFSET(0x23B5470)
#define UISUBNODESELECTSECTION_SETDATA_OFFSET UNITYSDK_OFFSET(0x23B5910)
#define UISUBNODESELECTSECTION_SETWINDOWINFODATA_OFFSET UNITYSDK_OFFSET(0x23B5290)
#define UISUBNODESELECTSECTION_ONCLICKNODESELECT_OFFSET UNITYSDK_OFFSET(0x23B5C90)
#define UISUBNODESELECTSECTION_ONCLICKCRAFTSTART_OFFSET UNITYSDK_OFFSET(0x23B5E60)
#define UISUBNODESELECTSECTION_ONCLICKCRAFTNEXT_OFFSET UNITYSDK_OFFSET(0x23B6240)
#define UISUBNODESELECTSECTION_GETANGLE_OFFSET UNITYSDK_OFFSET(0x23B6450)
#define UISUBNODESELECTSECTION_CO_DIRECTINGSELECTNODE_OFFSET UNITYSDK_OFFSET(0x23B6710)
#define UISUBNODESELECTSECTION_SETSELECTNODEPOSITION_OFFSET UNITYSDK_OFFSET(0x23B67D0)
#define UISUBNODESELECTSECTION_HANDLECRAFTSELECTNODERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x23B6840)
#define UISUBNODESELECTSECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x23B6980)
#define UISUBNODESELECTSECTION__ONCLICKCRAFTSTART_B__43_1_OFFSET UNITYSDK_OFFSET(0x23B6A10)
#define UISUBNODESELECTSECTION__ONCLICKCRAFTSTART_B__43_6_OFFSET UNITYSDK_OFFSET(0x23B6D00)
#define UISUBNODESELECTSECTION__ONCLICKCRAFTSTART_G__REQUSETCRAFT|43_5_OFFSET UNITYSDK_OFFSET(0x23B6D30)

	inline static constexpr unsigned int UISubNodeSelectSection_TypeDefinitionIndex = 5236;

	class UISubNodeSelectSection : public Il2CppObject
	{
	public:
		::System::Single RotationSpeed; // 0x18
		UICraftDuration* craftDuration; // 0x20
		UINodeEditSection* nodeEditSection; // 0x28
		UITexture* Icon; // 0x30
		UINodeMap* NodeMap; // 0x38
		::UnityEngine::GameObject* SubNodeNav; // 0x40
		UILabel* StepName; // 0x48
		UILabel* NodeName; // 0x50
		UILabel* NodeInfo; // 0x58
		UILabel* StartBtnLabel; // 0x60
		MXButton* CraftNextButton; // 0x68
		MXButton* CraftStartButton; // 0x70
		MXButton* NodeSelectButton; // 0x78
		::UnityEngine::GameObject* NodeBranch; // 0x80
		::UnityEngine::Animation* Anim; // 0x88
		::MX::GameLogic::DBModel::CraftNodeDB* craftNodeDB; // 0x90
		::MX::GameLogic::DBModel::CraftNodeDB* selectedNodeDB; // 0x98
		UICraftDurationSubNode* craftDurationSubNode; // 0xA0
		UICraftDurationNode* curCraftDurationNode; // 0xA8
		::System::Int64 selectNodeId; // 0xB0
		::System::Boolean isOpenWindow; // 0xB8
		::UnityEngine::BoxCollider* nextButtonCol; // 0xC0
		::UnityEngine::BoxCollider* startButtonCol; // 0xC8
		::System::Int32 focusNodeIndex; // 0x0
		::System::String* SubNodeSelectSectionOpenAnim; // 0x0
		::UnityEngine::Coroutine* directingLoopCoroutine; // 0xD0
		Il2CppObject* craftNodeExcelInfos; // 0xD8
		::System::Int64 maxTier; // 0x0

		Il2CppObject* get_CraftNodeExcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_GET_CRAFTNODEEXCELINFOS_OFFSET))(nullptr);
		}

		::System::Void set_CraftNodeExcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_SET_CRAFTNODEEXCELINFOS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOpenWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_GET_ISOPENWINDOW_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void AnimOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_ANIMOPEN_OFFSET))(nullptr);
		}

		::System::Void AnimClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_ANIMCLOSE_OFFSET))(nullptr);
		}

		::System::Void SimulationModeSetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_SIMULATIONMODESETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SimulationModeSetData(::MX::GameLogic::DBModel::CraftPresetNodeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftPresetNodeDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_SIMULATIONMODESETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(UICraftDurationSubNode* arg, UICraftDurationNode* arg2, ::MX::GameLogic::DBModel::CraftNodeDB* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(UICraftDurationSubNode*, UICraftDurationNode*, ::MX::GameLogic::DBModel::CraftNodeDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetWindowInfoData(::MX::Data::CraftNodeExcelInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CraftNodeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_SETWINDOWINFODATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickNodeSelect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_ONCLICKNODESELECT_OFFSET))(nullptr);
		}

		::System::Void OnClickCraftStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_ONCLICKCRAFTSTART_OFFSET))(nullptr);
		}

		::System::Void OnClickCraftNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_ONCLICKCRAFTNEXT_OFFSET))(nullptr);
		}

		::System::Single GetAngle(UICraftDurationNode* arg)
		{
			return ((::System::Single(*)(UICraftDurationNode*, ::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_GETANGLE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_DirectingSelectNode(UICraftDurationNode* arg, UICraftDurationSubNode* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(UICraftDurationNode*, UICraftDurationSubNode*, ::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_CO_DIRECTINGSELECTNODE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSelectNodePosition(UICraftDurationNode* arg, UICraftDurationSubNode* arg2)
		{
			((::System::Void(*)(UICraftDurationNode*, UICraftDurationSubNode*, ::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_SETSELECTNODEPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleCraftSelectNodeResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_HANDLECRAFTSELECTNODERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickCraftStart_b__43_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION__ONCLICKCRAFTSTART_B__43_1_OFFSET))(nullptr);
		}

		::System::Void _OnClickCraftStart_b__43_6()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION__ONCLICKCRAFTSTART_B__43_6_OFFSET))(nullptr);
		}

		::System::Void _OnClickCraftStart_g__RequsetCraft|43_5()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISUBNODESELECTSECTION__ONCLICKCRAFTSTART_G__REQUSETCRAFT|43_5_OFFSET))(nullptr);
		}

	};

