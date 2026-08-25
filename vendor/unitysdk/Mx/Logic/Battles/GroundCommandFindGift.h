#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
class FindGiftProcess;
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_.CTOR_OFFSET UNITYSDK_OFFSET(0x12D6620)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_TIMEOUTGRADE_OFFSET UNITYSDK_OFFSET(0x12D6670)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_COUPDATEPROCESS_OFFSET UNITYSDK_OFFSET(0x12D6810)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_COSTARTPROCESS_OFFSET UNITYSDK_OFFSET(0x12D68A0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12D6940)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12D6BD0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_GET_CLEARCOUNT_OFFSET UNITYSDK_OFFSET(0x12D6D00)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_SET_CURGRADE_OFFSET UNITYSDK_OFFSET(0x12D6D10)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_GET_SPAWNPOINTINDEX_OFFSET UNITYSDK_OFFSET(0x12D6D20)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_CLEARGRADE_OFFSET UNITYSDK_OFFSET(0x12D6D30)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D6EB0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_STOPUPDATEPROCESS_OFFSET UNITYSDK_OFFSET(0x12D6690)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12D6950)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_SET_CLEARCOUNT_OFFSET UNITYSDK_OFFSET(0x12D7F60)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_GET_CURGRADE_OFFSET UNITYSDK_OFFSET(0x12D7F70)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_END_OFFSET UNITYSDK_OFFSET(0x12D6760)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_CREATEPROCESS_OFFSET UNITYSDK_OFFSET(0x12D7F80)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D8180)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandFindGift_TypeDefinitionIndex = 14168;

	class GroundCommandFindGift : public Il2CppObject
	{
	public:
		::System::String* UniqueName; // 0x30
		Il2CppObject* SpawnPointCommandIdList; // 0x38
		::System::Single SpawnDelay; // 0x40
		::System::Int32 _CurGrade_k__BackingField; // 0x44
		::System::Int32 _ClearCount_k__BackingField; // 0x48
		::MX::Logic::Battles::Battle* battle; // 0x50
		::System::Collections::IEnumerator* coroutine; // 0x58
		FindGiftProcess* curProcess; // 0x60
		Il2CppObject* StartProcessAction; // 0x68
		::System::Action* EndAction; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void TimeOutGrade()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_TIMEOUTGRADE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoUpdateProcess()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_COUPDATEPROCESS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoStartProcess(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_COSTARTPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ClearCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_GET_CLEARCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CurGrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_SET_CURGRADE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SpawnPointIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_GET_SPAWNPOINTINDEX_OFFSET))(nullptr);
		}

		::System::Void ClearGrade()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_CLEARGRADE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandFindGift&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandFindGift&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StopUpdateProcess()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_STOPUPDATEPROCESS_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void set_ClearCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_SET_CLEARCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_GET_CURGRADE_OFFSET))(nullptr);
		}

		::System::Void End(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_END_OFFSET))(arg, nullptr);
		}

		FindGiftProcess* CreateProcess(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((FindGiftProcess*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_CREATEPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandFindGift&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandFindGift&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFINDGIFT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

