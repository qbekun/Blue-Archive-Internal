#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UICraftDuration;
class ShaderTextureController;
namespace MX::GameLogic::DBModel { class CraftNodeDB; }
namespace UnityEngine { class Animation; }
namespace FlatData { class CraftNodeTier; }
namespace UnityEngine { class Texture; }

#define UICRAFTDURATIONNODE_CLOSENODE_OFFSET UNITYSDK_OFFSET(0x238DF70)
#define UICRAFTDURATIONNODE_SETCOMPLETENODE_OFFSET UNITYSDK_OFFSET(0x238DFF0)
#define UICRAFTDURATIONNODE_SETLEAFNODELISTS_OFFSET UNITYSDK_OFFSET(0x238E240)
#define UICRAFTDURATIONNODE_SETACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0x238E2D0)
#define UICRAFTDURATIONNODE_GET_CRAFTNODEDB_OFFSET UNITYSDK_OFFSET(0x238E5B0)
#define UICRAFTDURATIONNODE_SUBNODEPRESETINIT_OFFSET UNITYSDK_OFFSET(0x238E5C0)
#define UICRAFTDURATIONNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x238E8E0)
#define UICRAFTDURATIONNODE_SELECTSUBNODE_OFFSET UNITYSDK_OFFSET(0x238B8B0)
#define UICRAFTDURATIONNODE_NODEPRESET_OFFSET UNITYSDK_OFFSET(0x238E980)
#define UICRAFTDURATIONNODE_OPENNODE_OFFSET UNITYSDK_OFFSET(0x238EB30)
#define UICRAFTDURATIONNODE_SETGAGEVALUE_OFFSET UNITYSDK_OFFSET(0x238E160)
#define UICRAFTDURATIONNODE_SUBNODEPRESET_OFFSET UNITYSDK_OFFSET(0x238ED00)
#define UICRAFTDURATIONNODE__SETDATA_B__22_0_OFFSET UNITYSDK_OFFSET(0x238EF30)
#define UICRAFTDURATIONNODE_ACTIVESUBNODESECTION_OFFSET UNITYSDK_OFFSET(0x2389940)
#define UICRAFTDURATIONNODE__SETDATA_B__22_1_OFFSET UNITYSDK_OFFSET(0x238EF50)
#define UICRAFTDURATIONNODE__NODEPRESET_B__23_1_OFFSET UNITYSDK_OFFSET(0x238EF70)
#define UICRAFTDURATIONNODE_SETDATA_OFFSET UNITYSDK_OFFSET(0x238EF90)
#define UICRAFTDURATIONNODE__NODEPRESET_B__23_0_OFFSET UNITYSDK_OFFSET(0x238F370)
#define UICRAFTDURATIONNODE_PLAYNODEANIMATIONDIRECTING_OFFSET UNITYSDK_OFFSET(0x238F390)
#define UICRAFTDURATIONNODE_SUBNODEPRESETANIMATION_OFFSET UNITYSDK_OFFSET(0x238F4E0)

	inline static constexpr unsigned int UICraftDurationNode_TypeDefinitionIndex = 5148;

	class UICraftDurationNode : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* CreateEffect; // 0x50
		::UnityEngine::GameObject* SubNodeNav; // 0x58
		UICraftDuration* CraftDuration; // 0x60
		ShaderTextureController* Icon; // 0x68
		ShaderTextureController* IconLine; // 0x70
		::UnityEngine::GameObject* SubNodeSection; // 0x78
		Il2CppObject* SubNodeList; // 0x80
		::MX::GameLogic::DBModel::CraftNodeDB* craftNodeDB; // 0x88
		::UnityEngine::Animation* SubNodeSectionAnim; // 0x90
		::System::Int64 selectSubNodeId; // 0x98
		::System::Int64 nodeId; // 0xA0
		::FlatData::CraftNodeTier* EndTier; // 0xA8
		::System::Boolean isOpenNode; // 0xAC
		::System::Boolean isCompleteNode; // 0xAD
		::System::String* LockNodeAnim; // 0x0
		::System::String* OpenNodeAnim; // 0x0
		::System::String* OpenBaseNodeAnim; // 0x0
		::System::String* OpenNodeBackAnim; // 0x0

		::System::Void CloseNode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE_CLOSENODE_OFFSET))(nullptr);
		}

		::System::Void SetCompleteNode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE_SETCOMPLETENODE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* SetLeafNodeLists()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE_SETLEAFNODELISTS_OFFSET))(nullptr);
		}

		::System::Void SetActiveEffect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE_SETACTIVEEFFECT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CraftNodeDB* get_CraftNodeDB()
		{
			return ((::MX::GameLogic::DBModel::CraftNodeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE_GET_CRAFTNODEDB_OFFSET))(nullptr);
		}

		::System::Void SubNodePresetInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE_SUBNODEPRESETINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SelectSubNode(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE_SELECTSUBNODE_OFFSET))(arg, nullptr);
		}

		::System::Void NodePreset(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE_NODEPRESET_OFFSET))(arg, nullptr);
		}

		::System::Void OpenNode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE_OPENNODE_OFFSET))(nullptr);
		}

		::System::Void SetGageValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE_SETGAGEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SubNodePreset(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE_SUBNODEPRESET_OFFSET))(arg, nullptr);
		}

		::System::Void _SetData_b__22_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE__SETDATA_B__22_0_OFFSET))(arg, nullptr);
		}

		::System::Void ActiveSubNodeSection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE_ACTIVESUBNODESECTION_OFFSET))(nullptr);
		}

		::System::Void _SetData_b__22_1(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE__SETDATA_B__22_1_OFFSET))(arg, nullptr);
		}

		::System::Void _NodePreset_b__23_1(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE__NODEPRESET_B__23_1_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::CraftNodeDB* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftNodeDB*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _NodePreset_b__23_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE__NODEPRESET_B__23_0_OFFSET))(arg, nullptr);
		}

		::System::Void PlayNodeAnimationDirecting(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE_PLAYNODEANIMATIONDIRECTING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SubNodePresetAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTDURATIONNODE_SUBNODEPRESETANIMATION_OFFSET))(arg, nullptr);
		}

	};

