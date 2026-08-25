#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class PlayerSpawnPoint; }
namespace UnityEngine { class Vector3; }
class UIMiniGameShootingGeasSelect;
namespace MX::MinigameShooting { class Entity; }
namespace MX::MinigameShooting { class GroupInfo; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Vector4; }

#define MX_MINIGAMESHOOTING_SECTION_ENDSECTION_OFFSET UNITYSDK_OFFSET(0x1471A10)
#define MX_MINIGAMESHOOTING_SECTION_SET_ENEMYSPAWNPOINTS_OFFSET UNITYSDK_OFFSET(0x1471EE0)
#define MX_MINIGAMESHOOTING_SECTION_LOAD_OFFSET UNITYSDK_OFFSET(0x1471EF0)
#define MX_MINIGAMESHOOTING_SECTION_GET_SECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1471F90)
#define MX_MINIGAMESHOOTING_SECTION_SET_NEXTSPAWNGROUPID_OFFSET UNITYSDK_OFFSET(0x1471FA0)
#define MX_MINIGAMESHOOTING_SECTION_GET_ENEMIES_OFFSET UNITYSDK_OFFSET(0x1471FB0)
#define MX_MINIGAMESHOOTING_SECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1471FC0)
#define MX_MINIGAMESHOOTING_SECTION_SPAWNENEMY_OFFSET UNITYSDK_OFFSET(0x1471FD0)
#define MX_MINIGAMESHOOTING_SECTION_GET_NEXTSPAWNGROUPID_OFFSET UNITYSDK_OFFSET(0x1472070)
#define MX_MINIGAMESHOOTING_SECTION__ENDSECTION_B__44_0_OFFSET UNITYSDK_OFFSET(0x1472080)
#define MX_MINIGAMESHOOTING_SECTION_ENEMYALLDEAD_OFFSET UNITYSDK_OFFSET(0x1472110)
#define MX_MINIGAMESHOOTING_SECTION__ENDSECTION_B__44_1_OFFSET UNITYSDK_OFFSET(0x1472230)
#define MX_MINIGAMESHOOTING_SECTION_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x14722E0)
#define MX_MINIGAMESHOOTING_SECTION_ADDENTITY_OFFSET UNITYSDK_OFFSET(0x14722F0)
#define MX_MINIGAMESHOOTING_SECTION_REMOVEENTITY_OFFSET UNITYSDK_OFFSET(0x1471D60)
#define MX_MINIGAMESHOOTING_SECTION_GET_ENEMYSPAWNPOINTS_OFFSET UNITYSDK_OFFSET(0x14724A0)
#define MX_MINIGAMESHOOTING_SECTION_SET_ENDPOINTS_OFFSET UNITYSDK_OFFSET(0x14724B0)
#define MX_MINIGAMESHOOTING_SECTION_LOADGROUP_OFFSET UNITYSDK_OFFSET(0x14724C0)
#define MX_MINIGAMESHOOTING_SECTION_GET_ENDPOINTS_OFFSET UNITYSDK_OFFSET(0x1472570)
#define MX_MINIGAMESHOOTING_SECTION_STARTSECTION_OFFSET UNITYSDK_OFFSET(0x1472580)
#define MX_MINIGAMESHOOTING_SECTION_SET_SECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1472740)
#define MX_MINIGAMESHOOTING_SECTION_SET_PLAYERSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x1472750)
#define MX_MINIGAMESHOOTING_SECTION__LOADGROUP_G__V4TOQUAT|36_0_OFFSET UNITYSDK_OFFSET(0x1472760)
#define MX_MINIGAMESHOOTING_SECTION_SET_ENEMIES_OFFSET UNITYSDK_OFFSET(0x1472770)
#define MX_MINIGAMESHOOTING_SECTION_SET_PROJECTILES_OFFSET UNITYSDK_OFFSET(0x1472780)
#define MX_MINIGAMESHOOTING_SECTION_RELEASE_OFFSET UNITYSDK_OFFSET(0x1472790)
#define MX_MINIGAMESHOOTING_SECTION_GET_PLAYERSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x1472880)
#define MX_MINIGAMESHOOTING_SECTION_GET_PROJECTILES_OFFSET UNITYSDK_OFFSET(0x1472890)
#define MX_MINIGAMESHOOTING_SECTION__LOADGROUP_G__GETADDRESSKEY|36_1_OFFSET UNITYSDK_OFFSET(0x14728A0)
#define MX_MINIGAMESHOOTING_SECTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1472970)
#define MX_MINIGAMESHOOTING_SECTION_SET_ISEND_OFFSET UNITYSDK_OFFSET(0x1472AC0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int Section_TypeDefinitionIndex = 15138;

	class Section : public Il2CppObject
	{
	public:
		::System::Boolean _IsEnd_k__BackingField; // 0x18
		::System::Int32 _SectionIndex_k__BackingField; // 0x1C
		::MX::MinigameShooting::PlayerSpawnPoint* _PlayerSpawnPoint_k__BackingField; // 0x20
		::System::Int32 _NextSpawnGroupId_k__BackingField; // 0x28
		Il2CppObject* _EnemySpawnPoints_k__BackingField; // 0x30
		::Il2CppArray<::System::Object*>* _EndPoints_k__BackingField; // 0x38
		Il2CppObject* _Enemies_k__BackingField; // 0x40
		Il2CppObject* _Projectiles_k__BackingField; // 0x48
		::Il2CppArray<::System::Object*>* sectionGroup; // 0x50
		::UnityEngine::Vector3* CameraTopLimit; // 0x58
		::UnityEngine::Vector3* CameraBottomLimit; // 0x64

		::System::Void EndSection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_ENDSECTION_OFFSET))(nullptr);
		}

		::System::Void set_EnemySpawnPoints(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_SET_ENEMYSPAWNPOINTS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Load(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_LOAD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SectionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_GET_SECTIONINDEX_OFFSET))(nullptr);
		}

		::System::Void set_NextSpawnGroupId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_SET_NEXTSPAWNGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Enemies()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_GET_ENEMIES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* SpawnEnemy(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_SPAWNENEMY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NextSpawnGroupId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_GET_NEXTSPAWNGROUPID_OFFSET))(nullptr);
		}

		::System::Void _EndSection_b__44_0(UIMiniGameShootingGeasSelect* arg)
		{
			((::System::Void(*)(UIMiniGameShootingGeasSelect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION__ENDSECTION_B__44_0_OFFSET))(arg, nullptr);
		}

		::System::Void EnemyAllDead()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_ENEMYALLDEAD_OFFSET))(nullptr);
		}

		::System::Void _EndSection_b__44_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION__ENDSECTION_B__44_1_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_GET_ISEND_OFFSET))(nullptr);
		}

		::System::Void AddEntity(::MX::MinigameShooting::Entity* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Entity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_ADDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveEntity(::MX::MinigameShooting::Entity* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::Entity*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_REMOVEENTITY_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_EnemySpawnPoints()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_GET_ENEMYSPAWNPOINTS_OFFSET))(nullptr);
		}

		::System::Void set_EndPoints(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_SET_ENDPOINTS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* LoadGroup(::MX::MinigameShooting::GroupInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::MinigameShooting::GroupInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_LOADGROUP_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_EndPoints()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_GET_ENDPOINTS_OFFSET))(nullptr);
		}

		::System::Void StartSection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_STARTSECTION_OFFSET))(nullptr);
		}

		::System::Void set_SectionIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_SET_SECTIONINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_PlayerSpawnPoint(::MX::MinigameShooting::PlayerSpawnPoint* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::PlayerSpawnPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_SET_PLAYERSPAWNPOINT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* _LoadGroup_g__V4ToQuat|36_0(::UnityEngine::Vector4* arg)
		{
			return ((::UnityEngine::Quaternion*(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION__LOADGROUP_G__V4TOQUAT|36_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_Enemies(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_SET_ENEMIES_OFFSET))(arg, nullptr);
		}

		::System::Void set_Projectiles(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_SET_PROJECTILES_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_RELEASE_OFFSET))(nullptr);
		}

		::MX::MinigameShooting::PlayerSpawnPoint* get_PlayerSpawnPoint()
		{
			return ((::MX::MinigameShooting::PlayerSpawnPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_GET_PLAYERSPAWNPOINT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Projectiles()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_GET_PROJECTILES_OFFSET))(nullptr);
		}

		::System::String* _LoadGroup_g__GetAddressKey|36_1(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION__LOADGROUP_G__GETADDRESSKEY|36_1_OFFSET))(str, nullptr);
		}

		::System::Void Initialize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsEnd(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTION_SET_ISEND_OFFSET))(arg, nullptr);
		}

	};
}

