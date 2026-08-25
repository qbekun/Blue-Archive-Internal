#pragma once
#include "unitysdk.h"

class UICraftDuration;
namespace UnityEngine { class Animation; }
class UICraftDurationNode;
namespace MX::GameLogic::DBModel { class CraftNodeDB; }
namespace FlatData { class CraftNodeTier; }

#define UINODEMAP_GET_CRAFTINGNODE_OFFSET UNITYSDK_OFFSET(0x239CC90)
#define UINODEMAP_GET_PROGRESSANIM_OFFSET UNITYSDK_OFFSET(0x239CCA0)
#define UINODEMAP_GET_CURTIERZOOMOUTANIM_OFFSET UNITYSDK_OFFSET(0x239CCB0)
#define UINODEMAP_SET_CURTIERZOOMOUTANIM_OFFSET UNITYSDK_OFFSET(0x239CCC0)
#define UINODEMAP_INITIALIZEDSIMULATIONMODE_OFFSET UNITYSDK_OFFSET(0x239CCD0)
#define UINODEMAP_SIMULATIONMODESETSCREEN_OFFSET UNITYSDK_OFFSET(0x239BB80)
#define UINODEMAP_REVERTANIMQUEUE_OFFSET UNITYSDK_OFFSET(0x239CE70)
#define UINODEMAP_SIMULATIONMODESETNODE_OFFSET UNITYSDK_OFFSET(0x239D050)
#define UINODEMAP_INIT_OFFSET UNITYSDK_OFFSET(0x2388A00)
#define UINODEMAP_SETDATACRAFTNODELIST_OFFSET UNITYSDK_OFFSET(0x23896F0)
#define UINODEMAP_ISSELECTSUBNODEANIM_OFFSET UNITYSDK_OFFSET(0x239D340)
#define UINODEMAP_SETSCREEN_OFFSET UNITYSDK_OFFSET(0x238B550)
#define UINODEMAP_RESETANIM_OFFSET UNITYSDK_OFFSET(0x239D3D0)
#define UINODEMAP_SETSCREEN_OFFSET UNITYSDK_OFFSET(0x239D0F0)
#define UINODEMAP_SHOWENDANIMATION_OFFSET UNITYSDK_OFFSET(0x2389640)
#define UINODEMAP_ISMOVEFROMMAINTOSUBANIMATION_OFFSET UNITYSDK_OFFSET(0x23898B0)
#define UINODEMAP_ISMOVEFROMSUBTOMAINANIMATION_OFFSET UNITYSDK_OFFSET(0x23895B0)
#define UINODEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x239D4F0)

	inline static constexpr unsigned int UINodeMap_TypeDefinitionIndex = 5177;

	class UINodeMap : public Il2CppObject
	{
	public:
		UICraftDuration* CraftDuration; // 0x18
		Il2CppObject* NodeList; // 0x20
		::UnityEngine::Animation* Anim; // 0x28
		Il2CppObject* craftNodeDBList; // 0x30
		::System::String* curAnim; // 0x38
		UICraftDurationNode* craftingNode; // 0x40
		::System::String* _CurTierZoomOutAnim_k__BackingField; // 0x48
		::System::String* Anim_BaseToSub; // 0x0
		::System::String* Anim_SubOfBaseToSecond; // 0x0
		::System::String* Anim_FirstToSub; // 0x0
		::System::String* Anim_SubOfFirstToSecond; // 0x0
		::System::String* Anim_SecondToSub; // 0x0
		::System::String* Anim_SubOfSecondToThird; // 0x0
		::System::String* Anim_ZoomOut02; // 0x0
		::System::String* Anim_ZoomOut03; // 0x0
		::System::String* Anim_ZoomOut04; // 0x0
		::System::String* Anim_SubOfBaseToSelect; // 0x0
		::System::String* Anim_SubOfFirstToSelect; // 0x0
		::System::String* Anim_SubOfSecondToSelect; // 0x0
		Il2CppObject* presetAnimStepQueue; // 0x50
		Il2CppObject* lastestAnimQueue; // 0x58

		UICraftDurationNode* get_CraftingNode()
		{
			return ((UICraftDurationNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_GET_CRAFTINGNODE_OFFSET))(nullptr);
		}

		::System::String* get_ProgressAnim()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_GET_PROGRESSANIM_OFFSET))(nullptr);
		}

		::System::String* get_CurTierZoomOutAnim()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_GET_CURTIERZOOMOUTANIM_OFFSET))(nullptr);
		}

		::System::Void set_CurTierZoomOutAnim(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_SET_CURTIERZOOMOUTANIM_OFFSET))(str, nullptr);
		}

		::System::Void InitializedSimulationMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_INITIALIZEDSIMULATIONMODE_OFFSET))(nullptr);
		}

		::System::Void SimulationModeSetScreen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_SIMULATIONMODESETSCREEN_OFFSET))(nullptr);
		}

		::System::Void RevertAnimQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_REVERTANIMQUEUE_OFFSET))(nullptr);
		}

		::System::Void SimulationModeSetNode(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_SIMULATIONMODESETNODE_OFFSET))(arg, nullptr);
		}

		::System::Void Init(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetDataCraftNodeList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_SETDATACRAFTNODELIST_OFFSET))(nullptr);
		}

		::System::Boolean IsSelectSubNodeAnim(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_ISSELECTSUBNODEANIM_OFFSET))(str, nullptr);
		}

		::System::Void SetScreen(::MX::GameLogic::DBModel::CraftNodeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftNodeDB*, ::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_SETSCREEN_OFFSET))(arg, nullptr);
		}

		::System::Void ResetAnim(::FlatData::CraftNodeTier* arg)
		{
			((::System::Void(*)(::FlatData::CraftNodeTier*, ::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_RESETANIM_OFFSET))(arg, nullptr);
		}

		::System::Void SetScreen(::FlatData::CraftNodeTier* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatData::CraftNodeTier*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_SETSCREEN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ShowEndAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_SHOWENDANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMoveFromMainToSubAnimation(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_ISMOVEFROMMAINTOSUBANIMATION_OFFSET))(str, nullptr);
		}

		::System::Boolean IsMoveFromSubToMainAnimation(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_ISMOVEFROMSUBTOMAINANIMATION_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINODEMAP_.CTOR_OFFSET))(nullptr);
		}

	};

