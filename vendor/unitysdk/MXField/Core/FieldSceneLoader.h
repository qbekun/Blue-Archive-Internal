#pragma once
#include "../../unitysdk.h"

namespace MXField::Actions { class CoFieldAction; }
namespace MXField::Core { class FieldPlayerController; }
namespace MXField::Core { class FieldPlayerStart; }
namespace MXField::Level { class FieldDesignLevelRoot; }
namespace MXField::Shared::Data { class FieldSceneInfo; }
namespace MX::Data::Excel { class FieldQuestGroupExcel; }
namespace UnityEngine { class Transform; }

#define MXFIELD_CORE_FIELDSCENELOADER__SETPLAYERONPLAYERSTART_B__47_0_OFFSET UNITYSDK_OFFSET(0xED7520)
#define MXFIELD_CORE_FIELDSCENELOADER_GET__FORCELOADALL_OFFSET UNITYSDK_OFFSET(0xED75F0)
#define MXFIELD_CORE_FIELDSCENELOADER__SETPLAYERONPLAYERSTART_B__47_1_OFFSET UNITYSDK_OFFSET(0xED7660)
#define MXFIELD_CORE_FIELDSCENELOADER_GET__CLIENTACTION_OFFSET UNITYSDK_OFFSET(0xED76D0)
#define MXFIELD_CORE_FIELDSCENELOADER__LOADPLAYERCHARACTER_B__46_0_OFFSET UNITYSDK_OFFSET(0xED76E0)
#define MXFIELD_CORE_FIELDSCENELOADER_LOADDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0xED77F0)
#define MXFIELD_CORE_FIELDSCENELOADER_SET__LOADFINISHACTION_OFFSET UNITYSDK_OFFSET(0xED7980)
#define MXFIELD_CORE_FIELDSCENELOADER_GET__ISDESIGNLEVELLOADED_OFFSET UNITYSDK_OFFSET(0xED7990)
#define MXFIELD_CORE_FIELDSCENELOADER_GETBGMID_OFFSET UNITYSDK_OFFSET(0xED79A0)
#define MXFIELD_CORE_FIELDSCENELOADER_GET__ISQUESTSKIP_OFFSET UNITYSDK_OFFSET(0xED7DC0)
#define MXFIELD_CORE_FIELDSCENELOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0xED7DF0)
#define MXFIELD_CORE_FIELDSCENELOADER_GET__LOADFINISHACTION_OFFSET UNITYSDK_OFFSET(0xED7E00)
#define MXFIELD_CORE_FIELDSCENELOADER_GET__QUESTGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0xED7E10)
#define MXFIELD_CORE_FIELDSCENELOADER_ONLOADFINISHED_OFFSET UNITYSDK_OFFSET(0xED7E30)
#define MXFIELD_CORE_FIELDSCENELOADER_LOADARTLEVEL_OFFSET UNITYSDK_OFFSET(0xED83C0)
#define MXFIELD_CORE_FIELDSCENELOADER_EXECUTE_OFFSET UNITYSDK_OFFSET(0xED85F0)
#define MXFIELD_CORE_FIELDSCENELOADER__LOADPLAYERCHARACTER_G__ONPLAYERCHARACTERSPAWNED|46_1_OFFSET UNITYSDK_OFFSET(0xED7750)
#define MXFIELD_CORE_FIELDSCENELOADER_GET__PLAYERCONTROLLER_OFFSET UNITYSDK_OFFSET(0xED88A0)
#define MXFIELD_CORE_FIELDSCENELOADER_SET__CLIENTACTION_OFFSET UNITYSDK_OFFSET(0xED88B0)
#define MXFIELD_CORE_FIELDSCENELOADER_SET__ISDESIGNLEVELLOADED_OFFSET UNITYSDK_OFFSET(0xED88C0)
#define MXFIELD_CORE_FIELDSCENELOADER_SET__PLAYERCONTROLLER_OFFSET UNITYSDK_OFFSET(0xED88D0)
#define MXFIELD_CORE_FIELDSCENELOADER_SETPLAYERONPLAYERSTART_OFFSET UNITYSDK_OFFSET(0xED86D0)
#define MXFIELD_CORE_FIELDSCENELOADER_EXECUTE_QUESTSKIP_OFFSET UNITYSDK_OFFSET(0xED88E0)
#define MXFIELD_CORE_FIELDSCENELOADER_LOADPLAYERCHARACTER_OFFSET UNITYSDK_OFFSET(0xED89A0)
#define MXFIELD_CORE_FIELDSCENELOADER_FINDCAMERA_OFFSET UNITYSDK_OFFSET(0xED8200)
#define MXFIELD_CORE_FIELDSCENELOADER_SET__PLAYERSTART_OFFSET UNITYSDK_OFFSET(0xED8B50)
#define MXFIELD_CORE_FIELDSCENELOADER_GET__ISARTLEVELLOADED_OFFSET UNITYSDK_OFFSET(0xED8B60)
#define MXFIELD_CORE_FIELDSCENELOADER_GET__PREVIOUSSCENEID_OFFSET UNITYSDK_OFFSET(0xED8B70)
#define MXFIELD_CORE_FIELDSCENELOADER_SET__QUESTGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0xED8B80)
#define MXFIELD_CORE_FIELDSCENELOADER_GET__LOADEDDESIGNLEVELROOT_OFFSET UNITYSDK_OFFSET(0xED8BA0)
#define MXFIELD_CORE_FIELDSCENELOADER_GET__PLAYERSTART_OFFSET UNITYSDK_OFFSET(0xED8BB0)
#define MXFIELD_CORE_FIELDSCENELOADER_SET__ISARTLEVELLOADED_OFFSET UNITYSDK_OFFSET(0xED8BC0)
#define MXFIELD_CORE_FIELDSCENELOADER_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xED8BD0)
#define MXFIELD_CORE_FIELDSCENELOADER_SET__PREVIOUSSCENEID_OFFSET UNITYSDK_OFFSET(0xED8C70)
#define MXFIELD_CORE_FIELDSCENELOADER_NEEDARTLEVELCHANGE_OFFSET UNITYSDK_OFFSET(0xED8C80)
#define MXFIELD_CORE_FIELDSCENELOADER_SET__LOADEDDESIGNLEVELROOT_OFFSET UNITYSDK_OFFSET(0xED8D70)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldSceneLoader_TypeDefinitionIndex = 10963;

	class FieldSceneLoader : public Il2CppObject
	{
	public:
		::System::Boolean __isArtLevelLoaded_k__BackingField; // 0x10
		::System::Boolean __isDesignLevelLoaded_k__BackingField; // 0x11
		::System::Int64 __previousSceneId_k__BackingField; // 0x18
		::MXField::Actions::CoFieldAction* __clientAction_k__BackingField; // 0x20
		::System::Action* __loadFinishAction_k__BackingField; // 0x28
		::MXField::Core::FieldPlayerController* __playerController_k__BackingField; // 0x30
		::MXField::Core::FieldPlayerStart* __playerStart_k__BackingField; // 0x38
		Il2CppObject* __questGroupExcel_k__BackingField; // 0x40
		::MXField::Level::FieldDesignLevelRoot* __loadedDesignLevelRoot_k__BackingField; // 0x58

		::System::Boolean _SetPlayerOnPlayerStart_b__47_0(::MXField::Core::FieldPlayerStart* arg)
		{
			return ((::System::Boolean(*)(::MXField::Core::FieldPlayerStart*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER__SETPLAYERONPLAYERSTART_B__47_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean get__forceLoadAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_GET__FORCELOADALL_OFFSET))(nullptr);
		}

		::System::Boolean _SetPlayerOnPlayerStart_b__47_1(::MXField::Core::FieldPlayerStart* arg)
		{
			return ((::System::Boolean(*)(::MXField::Core::FieldPlayerStart*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER__SETPLAYERONPLAYERSTART_B__47_1_OFFSET))(arg, nullptr);
		}

		::MXField::Actions::CoFieldAction* get__clientAction()
		{
			return ((::MXField::Actions::CoFieldAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_GET__CLIENTACTION_OFFSET))(nullptr);
		}

		::System::Void _LoadPlayerCharacter_b__46_0(::MXField::Core::FieldPlayerController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldPlayerController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER__LOADPLAYERCHARACTER_B__46_0_OFFSET))(arg, nullptr);
		}

		::System::Void LoadDesignLevel(::MXField::Shared::Data::FieldSceneInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldSceneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_LOADDESIGNLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set__loadFinishAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_SET__LOADFINISHACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get__isDesignLevelLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_GET__ISDESIGNLEVELLOADED_OFFSET))(nullptr);
		}

		::System::Int64 GetBGMId(::MXField::Shared::Data::FieldSceneInfo* arg, Il2CppObject* arg2)
		{
			return ((::System::Int64(*)(::MXField::Shared::Data::FieldSceneInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_GETBGMID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get__isQuestSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_GET__ISQUESTSKIP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_.CTOR_OFFSET))(nullptr);
		}

		::System::Action* get__loadFinishAction()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_GET__LOADFINISHACTION_OFFSET))(nullptr);
		}

		Il2CppObject* get__questGroupExcel()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_GET__QUESTGROUPEXCEL_OFFSET))(nullptr);
		}

		::System::Void OnLoadFinished(::MXField::Shared::Data::FieldSceneInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldSceneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_ONLOADFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void LoadArtLevel(::MXField::Shared::Data::FieldSceneInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldSceneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_LOADARTLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Execute(::System::Int64 arg, ::System::Int64 arg2, ::MXField::Actions::CoFieldAction* arg3, ::System::Action* arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::System::Int64, ::MXField::Actions::CoFieldAction*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_EXECUTE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void _LoadPlayerCharacter_g__OnPlayerCharacterSpawned|46_1(::MXField::Core::FieldPlayerController* arg, ::MXField::Level::FieldDesignLevelRoot* arg2)
		{
			((::System::Void(*)(::MXField::Core::FieldPlayerController*, ::MXField::Level::FieldDesignLevelRoot*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER__LOADPLAYERCHARACTER_G__ONPLAYERCHARACTERSPAWNED|46_1_OFFSET))(arg, arg2, nullptr);
		}

		::MXField::Core::FieldPlayerController* get__playerController()
		{
			return ((::MXField::Core::FieldPlayerController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_GET__PLAYERCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void set__clientAction(::MXField::Actions::CoFieldAction* arg)
		{
			((::System::Void(*)(::MXField::Actions::CoFieldAction*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_SET__CLIENTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void set__isDesignLevelLoaded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_SET__ISDESIGNLEVELLOADED_OFFSET))(arg, nullptr);
		}

		::System::Void set__playerController(::MXField::Core::FieldPlayerController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldPlayerController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_SET__PLAYERCONTROLLER_OFFSET))(arg, nullptr);
		}

		::MXField::Core::FieldPlayerStart* SetPlayerOnPlayerStart(::MXField::Core::FieldPlayerController* arg, ::MXField::Level::FieldDesignLevelRoot* arg2)
		{
			return ((::MXField::Core::FieldPlayerStart*(*)(::MXField::Core::FieldPlayerController*, ::MXField::Level::FieldDesignLevelRoot*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_SETPLAYERONPLAYERSTART_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* Execute_QuestSkip(::MX::Data::Excel::FieldQuestGroupExcel* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::Excel::FieldQuestGroupExcel*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_EXECUTE_QUESTSKIP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LoadPlayerCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_LOADPLAYERCHARACTER_OFFSET))(nullptr);
		}

		::System::Void FindCamera(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_FINDCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void set__playerStart(::MXField::Core::FieldPlayerStart* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldPlayerStart*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_SET__PLAYERSTART_OFFSET))(arg, nullptr);
		}

		::System::Boolean get__isArtLevelLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_GET__ISARTLEVELLOADED_OFFSET))(nullptr);
		}

		::System::Int64 get__previousSceneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_GET__PREVIOUSSCENEID_OFFSET))(nullptr);
		}

		::System::Void set__questGroupExcel(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_SET__QUESTGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MXField::Level::FieldDesignLevelRoot* get__loadedDesignLevelRoot()
		{
			return ((::MXField::Level::FieldDesignLevelRoot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_GET__LOADEDDESIGNLEVELROOT_OFFSET))(nullptr);
		}

		::MXField::Core::FieldPlayerStart* get__playerStart()
		{
			return ((::MXField::Core::FieldPlayerStart*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_GET__PLAYERSTART_OFFSET))(nullptr);
		}

		::System::Void set__isArtLevelLoaded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_SET__ISARTLEVELLOADED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_COEXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void set__previousSceneId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_SET__PREVIOUSSCENEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean NeedArtLevelChange(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_NEEDARTLEVELCHANGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set__loadedDesignLevelRoot(::MXField::Level::FieldDesignLevelRoot* arg)
		{
			((::System::Void(*)(::MXField::Level::FieldDesignLevelRoot*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSCENELOADER_SET__LOADEDDESIGNLEVELROOT_OFFSET))(arg, nullptr);
		}

	};
}

